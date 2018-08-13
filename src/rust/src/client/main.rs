extern crate grpcio;
extern crate protos;
extern crate protobuf;

use std::sync::Arc;

use protos::{event, event_grpc};

use protobuf::well_known_types::{Struct, Value};

use std::collections::HashMap;

fn main() {
    let env = Arc::new(grpcio::EnvBuilder::new().build());
    let ch = grpcio::ChannelBuilder::new(env).connect("0.0.0.0:50051");
    // let client = event_grpc::eventClient::new(ch);

    // let mut req = event::eventRequest::new();
    // req.set_uen("foo".to_owned());
    // let reply = client.get_event(&req).expect("failed to get event");
    // println!("Received: {:?}", reply);


    let event_client = event_grpc::EventClient::new(ch);
    let mut req = event::PutEventRequest::new();
    req.set_field_type("RUST_CLIENT_EVENT".to_string());

    let mut my_struct = Struct::new();
    let mut my_values = HashMap::new();
    let mut value = Value::new();
    value.set_string_value("bar".to_string());
    my_values.insert("foo".to_string(), value);
    my_struct.set_fields(my_values);

    req.set_payload(my_struct);
    let reply = event_client.put_event(&req);
    println!("Received: {:?}", reply);

    let mut req = event::GetEventsSinceRequest::new();
    req.set_field_type("RUST_CLIENT_EVENT".to_string());
    req.set_id(0);
    let reply = event_client.get_events_since(&req);
    println!("Received: {:?}", reply);
}
