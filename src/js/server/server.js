// https://grpc.io/docs/tutorials/basic/node.html
// https://github.com/grpc/grpc/blob/v1.12.x/examples/node/dynamic_codegen/route_guide/route_guide_server.js

const path = require("path");
const grpc = require("grpc");

const protoLoader = require("@grpc/proto-loader");

// const googleProtobuf = require("google-protobuf");
// console.log(googleProtobuf);

// Dynamic gRPC example, for static example see client
const PROTO_PATH = path.resolve(
  path.join(__dirname, "../../protos/event.proto")
);

const protoDefinition = protoLoader.loadSync(PROTO_PATH, {});
const packageDefinition = grpc.loadPackageDefinition(protoDefinition);

const eventService = packageDefinition.event;

const EVENT_LOG = [];

function putEvent(call, callback) {
  console.log('xxx', call.request.payload)

  EVENT_LOG.push(call.request);
  console.log("Event log: ", EVENT_LOG);
  callback(null, {});
}

function getEventsSince(call, callback) {
  const since = call.request.id;
  const events = EVENT_LOG.slice(since, -1).filter(
    ev => ev.type === call.request.type
  );

  const response = {
    etype: "EVENTS_SINCE",
    events
  };

  callback(null, response);
}

function getServer() {
  const server = new grpc.Server();

  server.addService(eventService.Event.service, {
    putEvent,
    getEventsSince
  });

  return server;
}

module.exports = {
  getServer
};
