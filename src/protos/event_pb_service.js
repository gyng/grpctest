// package: event
// file: src/protos/event.proto

var src_protos_event_pb = require("../../src/protos/event_pb");
var grpc = require("grpc-web-client").grpc;

var Event = (function () {
  function Event() {}
  Event.serviceName = "event.Event";
  return Event;
}());

Event.PutEvent = {
  methodName: "PutEvent",
  service: Event,
  requestStream: false,
  responseStream: false,
  requestType: src_protos_event_pb.PutEventRequest,
  responseType: src_protos_event_pb.EventResponse
};

Event.GetEventsSince = {
  methodName: "GetEventsSince",
  service: Event,
  requestStream: false,
  responseStream: false,
  requestType: src_protos_event_pb.GetEventsSinceRequest,
  responseType: src_protos_event_pb.GetEventsSinceResponse
};

exports.Event = Event;

function EventClient(serviceHost, options) {
  this.serviceHost = serviceHost;
  this.options = options || {};
}

EventClient.prototype.putEvent = function putEvent(requestMessage, metadata, callback) {
  if (arguments.length === 2) {
    callback = arguments[1];
  }
  grpc.unary(Event.PutEvent, {
    request: requestMessage,
    host: this.serviceHost,
    metadata: metadata,
    transport: this.options.transport,
    onEnd: function (response) {
      if (callback) {
        if (response.status !== grpc.Code.OK) {
          callback(Object.assign(new Error(response.statusMessage), { code: response.status, metadata: response.trailers }), null);
        } else {
          callback(null, response.message);
        }
      }
    }
  });
};

EventClient.prototype.getEventsSince = function getEventsSince(requestMessage, metadata, callback) {
  if (arguments.length === 2) {
    callback = arguments[1];
  }
  grpc.unary(Event.GetEventsSince, {
    request: requestMessage,
    host: this.serviceHost,
    metadata: metadata,
    transport: this.options.transport,
    onEnd: function (response) {
      if (callback) {
        if (response.status !== grpc.Code.OK) {
          callback(Object.assign(new Error(response.statusMessage), { code: response.status, metadata: response.trailers }), null);
        } else {
          callback(null, response.message);
        }
      }
    }
  });
};

exports.EventClient = EventClient;

