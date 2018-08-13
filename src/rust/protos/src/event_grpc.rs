// This file is generated. Do not edit
// @generated

// https://github.com/Manishearth/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy)]

#![cfg_attr(rustfmt, rustfmt_skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unsafe_code)]
#![allow(unused_imports)]
#![allow(unused_results)]

const METHOD_EVENT_PUT_EVENT: ::grpcio::Method<super::event::PutEventRequest, super::event::EventResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/event.Event/PutEvent",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

const METHOD_EVENT_GET_EVENTS_SINCE: ::grpcio::Method<super::event::GetEventsSinceRequest, super::event::GetEventsSinceResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/event.Event/GetEventsSince",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

pub struct EventClient {
    client: ::grpcio::Client,
}

impl EventClient {
    pub fn new(channel: ::grpcio::Channel) -> Self {
        EventClient {
            client: ::grpcio::Client::new(channel),
        }
    }

    pub fn put_event_opt(&self, req: &super::event::PutEventRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::event::EventResponse> {
        self.client.unary_call(&METHOD_EVENT_PUT_EVENT, req, opt)
    }

    pub fn put_event(&self, req: &super::event::PutEventRequest) -> ::grpcio::Result<super::event::EventResponse> {
        self.put_event_opt(req, ::grpcio::CallOption::default())
    }

    pub fn put_event_async_opt(&self, req: &super::event::PutEventRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::event::EventResponse>> {
        self.client.unary_call_async(&METHOD_EVENT_PUT_EVENT, req, opt)
    }

    pub fn put_event_async(&self, req: &super::event::PutEventRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::event::EventResponse>> {
        self.put_event_async_opt(req, ::grpcio::CallOption::default())
    }

    pub fn get_events_since_opt(&self, req: &super::event::GetEventsSinceRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::event::GetEventsSinceResponse> {
        self.client.unary_call(&METHOD_EVENT_GET_EVENTS_SINCE, req, opt)
    }

    pub fn get_events_since(&self, req: &super::event::GetEventsSinceRequest) -> ::grpcio::Result<super::event::GetEventsSinceResponse> {
        self.get_events_since_opt(req, ::grpcio::CallOption::default())
    }

    pub fn get_events_since_async_opt(&self, req: &super::event::GetEventsSinceRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::event::GetEventsSinceResponse>> {
        self.client.unary_call_async(&METHOD_EVENT_GET_EVENTS_SINCE, req, opt)
    }

    pub fn get_events_since_async(&self, req: &super::event::GetEventsSinceRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::event::GetEventsSinceResponse>> {
        self.get_events_since_async_opt(req, ::grpcio::CallOption::default())
    }
    pub fn spawn<F>(&self, f: F) where F: ::futures::Future<Item = (), Error = ()> + Send + 'static {
        self.client.spawn(f)
    }
}

pub trait Event {
    fn put_event(&self, ctx: ::grpcio::RpcContext, req: super::event::PutEventRequest, sink: ::grpcio::UnarySink<super::event::EventResponse>);
    fn get_events_since(&self, ctx: ::grpcio::RpcContext, req: super::event::GetEventsSinceRequest, sink: ::grpcio::UnarySink<super::event::GetEventsSinceResponse>);
}

pub fn create_event<S: Event + Send + Clone + 'static>(s: S) -> ::grpcio::Service {
    let mut builder = ::grpcio::ServiceBuilder::new();
    let instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_EVENT_PUT_EVENT, move |ctx, req, resp| {
        instance.put_event(ctx, req, resp)
    });
    let instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_EVENT_GET_EVENTS_SINCE, move |ctx, req, resp| {
        instance.get_events_since(ctx, req, resp)
    });
    builder.build()
}
