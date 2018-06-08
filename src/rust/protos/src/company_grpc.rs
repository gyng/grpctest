// This file is generated. Do not edit
// @generated

// https://github.com/Manishearth/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy)]

#![cfg_attr(rustfmt, rustfmt_skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unsafe_code)]
#![allow(unused_imports)]
#![allow(unused_results)]

const METHOD_COMPANY_GET_COMPANY: ::grpcio::Method<super::company::CompanyRequest, super::company::CompanyResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/company.Company/GetCompany",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

pub struct CompanyClient {
    client: ::grpcio::Client,
}

impl CompanyClient {
    pub fn new(channel: ::grpcio::Channel) -> Self {
        CompanyClient {
            client: ::grpcio::Client::new(channel),
        }
    }

    pub fn get_company_opt(&self, req: &super::company::CompanyRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::company::CompanyResponse> {
        self.client.unary_call(&METHOD_COMPANY_GET_COMPANY, req, opt)
    }

    pub fn get_company(&self, req: &super::company::CompanyRequest) -> ::grpcio::Result<super::company::CompanyResponse> {
        self.get_company_opt(req, ::grpcio::CallOption::default())
    }

    pub fn get_company_async_opt(&self, req: &super::company::CompanyRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::company::CompanyResponse>> {
        self.client.unary_call_async(&METHOD_COMPANY_GET_COMPANY, req, opt)
    }

    pub fn get_company_async(&self, req: &super::company::CompanyRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::company::CompanyResponse>> {
        self.get_company_async_opt(req, ::grpcio::CallOption::default())
    }
    pub fn spawn<F>(&self, f: F) where F: ::futures::Future<Item = (), Error = ()> + Send + 'static {
        self.client.spawn(f)
    }
}

pub trait Company {
    fn get_company(&self, ctx: ::grpcio::RpcContext, req: super::company::CompanyRequest, sink: ::grpcio::UnarySink<super::company::CompanyResponse>);
}

pub fn create_company<S: Company + Send + Clone + 'static>(s: S) -> ::grpcio::Service {
    let mut builder = ::grpcio::ServiceBuilder::new();
    let instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_COMPANY_GET_COMPANY, move |ctx, req, resp| {
        instance.get_company(ctx, req, resp)
    });
    builder.build()
}
