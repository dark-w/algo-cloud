/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef acb_heap_manager_H
#define acb_heap_manager_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "ac_types.h"

namespace algo_cloud_base {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class acb_heap_managerIf {
 public:
  virtual ~acb_heap_managerIf() {}
  virtual bool heap_init(const int32_t config_heap_size) = 0;
  virtual int64_t malloc(const int32_t size) = 0;
  virtual void free(const int64_t addr) = 0;
};

class acb_heap_managerIfFactory {
 public:
  typedef acb_heap_managerIf Handler;

  virtual ~acb_heap_managerIfFactory() {}

  virtual acb_heap_managerIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(acb_heap_managerIf* /* handler */) = 0;
};

class acb_heap_managerIfSingletonFactory : virtual public acb_heap_managerIfFactory {
 public:
  acb_heap_managerIfSingletonFactory(const ::std::shared_ptr<acb_heap_managerIf>& iface) : iface_(iface) {}
  virtual ~acb_heap_managerIfSingletonFactory() {}

  virtual acb_heap_managerIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(acb_heap_managerIf* /* handler */) {}

 protected:
  ::std::shared_ptr<acb_heap_managerIf> iface_;
};

class acb_heap_managerNull : virtual public acb_heap_managerIf {
 public:
  virtual ~acb_heap_managerNull() {}
  bool heap_init(const int32_t /* config_heap_size */) {
    bool _return = false;
    return _return;
  }
  int64_t malloc(const int32_t /* size */) {
    int64_t _return = 0;
    return _return;
  }
  void free(const int64_t /* addr */) {
    return;
  }
};

typedef struct _acb_heap_manager_heap_init_args__isset {
  _acb_heap_manager_heap_init_args__isset() : config_heap_size(false) {}
  bool config_heap_size :1;
} _acb_heap_manager_heap_init_args__isset;

class acb_heap_manager_heap_init_args {
 public:

  acb_heap_manager_heap_init_args(const acb_heap_manager_heap_init_args&);
  acb_heap_manager_heap_init_args& operator=(const acb_heap_manager_heap_init_args&);
  acb_heap_manager_heap_init_args() : config_heap_size(0) {
  }

  virtual ~acb_heap_manager_heap_init_args() noexcept;
  int32_t config_heap_size;

  _acb_heap_manager_heap_init_args__isset __isset;

  void __set_config_heap_size(const int32_t val);

