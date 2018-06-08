// package: company
// file: src/protos/company.proto

import * as jspb from "google-protobuf";

export class CompanyRequest extends jspb.Message {
  getUen(): string;
  setUen(value: string): void;

  serializeBinary(): Uint8Array;
  toObject(includeInstance?: boolean): CompanyRequest.AsObject;
  static toObject(includeInstance: boolean, msg: CompanyRequest): CompanyRequest.AsObject;
  static extensions: {[key: number]: jspb.ExtensionFieldInfo<jspb.Message>};
  static extensionsBinary: {[key: number]: jspb.ExtensionFieldBinaryInfo<jspb.Message>};
  static serializeBinaryToWriter(message: CompanyRequest, writer: jspb.BinaryWriter): void;
  static deserializeBinary(bytes: Uint8Array): CompanyRequest;
  static deserializeBinaryFromReader(message: CompanyRequest, reader: jspb.BinaryReader): CompanyRequest;
}

export namespace CompanyRequest {
  export type AsObject = {
    uen: string,
  }
}

export class CompanyResponse extends jspb.Message {
  getUen(): string;
  setUen(value: string): void;

  getName(): string;
  setName(value: string): void;

  serializeBinary(): Uint8Array;
  toObject(includeInstance?: boolean): CompanyResponse.AsObject;
  static toObject(includeInstance: boolean, msg: CompanyResponse): CompanyResponse.AsObject;
  static extensions: {[key: number]: jspb.ExtensionFieldInfo<jspb.Message>};
  static extensionsBinary: {[key: number]: jspb.ExtensionFieldBinaryInfo<jspb.Message>};
  static serializeBinaryToWriter(message: CompanyResponse, writer: jspb.BinaryWriter): void;
  static deserializeBinary(bytes: Uint8Array): CompanyResponse;
  static deserializeBinaryFromReader(message: CompanyResponse, reader: jspb.BinaryReader): CompanyResponse;
}

export namespace CompanyResponse {
  export type AsObject = {
    uen: string,
    name: string,
  }
}

