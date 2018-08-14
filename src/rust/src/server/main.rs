extern crate futures;
extern crate grpcio;
extern crate protobuf;
extern crate protos;
#[macro_use]
extern crate lazy_static;

use std::collections::HashMap;
use std::io::Read;
use std::sync::{Arc, Mutex};

use futures::future::Future;
use protos::{event, event_grpc};

#[derive(Clone)]
struct EventService {
    pub events: Vec<Event>,
}

#[derive(Clone, Debug)]
struct Event {
    id: usize,
    event_type: String,
    payload: HashMap<String, protobuf::well_known_types::Value>,
}

lazy_static! {
    static ref EVENTS_LIST: Mutex<Vec<Event>> = Mutex::new(Vec::new());
}

impl protos::event_grpc::Event for EventService {
    fn put_event(
        &self,
        ctx: grpcio::RpcContext,
        req: event::PutEventRequest,
        sink: grpcio::UnarySink<event::EventResponse>,
    ) {
        println!("Received request {:?}", &req);
        let payload = req.get_payload().get_fields();

        let event_obj = Event {
            id: self.events.len(),
            event_type: req.field_type.clone(),
            payload: payload.clone(),
        };

        let mut list = EVENTS_LIST
            .lock()
            .expect("failed to acquire lock on EVENTS_LIST");
        list.push(event_obj);

        println!("EVENTS_LIST {:?}", list.clone());

        let resp = event::EventResponse::new();
        let f = sink
            .success(resp)
            .map_err(move |e| panic!("error: failed to reply {:?}", e));
        ctx.spawn(f);
    }

    fn get_events_since(
        &self,
        ctx: grpcio::RpcContext,
        req: event::GetEventsSinceRequest,
        sink: grpcio::UnarySink<event::GetEventsSinceResponse>,
    ) {
        println!("Received request {:?}", &req);

        let list = EVENTS_LIST
            .lock()
            .expect("failed to acquire lock on EVENTS_LIST");

        let events = list
            .iter()
            .filter(|evt| evt.id >= req.id as usize && evt.event_type == req.field_type);

        let proto_structs: Vec<protobuf::well_known_types::Struct> = events
            .map(|evt| {
                let mut proto_struct = protobuf::well_known_types::Struct::new();
                proto_struct.set_fields(evt.payload.clone());
                proto_struct
            }).collect();

        println!("Found {:?} events", proto_structs.len());

        let mut resp = event::GetEventsSinceResponse::new();
        let proto_events = protobuf::RepeatedField::from_vec(proto_structs);
        resp.set_events(proto_events);

        let f = sink
            .success(resp)
            .map_err(move |e| panic!("error: failed to reply {:?}", e));
        ctx.spawn(f);
    }
}

fn main() {
    println!("Hello, world!");
    let env = Arc::new(grpcio::Environment::new(1));
    let service = event_grpc::create_event(EventService { events: Vec::new() });

    let mut server = grpcio::ServerBuilder::new(env)
        .register_service(service)
        .bind("0.0.0.0", 50051)
        .build()
        .expect("failed to build server");

    server.start();

    // Futures boilerplate
    let (tx, rx) = futures::sync::oneshot::channel();
    std::thread::spawn(move || {
        println!("Press ENTER to exit...");
        let _ = std::io::stdin()
            .read(&mut [0])
            .expect("failed to start main thread");
        tx.send(())
    });
    let _ = rx.wait();
    let _ = server.shutdown().wait();
}
