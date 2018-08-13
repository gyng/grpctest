// This needs a bundler (eg. webpack + ts-loader) to run in the browser

import { grpc } from "grpc-web-client";
import { EventClient } from "../../protos/event_pb_service";
import { PutEventRequest, GetEventsSinceRequest } from "../../protos/event_pb";
import * as google_protobuf_struct_pb from "google-protobuf/google/protobuf/struct_pb";

const responseHandler = (err: any, res: any) => {
  if (err) {
    console.error(err);
  } else {
    console.log(res.toObject());
  }
};

const eventClient = new EventClient("http://0.0.0.0:50051");

const putEventReq = new PutEventRequest();
putEventReq.setType("TS_CLIENT_EVENT");
// @ts-ignore
const struct = new google_protobuf_struct_pb.Struct({
  fields: {
    foo: {
      string_value: "bar"
    }
  }
});

putEventReq.setPayload(struct);
eventClient.putEvent(putEventReq, new grpc.Metadata(), responseHandler);

const getEventsReq = new GetEventsSinceRequest();
getEventsReq.setType("TS_CLIENT_EVENT");
getEventsReq.setId(0);
eventClient.getEventsSince(getEventsReq, new grpc.Metadata(), responseHandler);
