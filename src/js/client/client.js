const grpc = require("grpc");
const services = require("../../protos/event_grpc_pb");
const messages = require("../../protos/event_pb");
require("google-protobuf"); // injects into global `proto` object

const responseHandler = (err, res) => {
  if (err) {
    console.error(err);
  } else {
    console.log(res);
  }
};

const credentials = grpc.credentials.createInsecure();
const eventClient = new services.EventClient("localhost:50051", credentials);

const putEventReq = new messages.PutEventRequest();
putEventReq.setType("JS_CLIENT_EVENT");
putEventReq.setPayload(new proto.google.protobuf.Struct({
  fields: {
    foo: {
      string_value: "bar"
    }
  }
}));
eventClient.putEvent(putEventReq, responseHandler);

const getEventsReq = new messages.GetEventsSinceRequest();
getEventsReq.setType("JS_CLIENT_EVENT");
getEventsReq.setId(0);
eventClient.getEventsSince(getEventsReq, responseHandler);
