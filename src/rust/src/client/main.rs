extern crate grpcio;
extern crate protos;

use std::sync::Arc;

use protos::{company, company_grpc};

fn main() {
    let env = Arc::new(grpcio::EnvBuilder::new().build());
    let ch = grpcio::ChannelBuilder::new(env).connect("0.0.0.0:50051");
    let client = company_grpc::CompanyClient::new(ch);

    let mut req = company::CompanyRequest::new();
    req.set_uen("foo".to_owned());
    let reply = client.get_company(&req).expect("failed to get company");
    println!("Received: {:?}", reply);
}
