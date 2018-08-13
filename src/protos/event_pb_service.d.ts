// package: event
// file: src/protos/event.proto

import * as src_protos_event_pb from "../../src/protos/event_pb";
import {grpc} from "grpc-web-client";

type EventPutEvent = {
  readonly methodName: string;
  readonly service: typeof Event;
  readonly requestStream: false;
  readonly responseStream: false;
  readonly requestType: typeof src_protos_event_pb.PutEventRequest;
  readonly responseType: typeof src_protos_event_pb.EventResponse;
};

type EventGetEventsSince = {
  readonly methodName: string;
  readonly service: typeof Event;
  readonly requestStream: false;
  readonly responseStream: false;
  readonly requestType: typeof src_protos_event_pb.GetEventsSinceRequest;
  readonly responseType: typeof src_protos_event_pb.GetEventsSinceResponse;
};

export class Event {
  static readonly serviceName: string;
  static readonly PutEvent: EventPutEvent;
  static readonly GetEventsSince: EventGetEventsSince;
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

export class EventClient {
  readonly serviceHost: string;

  constructor(serviceHost: string, options?: ServiceClientOptions);
  putEvent(
    requestMessage: src_protos_event_pb.PutEventRequest,
    metadata: grpc.Metadata,
    callback: (error: ServiceError, responseMessage: src_protos_event_pb.EventResponse|null) => void
  ): void;
  putEvent(
    requestMessage: src_protos_event_pb.PutEventRequest,
    callback: (error: ServiceError, responseMessage: src_protos_event_pb.EventResponse|null) => void
  ): void;
  getEventsSince(
    requestMessage: src_protos_event_pb.GetEventsSinceRequest,
    metadata: grpc.Metadata,
    callback: (error: ServiceError, responseMessage: src_protos_event_pb.GetEventsSinceResponse|null) => void
  ): void;
  getEventsSince(
    requestMessage: src_protos_event_pb.GetEventsSinceRequest,
    callback: (error: ServiceError, responseMessage: src_protos_event_pb.GetEventsSinceResponse|null) => void
  ): void;
}

