/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef WxsGatewayService_H
#define WxsGatewayService_H

#include <TProcessor.h>
#include "wxs_types.h"



class WxsGatewayServiceIf {
 public:
  virtual ~WxsGatewayServiceIf() {}
  virtual void get(std::string& _return, const std::string& mapName, const std::string& key) = 0;
  virtual void remove(const std::string& mapName, const std::string& key) = 0;
  virtual void put(const std::string& mapName, const std::string& key, const std::string& value) = 0;
  virtual void getAll(std::vector<std::string> & _return, const std::string& mapName, const std::vector<std::string> & keyList) = 0;
  virtual void removeAll(const std::string& mapName, const std::vector<std::string> & keyList) = 0;
  virtual void putAll(const std::string& mapName, const std::vector<std::string> & keys, const std::vector<std::string> & values) = 0;
};

class WxsGatewayServiceNull : virtual public WxsGatewayServiceIf {
 public:
  virtual ~WxsGatewayServiceNull() {}
  void get(std::string& /* _return */, const std::string& /* mapName */, const std::string& /* key */) {
    return;
  }
  void remove(const std::string& /* mapName */, const std::string& /* key */) {
    return;
  }
  void put(const std::string& /* mapName */, const std::string& /* key */, const std::string& /* value */) {
    return;
  }
  void getAll(std::vector<std::string> & /* _return */, const std::string& /* mapName */, const std::vector<std::string> & /* keyList */) {
    return;
  }
  void removeAll(const std::string& /* mapName */, const std::vector<std::string> & /* keyList */) {
    return;
  }
  void putAll(const std::string& /* mapName */, const std::vector<std::string> & /* keys */, const std::vector<std::string> & /* values */) {
    return;
  }
};

typedef struct _WxsGatewayService_get_args__isset {
  _WxsGatewayService_get_args__isset() : mapName(false), key(false) {}
  bool mapName;
  bool key;
} _WxsGatewayService_get_args__isset;

class WxsGatewayService_get_args {
 public:

  WxsGatewayService_get_args() : mapName(""), key("") {
  }

  virtual ~WxsGatewayService_get_args() throw() {}

  std::string mapName;
  std::string key;

  _WxsGatewayService_get_args__isset __isset;

