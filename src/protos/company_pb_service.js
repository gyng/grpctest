// package: company
// file: src/protos/company.proto

var src_protos_company_pb = require("../../src/protos/company_pb");
var grpc = require("grpc-web-client").grpc;

var Company = (function () {
  function Company() {}
  Company.serviceName = "company.Company";
  return Company;
}());

Company.GetCompany = {
  methodName: "GetCompany",
  service: Company,
  requestStream: false,
  responseStream: false,
  requestType: src_protos_company_pb.CompanyRequest,
  responseType: src_protos_company_pb.CompanyResponse
};

exports.Company = Company;

function CompanyClient(serviceHost, options) {
  this.serviceHost = serviceHost;
  this.options = options || {};
}

CompanyClient.prototype.getCompany = function getCompany(requestMessage, metadata, callback) {
  if (arguments.length === 2) {
    callback = arguments[1];
  }
  grpc.unary(Company.GetCompany, {
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

exports.CompanyClient = CompanyClient;

