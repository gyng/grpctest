extern crate futures;
extern crate grpcio;
extern crate protos;

use std::io::Read;
use std::sync::Arc;

use futures::future::Future;
use protos::{company, company_grpc};

#[derive(Clone)]
struct CompanyService;

impl protos::company_grpc::Company for CompanyService {
    fn get_company(
        &self,
        ctx: grpcio::RpcContext,
        req: company::CompanyRequest,
        sink: grpcio::UnarySink<company::CompanyResponse>,
    ) {
        println!("Received request {:?}", &req);

        // const my_cool_database =
        let mut resp = company::CompanyResponse::new();
        resp.set_name("foo".to_string());
        resp.set_uen("bar".to_string());
        let f = sink
            .success(resp)
            .map_err(move |e| panic!("error: failed to reply {:?}: {:?}", req, e));
        ctx.spawn(f);
    }
}

fn main() {
    println!("Hello, world!");
    let env = Arc::new(grpcio::Environment::new(1));
    let service = company_grpc::create_company(CompanyService);

    let mut server = grpcio::ServerBuilder::new(env)
        .register_service(service)
        .bind("0.0.0.0", 50051)
        .build()
        .expect("failed to build server");

    server.start();

    // Futures boilerplate
    let (tx, rx) = futures::sync::oneshot::channel();
    std::thread::spawn(move || {
        println!("Press ENTER to exit...");
        let _ = std::io::stdin().read(&mut [0]).unwrap();
        tx.send(())
    });
    let _ = rx.wait();
    let _ = server.shutdown().wait();
}
