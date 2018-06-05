const grpc = require('grpc');
const companyServer = require('./server');

const server = companyServer.getServer();
const credentials = grpc.ServerCredentials.createInsecure();
server.bind('0.0.0.0:50051', credentials);
server.start();
