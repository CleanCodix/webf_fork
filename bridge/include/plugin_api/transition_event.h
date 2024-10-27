// Generated by WebF TSDL, don't edit this file directly.
// Generate command: node scripts/generate_binding_code.js
/*
 * Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef WEBF_CORE_WEBF_API_PLUGIN_API_TRANSITION_EVENT_H_
#define WEBF_CORE_WEBF_API_PLUGIN_API_TRANSITION_EVENT_H_
#include <stdint.h>
#include "script_value_ref.h"
#include "event.h"
namespace webf {
class SharedExceptionState;
class ExecutingContext;
class TransitionEvent;
typedef struct ScriptValueRef ScriptValueRef;
using PublicTransitionEventGetElapsedTime = double (*)(TransitionEvent*);
using PublicTransitionEventGetPropertyName = const char* (*)(TransitionEvent*);
using PublicTransitionEventDupPropertyName = const char* (*)(TransitionEvent*);
using PublicTransitionEventGetPseudoElement = const char* (*)(TransitionEvent*);
using PublicTransitionEventDupPseudoElement = const char* (*)(TransitionEvent*);
struct TransitionEventPublicMethods : public WebFPublicMethods {
  static double ElapsedTime(TransitionEvent* transition_event);
  static const char* PropertyName(TransitionEvent* transition_event);
  static const char* DupPropertyName(TransitionEvent* transition_event);
  static const char* PseudoElement(TransitionEvent* transition_event);
  static const char* DupPseudoElement(TransitionEvent* transition_event);
  double version{1.0};
  EventPublicMethods event;
  PublicTransitionEventGetElapsedTime transition_event_get_elapsed_time{ElapsedTime};
  PublicTransitionEventGetPropertyName transition_event_get_property_name{PropertyName};
  PublicTransitionEventDupPropertyName transition_event_dup_property_name{DupPropertyName};
  PublicTransitionEventGetPseudoElement transition_event_get_pseudo_element{PseudoElement};
  PublicTransitionEventDupPseudoElement transition_event_dup_pseudo_element{DupPseudoElement};
};
}  // namespace webf
#endif  // WEBF_CORE_WEBF_API_PLUGIN_API_TRANSITION_EVENT_H_