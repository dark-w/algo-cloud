// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "acb_heap_manager.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

#include "heap.h"

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::algo_cloud_base;

class acb_heap_managerHandler : virtual public acb_heap_managerIf {
 public:
  acb_heap_managerHandler() {
    // Your initialization goes here
  }

  bool heap_init(const int32_t config_heap_size) {
    return _h.heap_init(config_heap_size);
  }

  int64_t malloc(const int32_t size) {
    return _h.malloc(size);
  }

  void free(const int64_t addr) {
    _h.free(addr);
  }

  private:
    heap _h;
};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<acb_heap_managerHandler> handler(new acb_heap_managerHandler());
  ::std::shared_ptr<TProcessor> processor(new acb_heap_managerProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

