/*
 * Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
 * Copyright (C) 2022-present The WebF authors. All rights reserved.
 */

#ifndef BRIDGE_CORE_DOM_NODE_LIST_H_
#define BRIDGE_CORE_DOM_NODE_LIST_H_

#include "bindings/qjs/script_wrappable.h"

namespace webf {

class Node;
class ExceptionState;
class AtomicString;

class NodeList : public ScriptWrappable {
  DEFINE_WRAPPERTYPEINFO();

 public:
  using ImplType = NodeList*;

  static NodeList* Create(ExecutingContext* context, ExceptionState& exception_state) { return nullptr; };

  NodeList(JSContext* ctx) : ScriptWrappable(ctx){};
  ~NodeList() override = default;

  // DOM methods & attributes for NodeList
  virtual unsigned length() const = 0;
  virtual Node* item(unsigned index, ExceptionState& exception_state) const = 0;

  virtual bool NamedPropertyQuery(const AtomicString& key, ExceptionState& exception_state) = 0;
  virtual void NamedPropertyEnumerator(std::vector<AtomicString>& names, ExceptionState& exception_state) = 0;

  // Other methods (not part of DOM)
  virtual bool IsEmptyNodeList() const { return false; }
  virtual bool IsChildNodeList() const { return false; }

  virtual Node* VirtualOwnerNode() const { return nullptr; }

  void Trace(GCVisitor* visitor) const override{};

 protected:
};

}  // namespace webf

#endif  // BRIDGE_CORE_DOM_NODE_LIST_H_