  bool operator == (const acb_heap_manager_heap_init_args & rhs) const
  {
    if (!(config_heap_size == rhs.config_heap_size))
      return false;
    return true;
  }
  bool operator != (const acb_heap_manager_heap_init_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const acb_heap_manager_heap_init_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class acb_heap_manager_heap_init_pargs {
 public:


  virtual ~acb_heap_manager_heap_init_pargs() noexcept;
  const int32_t* config_heap_size;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _acb_heap_manager_heap_init_result__isset {
  _acb_heap_manager_heap_init_result__isset() : success(false) {}
  bool success :1;
} _acb_heap_manager_heap_init_result__isset;

class acb_heap_manager_heap_init_result {
 public:

  acb_heap_manager_heap_init_result(const acb_heap_manager_heap_init_result&);
  acb_heap_manager_heap_init_result& operator=(const acb_heap_manager_heap_init_result&);
  acb_heap_manager_heap_init_result() : success(0) {
  }

  virtual ~acb_heap_manager_heap_init_result() noexcept;
  bool success;

  _acb_heap_manager_heap_init_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const acb_heap_manager_heap_init_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const acb_heap_manager_heap_init_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const acb_heap_manager_heap_init_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _acb_heap_manager_heap_init_presult__isset {
  _acb_heap_manager_heap_init_presult__isset() : success(false) {}
  bool success :1;
} _acb_heap_manager_heap_init_presult__isset;

class acb_heap_manager_heap_init_presult {
 public:


  virtual ~acb_heap_manager_heap_init_presult() noexcept;
  bool* success;

  _acb_heap_manager_heap_init_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _acb_heap_manager_malloc_args__isset {
  _acb_heap_manager_malloc_args__isset() : size(false) {}
  bool size :1;
} _acb_heap_manager_malloc_args__isset;

class acb_heap_manager_malloc_args {
 public:

  acb_heap_manager_malloc_args(const acb_heap_manager_malloc_args&);
  acb_heap_manager_malloc_args& operator=(const acb_heap_manager_malloc_args&);
  acb_heap_manager_malloc_args() : size(0) {
  }

  virtual ~acb_heap_manager_malloc_args() noexcept;
  int32_t size;

  _acb_heap_manager_malloc_args__isset __isset;

  void __set_size(const int32_t val);

  bool operator == (const acb_heap_manager_malloc_args & rhs) const
  {
    if (!(size == rhs.size))
      return false;
    return true;
  }
  bool operator != (const acb_heap_manager_malloc_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const acb_heap_manager_malloc_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class acb_heap_manager_malloc_pargs {
 public:


  virtual ~acb_heap_manager_malloc_pargs() noexcept;
  const int32_t* size;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _acb_heap_manager_malloc_result__isset {
  _acb_heap_manager_malloc_result__isset() : success(false) {}
  bool success :1;
} _acb_heap_manager_malloc_result__isset;

class acb_heap_manager_malloc_result {
 public:

  acb_heap_manager_malloc_result(const acb_heap_manager_malloc_result&);
  acb_heap_manager_malloc_result& operator=(const acb_heap_manager_malloc_result&);
  acb_heap_manager_malloc_result() : success(0) {
  }

  virtual ~acb_heap_manager_malloc_result() noexcept;
  int64_t success;

  _acb_heap_manager_malloc_result__isset __isset;

  void __set_success(const int64_t val);

  bool operator == (const acb_heap_manager_malloc_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const acb_heap_manager_malloc_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const acb_heap_manager_malloc_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _acb_heap_manager_malloc_presult__isset {
  _acb_heap_manager_malloc_presult__isset() : success(false) {}
  bool success :1;
} _acb_heap_manager_malloc_presult__isset;

class acb_heap_manager_malloc_presult {
 public:


  virtual ~acb_heap_manager_malloc_presult() noexcept;
  int64_t* success;

  _acb_heap_manager_malloc_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _acb_heap_manager_free_args__isset {
  _acb_heap_manager_free_args__isset() : addr(false) {}
  bool addr :1;
} _acb_heap_manager_free_args__isset;

class acb_heap_manager_free_args {
 public:

  acb_heap_manager_free_args(const acb_heap_manager_free_args&);
  acb_heap_manager_free_args& operator=(const acb_heap_manager_free_args&);
  acb_heap_manager_free_args() : addr(0) {
  }

  virtual ~acb_heap_manager_free_args() noexcept;
  int64_t addr;

  _acb_heap_manager_free_args__isset __isset;

  void __set_addr(const int64_t val);

  bool operator == (const acb_heap_manager_free_args & rhs) const
  {
    if (!(addr == rhs.addr))
      return false;
    return true;
  }
  bool operator != (const acb_heap_manager_free_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const acb_heap_manager_free_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class acb_heap_manager_free_pargs {
 public:


  virtual ~acb_heap_manager_free_pargs() noexcept;
  const int64_t* addr;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class acb_heap_managerClient : virtual public acb_heap_managerIf {
 public:
  acb_heap_managerClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  acb_heap_managerClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool heap_init(const int32_t config_heap_size);
  void send_heap_init(const int32_t config_heap_size);
  bool recv_heap_init();
  int64_t malloc(const int32_t size);
  void send_malloc(const int32_t size);
  int64_t recv_malloc();
  void free(const int64_t addr);
  void send_free(const int64_t addr);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class acb_heap_managerProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<acb_heap_managerIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (acb_heap_managerProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_heap_init(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_malloc(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_free(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  acb_heap_managerProcessor(::std::shared_ptr<acb_heap_managerIf> iface) :
    iface_(iface) {
    processMap_["heap_init"] = &acb_heap_managerProcessor::process_heap_init;
    processMap_["malloc"] = &acb_heap_managerProcessor::process_malloc;
    processMap_["free"] = &acb_heap_managerProcessor::process_free;
  }

  virtual ~acb_heap_managerProcessor() {}
};

class acb_heap_managerProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  acb_heap_managerProcessorFactory(const ::std::shared_ptr< acb_heap_managerIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< acb_heap_managerIfFactory > handlerFactory_;
};

class acb_heap_managerMultiface : virtual public acb_heap_managerIf {
 public:
  acb_heap_managerMultiface(std::vector<std::shared_ptr<acb_heap_managerIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~acb_heap_managerMultiface() {}
 protected:
  std::vector<std::shared_ptr<acb_heap_managerIf> > ifaces_;
  acb_heap_managerMultiface() {}
  void add(::std::shared_ptr<acb_heap_managerIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool heap_init(const int32_t config_heap_size) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->heap_init(config_heap_size);
    }
    return ifaces_[i]->heap_init(config_heap_size);
  }

  int64_t malloc(const int32_t size) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->malloc(size);
    }
    return ifaces_[i]->malloc(size);
  }

  void free(const int64_t addr) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->free(addr);
    }
    ifaces_[i]->free(addr);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class acb_heap_managerConcurrentClient : virtual public acb_heap_managerIf {
 public:
  acb_heap_managerConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  acb_heap_managerConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool heap_init(const int32_t config_heap_size);
  int32_t send_heap_init(const int32_t config_heap_size);
  bool recv_heap_init(const int32_t seqid);
  int64_t malloc(const int32_t size);
  int32_t send_malloc(const int32_t size);
  int64_t recv_malloc(const int32_t seqid);
  void free(const int64_t addr);
  void send_free(const int64_t addr);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif