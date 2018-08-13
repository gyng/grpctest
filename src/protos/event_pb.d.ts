// package: event
// file: src/protos/event.proto

import * as jspb from "google-protobuf";
import * as google_protobuf_struct_pb from "google-protobuf/google/protobuf/struct_pb";

export class PutEventRequest extends jspb.Message {
  getType(): string;
  setType(value: string): void;

  hasPayload(): boolean;
  clearPayload(): void;
  getPayload(): google_protobuf_struct_pb.Struct | undefined;
  setPayload(value?: google_protobuf_struct_pb.Struct): void;

  serializeBinary(): Uint8Array;
  toObject(includeInstance?: boolean): PutEventRequest.AsObject;
  static toObject(includeInstance: boolean, msg: PutEventRequest): PutEventRequest.AsObject;
  static extensions: {[key: number]: jspb.ExtensionFieldInfo<jspb.Message>};
  static extensionsBinary: {[key: number]: jspb.ExtensionFieldBinaryInfo<jspb.Message>};
  static serializeBinaryToWriter(message: PutEventRequest, writer: jspb.BinaryWriter): void;
  static deserializeBinary(bytes: Uint8Array): PutEventRequest;
  static deserializeBinaryFromReader(message: PutEventRequest, reader: jspb.BinaryReader): PutEventRequest;
}

export namespace PutEventRequest {
  export type AsObject = {
    type: string,
    payload?: google_protobuf_struct_pb.Struct.AsObject,
  }
}

export class EventResponse extends jspb.Message {
  serializeBinary(): Uint8Array;
  toObject(includeInstance?: boolean): EventResponse.AsObject;
  static toObject(includeInstance: boolean, msg: EventResponse): EventResponse.AsObject;
  static extensions: {[key: number]: jspb.ExtensionFieldInfo<jspb.Message>};
  static extensionsBinary: {[key: number]: jspb.ExtensionFieldBinaryInfo<jspb.Message>};
  static serializeBinaryToWriter(message: EventResponse, writer: jspb.BinaryWriter): void;
  static deserializeBinary(bytes: Uint8Array): EventResponse;
  static deserializeBinaryFromReader(message: EventResponse, reader: jspb.BinaryReader): EventResponse;
}

export namespace EventResponse {
  export type AsObject = {
  }
}

export class GetEventsSinceRequest extends jspb.Message {
  getType(): string;
  setType(value: string): void;

  getId(): number;
  setId(value: number): void;

  serializeBinary(): Uint8Array;
  toObject(includeInstance?: boolean): GetEventsSinceRequest.AsObject;
  static toObject(includeInstance: boolean, msg: GetEventsSinceRequest): GetEventsSinceRequest.AsObject;
  static extensions: {[key: number]: jspb.ExtensionFieldInfo<jspb.Message>};
  static extensionsBinary: {[key: number]: jspb.ExtensionFieldBinaryInfo<jspb.Message>};
  static serializeBinaryToWriter(message: GetEventsSinceRequest, writer: jspb.BinaryWriter): void;
  static deserializeBinary(bytes: Uint8Array): GetEventsSinceRequest;
  static deserializeBinaryFromReader(message: GetEventsSinceRequest, reader: jspb.BinaryReader): GetEventsSinceRequest;
}

export namespace GetEventsSinceRequest {
  export type AsObject = {
    type: string,
    id: number,
  }
}

export class GetEventsSinceResponse extends jspb.Message {
  getType(): string;
  setType(value: string): void;

  clearEventsList(): void;
  getEventsList(): Array<google_protobuf_struct_pb.Struct>;
  setEventsList(value: Array<google_protobuf_struct_pb.Struct>): void;
  addEvents(value?: google_protobuf_struct_pb.Struct, index?: number): google_protobuf_struct_pb.Struct;

  serializeBinary(): Uint8Array;
  toObject(includeInstance?: boolean): GetEventsSinceResponse.AsObject;
  static toObject(includeInstance: boolean, msg: GetEventsSinceResponse): GetEventsSinceResponse.AsObject;
  static extensions: {[key: number]: jspb.ExtensionFieldInfo<jspb.Message>};
  static extensionsBinary: {[key: number]: jspb.ExtensionFieldBinaryInfo<jspb.Message>};
  static serializeBinaryToWriter(message: GetEventsSinceResponse, writer: jspb.BinaryWriter): void;
  static deserializeBinary(bytes: Uint8Array): GetEventsSinceResponse;
  static deserializeBinaryFromReader(message: GetEventsSinceResponse, reader: jspb.BinaryReader): GetEventsSinceResponse;
}

export namespace GetEventsSinceResponse {
  export type AsObject = {
    type: string,
    eventsList: Array<google_protobuf_struct_pb.Struct.AsObject>,
  }
}

