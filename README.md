# grpctest

Minimal repo to try out gRPC on node, TS and Rust.

## Trying it out

```
# Install dependencies
yarn

# Run the stub node server (dynamic protobuf)
yarn server:js

# Run the test node client (static protobuf)
yarn client:js

# Generate gRPC from protobuf definition
yarn generate:js
yarn generate:ts
yarn generate:rust
yarn generate:all

# For Rust
yarn install:prereqs:rust
yarn generate:rust
yarn server:rust
yarn client:rust
```

The TypeScript target does not run out of the box and will probably need to be bundled.
