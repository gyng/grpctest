// https://grpc.io/docs/tutorials/basic/node.html
// https://github.com/grpc/grpc/blob/v1.12.x/examples/node/dynamic_codegen/route_guide/route_guide_server.js

const path = require("path");
const grpc = require("grpc");

// Dynamic gRPC example, for static example see client
const PROTO_PATH = path.resolve(path.join(__dirname, "../protos/company.proto"));
const companyService = grpc.load(PROTO_PATH).company;

const MY_EXPERT_DATABASE = {
  foo: { name: "bar" },
  bar: { name: "baz" }
};

function getCompany(call, callback) {
  console.log(call)
  const company = MY_EXPERT_DATABASE[call.request.uen];

  if (company) {
    const res = { uen: call.request.uen, name: company.name };
    callback(null, res);
  } else {
    callback({
      message: "unknown UEN",
      status: grpc.status.NOT_FOUND
    });
  }
}

function getServer() {
  const server = new grpc.Server();
  server.addService(companyService.Company.service, {
    getCompany
  });
  return server;
}

module.exports = {
  getServer
};