  bool operator == (const WxsGatewayService_get_args & rhs) const
  {
    if (!(mapName == rhs.mapName))
      return false;
    if (!(key == rhs.key))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_get_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_get_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_get_pargs {
 public:


  virtual ~WxsGatewayService_get_pargs() throw() {}

  const std::string* mapName;
  const std::string* key;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WxsGatewayService_get_result__isset {
  _WxsGatewayService_get_result__isset() : success(false) {}
  bool success;
} _WxsGatewayService_get_result__isset;

class WxsGatewayService_get_result {
 public:

  WxsGatewayService_get_result() : success("") {
  }

  virtual ~WxsGatewayService_get_result() throw() {}

  std::string success;

  _WxsGatewayService_get_result__isset __isset;

  bool operator == (const WxsGatewayService_get_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_get_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_get_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WxsGatewayService_get_presult__isset {
  _WxsGatewayService_get_presult__isset() : success(false) {}
  bool success;
} _WxsGatewayService_get_presult__isset;

class WxsGatewayService_get_presult {
 public:


  virtual ~WxsGatewayService_get_presult() throw() {}

  std::string* success;

  _WxsGatewayService_get_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _WxsGatewayService_remove_args__isset {
  _WxsGatewayService_remove_args__isset() : mapName(false), key(false) {}
  bool mapName;
  bool key;
} _WxsGatewayService_remove_args__isset;

class WxsGatewayService_remove_args {
 public:

  WxsGatewayService_remove_args() : mapName(""), key("") {
  }

  virtual ~WxsGatewayService_remove_args() throw() {}

  std::string mapName;
  std::string key;

  _WxsGatewayService_remove_args__isset __isset;

  bool operator == (const WxsGatewayService_remove_args & rhs) const
  {
    if (!(mapName == rhs.mapName))
      return false;
    if (!(key == rhs.key))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_remove_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_remove_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_remove_pargs {
 public:


  virtual ~WxsGatewayService_remove_pargs() throw() {}

  const std::string* mapName;
  const std::string* key;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_remove_result {
 public:

  WxsGatewayService_remove_result() {
  }

  virtual ~WxsGatewayService_remove_result() throw() {}


  bool operator == (const WxsGatewayService_remove_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const WxsGatewayService_remove_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_remove_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_remove_presult {
 public:


  virtual ~WxsGatewayService_remove_presult() throw() {}


  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _WxsGatewayService_put_args__isset {
  _WxsGatewayService_put_args__isset() : mapName(false), key(false), value(false) {}
  bool mapName;
  bool key;
  bool value;
} _WxsGatewayService_put_args__isset;

class WxsGatewayService_put_args {
 public:

  WxsGatewayService_put_args() : mapName(""), key(""), value("") {
  }

  virtual ~WxsGatewayService_put_args() throw() {}

  std::string mapName;
  std::string key;
  std::string value;

  _WxsGatewayService_put_args__isset __isset;

  bool operator == (const WxsGatewayService_put_args & rhs) const
  {
    if (!(mapName == rhs.mapName))
      return false;
    if (!(key == rhs.key))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_put_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_put_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_put_pargs {
 public:


  virtual ~WxsGatewayService_put_pargs() throw() {}

  const std::string* mapName;
  const std::string* key;
  const std::string* value;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_put_result {
 public:

  WxsGatewayService_put_result() {
  }

  virtual ~WxsGatewayService_put_result() throw() {}


  bool operator == (const WxsGatewayService_put_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const WxsGatewayService_put_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_put_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_put_presult {
 public:


  virtual ~WxsGatewayService_put_presult() throw() {}


  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _WxsGatewayService_getAll_args__isset {
  _WxsGatewayService_getAll_args__isset() : mapName(false), keyList(false) {}
  bool mapName;
  bool keyList;
} _WxsGatewayService_getAll_args__isset;

class WxsGatewayService_getAll_args {
 public:

  WxsGatewayService_getAll_args() : mapName("") {
  }

  virtual ~WxsGatewayService_getAll_args() throw() {}

  std::string mapName;
  std::vector<std::string>  keyList;

  _WxsGatewayService_getAll_args__isset __isset;

  bool operator == (const WxsGatewayService_getAll_args & rhs) const
  {
    if (!(mapName == rhs.mapName))
      return false;
    if (!(keyList == rhs.keyList))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_getAll_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_getAll_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_getAll_pargs {
 public:


  virtual ~WxsGatewayService_getAll_pargs() throw() {}

  const std::string* mapName;
  const std::vector<std::string> * keyList;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WxsGatewayService_getAll_result__isset {
  _WxsGatewayService_getAll_result__isset() : success(false) {}
  bool success;
} _WxsGatewayService_getAll_result__isset;

class WxsGatewayService_getAll_result {
 public:

  WxsGatewayService_getAll_result() {
  }

  virtual ~WxsGatewayService_getAll_result() throw() {}

  std::vector<std::string>  success;

  _WxsGatewayService_getAll_result__isset __isset;

  bool operator == (const WxsGatewayService_getAll_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_getAll_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_getAll_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _WxsGatewayService_getAll_presult__isset {
  _WxsGatewayService_getAll_presult__isset() : success(false) {}
  bool success;
} _WxsGatewayService_getAll_presult__isset;

class WxsGatewayService_getAll_presult {
 public:


  virtual ~WxsGatewayService_getAll_presult() throw() {}

  std::vector<std::string> * success;

  _WxsGatewayService_getAll_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _WxsGatewayService_removeAll_args__isset {
  _WxsGatewayService_removeAll_args__isset() : mapName(false), keyList(false) {}
  bool mapName;
  bool keyList;
} _WxsGatewayService_removeAll_args__isset;

class WxsGatewayService_removeAll_args {
 public:

  WxsGatewayService_removeAll_args() : mapName("") {
  }

  virtual ~WxsGatewayService_removeAll_args() throw() {}

  std::string mapName;
  std::vector<std::string>  keyList;

  _WxsGatewayService_removeAll_args__isset __isset;

  bool operator == (const WxsGatewayService_removeAll_args & rhs) const
  {
    if (!(mapName == rhs.mapName))
      return false;
    if (!(keyList == rhs.keyList))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_removeAll_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_removeAll_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_removeAll_pargs {
 public:


  virtual ~WxsGatewayService_removeAll_pargs() throw() {}

  const std::string* mapName;
  const std::vector<std::string> * keyList;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_removeAll_result {
 public:

  WxsGatewayService_removeAll_result() {
  }

  virtual ~WxsGatewayService_removeAll_result() throw() {}


  bool operator == (const WxsGatewayService_removeAll_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const WxsGatewayService_removeAll_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_removeAll_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_removeAll_presult {
 public:


  virtual ~WxsGatewayService_removeAll_presult() throw() {}


  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _WxsGatewayService_putAll_args__isset {
  _WxsGatewayService_putAll_args__isset() : mapName(false), keys(false), values(false) {}
  bool mapName;
  bool keys;
  bool values;
} _WxsGatewayService_putAll_args__isset;

class WxsGatewayService_putAll_args {
 public:

  WxsGatewayService_putAll_args() : mapName("") {
  }

  virtual ~WxsGatewayService_putAll_args() throw() {}

  std::string mapName;
  std::vector<std::string>  keys;
  std::vector<std::string>  values;

  _WxsGatewayService_putAll_args__isset __isset;

  bool operator == (const WxsGatewayService_putAll_args & rhs) const
  {
    if (!(mapName == rhs.mapName))
      return false;
    if (!(keys == rhs.keys))
      return false;
    if (!(values == rhs.values))
      return false;
    return true;
  }
  bool operator != (const WxsGatewayService_putAll_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_putAll_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_putAll_pargs {
 public:


  virtual ~WxsGatewayService_putAll_pargs() throw() {}

  const std::string* mapName;
  const std::vector<std::string> * keys;
  const std::vector<std::string> * values;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_putAll_result {
 public:

  WxsGatewayService_putAll_result() {
  }

  virtual ~WxsGatewayService_putAll_result() throw() {}


  bool operator == (const WxsGatewayService_putAll_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const WxsGatewayService_putAll_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WxsGatewayService_putAll_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class WxsGatewayService_putAll_presult {
 public:


  virtual ~WxsGatewayService_putAll_presult() throw() {}


  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class WxsGatewayServiceClient : virtual public WxsGatewayServiceIf {
 public:
  WxsGatewayServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  WxsGatewayServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void get(std::string& _return, const std::string& mapName, const std::string& key);
  void send_get(const std::string& mapName, const std::string& key);
  void recv_get(std::string& _return);
  void remove(const std::string& mapName, const std::string& key);
  void send_remove(const std::string& mapName, const std::string& key);
  void recv_remove();
  void put(const std::string& mapName, const std::string& key, const std::string& value);
  void send_put(const std::string& mapName, const std::string& key, const std::string& value);
  void recv_put();
  void getAll(std::vector<std::string> & _return, const std::string& mapName, const std::vector<std::string> & keyList);
  void send_getAll(const std::string& mapName, const std::vector<std::string> & keyList);
  void recv_getAll(std::vector<std::string> & _return);
  void removeAll(const std::string& mapName, const std::vector<std::string> & keyList);
  void send_removeAll(const std::string& mapName, const std::vector<std::string> & keyList);
  void recv_removeAll();
  void putAll(const std::string& mapName, const std::vector<std::string> & keys, const std::vector<std::string> & values);
  void send_putAll(const std::string& mapName, const std::vector<std::string> & keys, const std::vector<std::string> & values);
  void recv_putAll();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class WxsGatewayServiceProcessor : virtual public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<WxsGatewayServiceIf> iface_;
  virtual bool process_fn(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid);
 private:
  std::map<std::string, void (WxsGatewayServiceProcessor::*)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*)> processMap_;
  void process_get(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_remove(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_put(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_getAll(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_removeAll(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_putAll(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
 public:
  WxsGatewayServiceProcessor(boost::shared_ptr<WxsGatewayServiceIf> iface) :
    iface_(iface) {
    processMap_["get"] = &WxsGatewayServiceProcessor::process_get;
    processMap_["remove"] = &WxsGatewayServiceProcessor::process_remove;
    processMap_["put"] = &WxsGatewayServiceProcessor::process_put;
    processMap_["getAll"] = &WxsGatewayServiceProcessor::process_getAll;
    processMap_["removeAll"] = &WxsGatewayServiceProcessor::process_removeAll;
    processMap_["putAll"] = &WxsGatewayServiceProcessor::process_putAll;
  }

  virtual bool process(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot);
  virtual ~WxsGatewayServiceProcessor() {}
};

class WxsGatewayServiceMultiface : virtual public WxsGatewayServiceIf {
 public:
  WxsGatewayServiceMultiface(std::vector<boost::shared_ptr<WxsGatewayServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~WxsGatewayServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<WxsGatewayServiceIf> > ifaces_;
  WxsGatewayServiceMultiface() {}
  void add(boost::shared_ptr<WxsGatewayServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void get(std::string& _return, const std::string& mapName, const std::string& key) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->get(_return, mapName, key);
        return;
      } else {
        ifaces_[i]->get(_return, mapName, key);
      }
    }
  }

  void remove(const std::string& mapName, const std::string& key) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->remove(mapName, key);
    }
  }

  void put(const std::string& mapName, const std::string& key, const std::string& value) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->put(mapName, key, value);
    }
  }

  void getAll(std::vector<std::string> & _return, const std::string& mapName, const std::vector<std::string> & keyList) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getAll(_return, mapName, keyList);
        return;
      } else {
        ifaces_[i]->getAll(_return, mapName, keyList);
      }
    }
  }

  void removeAll(const std::string& mapName, const std::vector<std::string> & keyList) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->removeAll(mapName, keyList);
    }
  }

  void putAll(const std::string& mapName, const std::vector<std::string> & keys, const std::vector<std::string> & values) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      ifaces_[i]->putAll(mapName, keys, values);
    }
  }

};



#endif
