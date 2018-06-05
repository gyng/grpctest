// GENERATED CODE -- DO NOT EDIT!

// Original file comments:
// protoc --js_out=import_style=commonjs,binary:. company.proto
//
'use strict';
var grpc = require('grpc');
var src_protos_company_pb = require('../../src/protos/company_pb.js');

function serialize_company_CompanyRequest(arg) {
  if (!(arg instanceof src_protos_company_pb.CompanyRequest)) {
    throw new Error('Expected argument of type company.CompanyRequest');
  }
  return new Buffer(arg.serializeBinary());
}

function deserialize_company_CompanyRequest(buffer_arg) {
  return src_protos_company_pb.CompanyRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_company_CompanyResponse(arg) {
  if (!(arg instanceof src_protos_company_pb.CompanyResponse)) {
    throw new Error('Expected argument of type company.CompanyResponse');
  }
  return new Buffer(arg.serializeBinary());
}

function deserialize_company_CompanyResponse(buffer_arg) {
  return src_protos_company_pb.CompanyResponse.deserializeBinary(new Uint8Array(buffer_arg));
}


var CompanyService = exports.CompanyService = {
  // rpc GetFeature(Point) returns (Feature) {}
  // rpc ListFeatures(Rectangle) returns (stream Feature) {}
  // rpc RecordRoute(stream Point) returns (RouteSummary) {}
  // rpc RouteChat(stream RouteNode) returns (stream RouteNote) {}
  getCompany: {
    path: '/company.Company/GetCompany',
    requestStream: false,
    responseStream: false,
    requestType: src_protos_company_pb.CompanyRequest,
    responseType: src_protos_company_pb.CompanyResponse,
    requestSerialize: serialize_company_CompanyRequest,
    requestDeserialize: deserialize_company_CompanyRequest,
    responseSerialize: serialize_company_CompanyResponse,
    responseDeserialize: deserialize_company_CompanyResponse,
  },
};

exports.CompanyClient = grpc.makeGenericClientConstructor(CompanyService);
