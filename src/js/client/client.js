const grpc = require("grpc");
const services = require("../../protos/company_grpc_pb");
const messages = require("../../protos/company_pb");

const credentials = grpc.credentials.createInsecure();
const client = new services.CompanyClient("localhost:50051", credentials);

const responseHandler = (err, res) => {
  if (err) {
    console.error(err);
  } else {
    console.log(res.toObject());
  }
};


const req = new messages.CompanyRequest();
req.setUen("foo");
client.getCompany(req, responseHandler);

req.setUen("bar");
client.getCompany(req, responseHandler);

req.setUen("baz");
client.getCompany(req, responseHandler);
