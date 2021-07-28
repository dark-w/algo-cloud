#include <iostream>

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>

#include "acb_heap_manager.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

using namespace algo_cloud_base;

const int32_t heap_size = 1024;

int main() {
  std::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
  std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
  std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
  acb_heap_managerClient client(protocol);

  try {
    transport->open();

    if (client.heap_init(heap_size)) {
        int32_t *ptr = (int32_t *)client.malloc(sizeof(int64_t) * 4);
        client.free((int64_t)ptr);
    } else {
        cout << "heap init err" << endl;
    }

    transport->close();
  } catch (TException& tx) {
    cout << "ERROR: " << tx.what() << endl;
  }
}
