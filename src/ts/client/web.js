"use strict";
// This needs a bundler (eg. webpack + ts-loader) to run in the browser
Object.defineProperty(exports, "__esModule", { value: true });
var grpc_web_client_1 = require("grpc-web-client");
var event_pb_service_1 = require("../../protos/event_pb_service");
var event_pb_1 = require("../../protos/event_pb");
var responseHandler = function (err, res) {
    if (err) {
        console.error(err);
    }
    else {
        console.log(res.toObject());
    }
};
var eventClient = new event_pb_service_1.EventClient("http://0.0.0.0:50051");
// const putEventReq = new PutEventRequest();
// putEventReq.setType("TS_CLIENT_EVENT");
// // @ts-ignore
// const struct = new google_protobuf_struct_pb.Struct({
//   fields: {
//     foo: {
//       string_value: "bar"
//     }
//   }
// });
// putEventReq.setPayload(struct);
// eventClient.putEvent(putEventReq, new grpc.Metadata(), responseHandler);
var getEventsReq = new event_pb_1.GetEventsSinceRequest();
getEventsReq.setType("TS_CLIENT_EVENT");
getEventsReq.setId(0);
eventClient.getEventsSince(getEventsReq, new grpc_web_client_1.grpc.Metadata(), responseHandler);
