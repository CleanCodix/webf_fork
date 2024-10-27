// Generated by WebF TSDL, don't edit this file directly.
// Generate command: node scripts/generate_binding_code.js
/*
 * Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef WEBF_CORE_WEBF_API_PLUGIN_API_INPUT_EVENT_H_
#define WEBF_CORE_WEBF_API_PLUGIN_API_INPUT_EVENT_H_
#include <stdint.h>
#include "script_value_ref.h"
#include "ui_event.h"
namespace webf {
class SharedExceptionState;
class ExecutingContext;
class InputEvent;
typedef struct ScriptValueRef ScriptValueRef;
using PublicInputEventGetInputType = const char* (*)(InputEvent*);
using PublicInputEventDupInputType = const char* (*)(InputEvent*);
using PublicInputEventGetData = const char* (*)(InputEvent*);
using PublicInputEventDupData = const char* (*)(InputEvent*);
struct InputEventPublicMethods : public WebFPublicMethods {
  static const char* InputType(InputEvent* input_event);
  static const char* DupInputType(InputEvent* input_event);
  static const char* Data(InputEvent* input_event);
  static const char* DupData(InputEvent* input_event);
  double version{1.0};
  UIEventPublicMethods ui_event;
  PublicInputEventGetInputType input_event_get_input_type{InputType};
  PublicInputEventDupInputType input_event_dup_input_type{DupInputType};
  PublicInputEventGetData input_event_get_data{Data};
  PublicInputEventDupData input_event_dup_data{DupData};
};
}  // namespace webf
#endif  // WEBF_CORE_WEBF_API_PLUGIN_API_INPUT_EVENT_H_