// package: company
// file: src/protos/company.proto

import * as src_protos_company_pb from "../../src/protos/company_pb";
import {grpc} from "grpc-web-client";

type CompanyGetCompany = {
  readonly methodName: string;
  readonly service: typeof Company;
  readonly requestStream: false;
  readonly responseStream: false;
  readonly requestType: typeof src_protos_company_pb.CompanyRequest;
  readonly responseType: typeof src_protos_company_pb.CompanyResponse;
};

export class Company {
  static readonly serviceName: string;
  static readonly GetCompany: CompanyGetCompany;
}

export type ServiceError = { message: string, code: number; metadata: grpc.Metadata }
export type Status = { details: string, code: number; metadata: grpc.Metadata }
export type ServiceClientOptions = { transport: grpc.TransportConstructor }

interface ResponseStream<T> {
  cancel(): void;
  on(type: 'data', handler: (message: T) => void): ResponseStream<T>;
  on(type: 'end', handler: () => void): ResponseStream<T>;
  on(type: 'status', handler: (status: Status) => void): ResponseStream<T>;
}

export class CompanyClient {
  readonly serviceHost: string;

  constructor(serviceHost: string, options?: ServiceClientOptions);
  getCompany(
    requestMessage: src_protos_company_pb.CompanyRequest,
    metadata: grpc.Metadata,
    callback: (error: ServiceError, responseMessage: src_protos_company_pb.CompanyResponse|null) => void
  ): void;
  getCompany(
    requestMessage: src_protos_company_pb.CompanyRequest,
    callback: (error: ServiceError, responseMessage: src_protos_company_pb.CompanyResponse|null) => void
  ): void;
}

