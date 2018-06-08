// This needs a bundler (eg. webpack + ts-loader) to run in the browser

import { grpc } from "grpc-web-client";
import { CompanyClient } from "../../protos/company_pb_service";
import { CompanyRequest } from "../../protos/company_pb";

const responseHandler = (err: any, res: any) => {
  if (err) {
    console.error(err);
  } else {
    console.log(res.toObject());
  }
};

console.log('hi');
const client = new CompanyClient("http://0.0.0.0:50051");
const req = new CompanyRequest();
req.setUen("foo");
client.getCompany(req, new grpc.Metadata(), responseHandler);
