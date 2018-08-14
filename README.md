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
yarn generate:all
yarn generate:cpp
yarn generate:csharp
yarn generate:go
yarn generate:java
yarn generate:js
yarn generate:python
yarn generate:ruby
yarn generate:rust
yarn generate:ts

# For Rust
yarn install:prereqs:rust
yarn generate:rust
yarn server:rust
yarn client:rust
```

The TypeScript target does not run out of the box and will probably need to be bundled.
