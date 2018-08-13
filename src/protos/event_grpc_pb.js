// GENERATED CODE -- DO NOT EDIT!

// Original file comments:
// protoc --js_out=import_style=commonjs,binary:. event.proto
//
'use strict';
var grpc = require('grpc');
var src_protos_event_pb = require('../../src/protos/event_pb.js');
var google_protobuf_struct_pb = require('google-protobuf/google/protobuf/struct_pb.js');

function serialize_event_EventResponse(arg) {
  if (!(arg instanceof src_protos_event_pb.EventResponse)) {
    throw new Error('Expected argument of type event.EventResponse');
  }
  return new Buffer(arg.serializeBinary());
}

function deserialize_event_EventResponse(buffer_arg) {
  return src_protos_event_pb.EventResponse.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_event_GetEventsSinceRequest(arg) {
  if (!(arg instanceof src_protos_event_pb.GetEventsSinceRequest)) {
    throw new Error('Expected argument of type event.GetEventsSinceRequest');
  }
  return new Buffer(arg.serializeBinary());
}

function deserialize_event_GetEventsSinceRequest(buffer_arg) {
  return src_protos_event_pb.GetEventsSinceRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_event_GetEventsSinceResponse(arg) {
  if (!(arg instanceof src_protos_event_pb.GetEventsSinceResponse)) {
    throw new Error('Expected argument of type event.GetEventsSinceResponse');
  }
  return new Buffer(arg.serializeBinary());
}

function deserialize_event_GetEventsSinceResponse(buffer_arg) {
  return src_protos_event_pb.GetEventsSinceResponse.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_event_PutEventRequest(arg) {
  if (!(arg instanceof src_protos_event_pb.PutEventRequest)) {
    throw new Error('Expected argument of type event.PutEventRequest');
  }
  return new Buffer(arg.serializeBinary());
}

function deserialize_event_PutEventRequest(buffer_arg) {
  return src_protos_event_pb.PutEventRequest.deserializeBinary(new Uint8Array(buffer_arg));
}


var EventService = exports.EventService = {
  putEvent: {
    path: '/event.Event/PutEvent',
    requestStream: false,
    responseStream: false,
    requestType: src_protos_event_pb.PutEventRequest,
    responseType: src_protos_event_pb.EventResponse,
    requestSerialize: serialize_event_PutEventRequest,
    requestDeserialize: deserialize_event_PutEventRequest,
    responseSerialize: serialize_event_EventResponse,
    responseDeserialize: deserialize_event_EventResponse,
  },
  getEventsSince: {
    path: '/event.Event/GetEventsSince',
    requestStream: false,
    responseStream: false,
    requestType: src_protos_event_pb.GetEventsSinceRequest,
    responseType: src_protos_event_pb.GetEventsSinceResponse,
    requestSerialize: serialize_event_GetEventsSinceRequest,
    requestDeserialize: deserialize_event_GetEventsSinceRequest,
    responseSerialize: serialize_event_GetEventsSinceResponse,
    responseDeserialize: deserialize_event_GetEventsSinceResponse,
  },
};

exports.EventClient = grpc.makeGenericClientConstructor(EventService);
