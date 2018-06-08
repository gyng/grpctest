"use strict";
// This needs a bundler (eg. webpack + ts-loader) to run in the browser
Object.defineProperty(exports, "__esModule", { value: true });
var grpc_web_client_1 = require("grpc-web-client");
var company_pb_service_1 = require("../../protos/company_pb_service");
var company_pb_1 = require("../../protos/company_pb");
var responseHandler = function (err, res) {
    if (err) {
        console.error(err);
    }
    else {
        console.log(res.toObject());
    }
};
console.log('hi');
var client = new company_pb_service_1.CompanyClient("http://0.0.0.0:50051");
var req = new company_pb_1.CompanyRequest();
req.setUen("foo");
client.getCompany(req, new grpc_web_client_1.grpc.Metadata(), responseHandler);
