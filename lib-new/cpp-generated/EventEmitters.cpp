
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by codegen project: GenerateEventEmitterCpp.js
 */

#include <react/renderer/components/Wishlist/EventEmitters.h>

namespace facebook {
namespace react {

void MGWishListComponentEventEmitter::onBubblingEventDefinedInline(OnBubblingEventDefinedInline event) const {
  dispatchEvent("bubblingEventDefinedInline", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "boolean_required", event.boolean_required);
payload.setProperty(runtime, "boolean_optional_key", event.boolean_optional_key);
payload.setProperty(runtime, "boolean_optional_value", event.boolean_optional_value);
payload.setProperty(runtime, "boolean_optional_both", event.boolean_optional_both);
payload.setProperty(runtime, "string_required", event.string_required);
payload.setProperty(runtime, "string_optional_key", event.string_optional_key);
payload.setProperty(runtime, "string_optional_value", event.string_optional_value);
payload.setProperty(runtime, "string_optional_both", event.string_optional_both);
payload.setProperty(runtime, "double_required", event.double_required);
payload.setProperty(runtime, "double_optional_key", event.double_optional_key);
payload.setProperty(runtime, "double_optional_value", event.double_optional_value);
payload.setProperty(runtime, "double_optional_both", event.double_optional_both);
payload.setProperty(runtime, "float_required", event.float_required);
payload.setProperty(runtime, "float_optional_key", event.float_optional_key);
payload.setProperty(runtime, "float_optional_value", event.float_optional_value);
payload.setProperty(runtime, "float_optional_both", event.float_optional_both);
payload.setProperty(runtime, "int32_required", event.int32_required);
payload.setProperty(runtime, "int32_optional_key", event.int32_optional_key);
payload.setProperty(runtime, "int32_optional_value", event.int32_optional_value);
payload.setProperty(runtime, "int32_optional_both", event.int32_optional_both);
payload.setProperty(runtime, "enum_required", toString(event.enum_required));
payload.setProperty(runtime, "enum_optional_key", toString(event.enum_optional_key));
payload.setProperty(runtime, "enum_optional_value", toString(event.enum_optional_value));
payload.setProperty(runtime, "enum_optional_both", toString(event.enum_optional_both));
{
              auto object_required = jsi::Object(runtime);
              object_required.setProperty(runtime, "boolean_required", event.object_required.boolean_required);

              payload.setProperty(runtime, "object_required", object_required);
            }
{
              auto object_optional_key = jsi::Object(runtime);
              object_optional_key.setProperty(runtime, "string_optional_key", event.object_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_optional_key", object_optional_key);
            }
{
              auto object_optional_value = jsi::Object(runtime);
              object_optional_value.setProperty(runtime, "float_optional_value", event.object_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_optional_value", object_optional_value);
            }
{
              auto object_optional_both = jsi::Object(runtime);
              object_optional_both.setProperty(runtime, "int32_optional_both", event.object_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_optional_both", object_optional_both);
            }
{
              auto object_required_nested_2_layers = jsi::Object(runtime);
              {
              auto object_optional_nested_1_layer = jsi::Object(runtime);
              object_optional_nested_1_layer.setProperty(runtime, "boolean_required", event.object_required_nested_2_layers.object_optional_nested_1_layer.boolean_required);
object_optional_nested_1_layer.setProperty(runtime, "string_optional_key", event.object_required_nested_2_layers.object_optional_nested_1_layer.string_optional_key);
object_optional_nested_1_layer.setProperty(runtime, "double_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.double_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "float_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.float_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "int32_optional_both", event.object_required_nested_2_layers.object_optional_nested_1_layer.int32_optional_both);

              object_required_nested_2_layers.setProperty(runtime, "object_optional_nested_1_layer", object_optional_nested_1_layer);
            }

              payload.setProperty(runtime, "object_required_nested_2_layers", object_required_nested_2_layers);
            }
{
              auto object_readonly_required = jsi::Object(runtime);
              object_readonly_required.setProperty(runtime, "boolean_required", event.object_readonly_required.boolean_required);

              payload.setProperty(runtime, "object_readonly_required", object_readonly_required);
            }
{
              auto object_readonly_optional_key = jsi::Object(runtime);
              object_readonly_optional_key.setProperty(runtime, "string_optional_key", event.object_readonly_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_readonly_optional_key", object_readonly_optional_key);
            }
{
              auto object_readonly_optional_value = jsi::Object(runtime);
              object_readonly_optional_value.setProperty(runtime, "float_optional_value", event.object_readonly_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_readonly_optional_value", object_readonly_optional_value);
            }
{
              auto object_readonly_optional_both = jsi::Object(runtime);
              object_readonly_optional_both.setProperty(runtime, "int32_optional_both", event.object_readonly_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_readonly_optional_both", object_readonly_optional_both);
            }
    return payload;
  });
}
void MGWishListComponentEventEmitter::onBubblingEventDefinedInlineWithPaperName(OnBubblingEventDefinedInlineWithPaperName event) const {
  dispatchEvent("bubblingEventDefinedInlineWithPaperName", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "boolean_required", event.boolean_required);
payload.setProperty(runtime, "boolean_optional_key", event.boolean_optional_key);
payload.setProperty(runtime, "boolean_optional_value", event.boolean_optional_value);
payload.setProperty(runtime, "boolean_optional_both", event.boolean_optional_both);
payload.setProperty(runtime, "string_required", event.string_required);
payload.setProperty(runtime, "string_optional_key", event.string_optional_key);
payload.setProperty(runtime, "string_optional_value", event.string_optional_value);
payload.setProperty(runtime, "string_optional_both", event.string_optional_both);
payload.setProperty(runtime, "double_required", event.double_required);
payload.setProperty(runtime, "double_optional_key", event.double_optional_key);
payload.setProperty(runtime, "double_optional_value", event.double_optional_value);
payload.setProperty(runtime, "double_optional_both", event.double_optional_both);
payload.setProperty(runtime, "float_required", event.float_required);
payload.setProperty(runtime, "float_optional_key", event.float_optional_key);
payload.setProperty(runtime, "float_optional_value", event.float_optional_value);
payload.setProperty(runtime, "float_optional_both", event.float_optional_both);
payload.setProperty(runtime, "int32_required", event.int32_required);
payload.setProperty(runtime, "int32_optional_key", event.int32_optional_key);
payload.setProperty(runtime, "int32_optional_value", event.int32_optional_value);
payload.setProperty(runtime, "int32_optional_both", event.int32_optional_both);
payload.setProperty(runtime, "enum_required", toString(event.enum_required));
payload.setProperty(runtime, "enum_optional_key", toString(event.enum_optional_key));
payload.setProperty(runtime, "enum_optional_value", toString(event.enum_optional_value));
payload.setProperty(runtime, "enum_optional_both", toString(event.enum_optional_both));
{
              auto object_required = jsi::Object(runtime);
              object_required.setProperty(runtime, "boolean_required", event.object_required.boolean_required);

              payload.setProperty(runtime, "object_required", object_required);
            }
{
              auto object_optional_key = jsi::Object(runtime);
              object_optional_key.setProperty(runtime, "string_optional_key", event.object_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_optional_key", object_optional_key);
            }
{
              auto object_optional_value = jsi::Object(runtime);
              object_optional_value.setProperty(runtime, "float_optional_value", event.object_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_optional_value", object_optional_value);
            }
{
              auto object_optional_both = jsi::Object(runtime);
              object_optional_both.setProperty(runtime, "int32_optional_both", event.object_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_optional_both", object_optional_both);
            }
{
              auto object_required_nested_2_layers = jsi::Object(runtime);
              {
              auto object_optional_nested_1_layer = jsi::Object(runtime);
              object_optional_nested_1_layer.setProperty(runtime, "boolean_required", event.object_required_nested_2_layers.object_optional_nested_1_layer.boolean_required);
object_optional_nested_1_layer.setProperty(runtime, "string_optional_key", event.object_required_nested_2_layers.object_optional_nested_1_layer.string_optional_key);
object_optional_nested_1_layer.setProperty(runtime, "double_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.double_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "float_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.float_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "int32_optional_both", event.object_required_nested_2_layers.object_optional_nested_1_layer.int32_optional_both);

              object_required_nested_2_layers.setProperty(runtime, "object_optional_nested_1_layer", object_optional_nested_1_layer);
            }

              payload.setProperty(runtime, "object_required_nested_2_layers", object_required_nested_2_layers);
            }
{
              auto object_readonly_required = jsi::Object(runtime);
              object_readonly_required.setProperty(runtime, "boolean_required", event.object_readonly_required.boolean_required);

              payload.setProperty(runtime, "object_readonly_required", object_readonly_required);
            }
{
              auto object_readonly_optional_key = jsi::Object(runtime);
              object_readonly_optional_key.setProperty(runtime, "string_optional_key", event.object_readonly_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_readonly_optional_key", object_readonly_optional_key);
            }
{
              auto object_readonly_optional_value = jsi::Object(runtime);
              object_readonly_optional_value.setProperty(runtime, "float_optional_value", event.object_readonly_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_readonly_optional_value", object_readonly_optional_value);
            }
{
              auto object_readonly_optional_both = jsi::Object(runtime);
              object_readonly_optional_both.setProperty(runtime, "int32_optional_both", event.object_readonly_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_readonly_optional_both", object_readonly_optional_both);
            }
    return payload;
  });
}
void MGWishListComponentEventEmitter::onDirectEventDefinedInline(OnDirectEventDefinedInline event) const {
  dispatchEvent("directEventDefinedInline", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "boolean_required", event.boolean_required);
payload.setProperty(runtime, "boolean_optional_key", event.boolean_optional_key);
payload.setProperty(runtime, "boolean_optional_value", event.boolean_optional_value);
payload.setProperty(runtime, "boolean_optional_both", event.boolean_optional_both);
payload.setProperty(runtime, "string_required", event.string_required);
payload.setProperty(runtime, "string_optional_key", event.string_optional_key);
payload.setProperty(runtime, "string_optional_value", event.string_optional_value);
payload.setProperty(runtime, "string_optional_both", event.string_optional_both);
payload.setProperty(runtime, "double_required", event.double_required);
payload.setProperty(runtime, "double_optional_key", event.double_optional_key);
payload.setProperty(runtime, "double_optional_value", event.double_optional_value);
payload.setProperty(runtime, "double_optional_both", event.double_optional_both);
payload.setProperty(runtime, "float_required", event.float_required);
payload.setProperty(runtime, "float_optional_key", event.float_optional_key);
payload.setProperty(runtime, "float_optional_value", event.float_optional_value);
payload.setProperty(runtime, "float_optional_both", event.float_optional_both);
payload.setProperty(runtime, "int32_required", event.int32_required);
payload.setProperty(runtime, "int32_optional_key", event.int32_optional_key);
payload.setProperty(runtime, "int32_optional_value", event.int32_optional_value);
payload.setProperty(runtime, "int32_optional_both", event.int32_optional_both);
payload.setProperty(runtime, "enum_required", toString(event.enum_required));
payload.setProperty(runtime, "enum_optional_key", toString(event.enum_optional_key));
payload.setProperty(runtime, "enum_optional_value", toString(event.enum_optional_value));
payload.setProperty(runtime, "enum_optional_both", toString(event.enum_optional_both));
{
              auto object_required = jsi::Object(runtime);
              object_required.setProperty(runtime, "boolean_required", event.object_required.boolean_required);

              payload.setProperty(runtime, "object_required", object_required);
            }
{
              auto object_optional_key = jsi::Object(runtime);
              object_optional_key.setProperty(runtime, "string_optional_key", event.object_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_optional_key", object_optional_key);
            }
{
              auto object_optional_value = jsi::Object(runtime);
              object_optional_value.setProperty(runtime, "float_optional_value", event.object_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_optional_value", object_optional_value);
            }
{
              auto object_optional_both = jsi::Object(runtime);
              object_optional_both.setProperty(runtime, "int32_optional_both", event.object_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_optional_both", object_optional_both);
            }
{
              auto object_required_nested_2_layers = jsi::Object(runtime);
              {
              auto object_optional_nested_1_layer = jsi::Object(runtime);
              object_optional_nested_1_layer.setProperty(runtime, "boolean_required", event.object_required_nested_2_layers.object_optional_nested_1_layer.boolean_required);
object_optional_nested_1_layer.setProperty(runtime, "string_optional_key", event.object_required_nested_2_layers.object_optional_nested_1_layer.string_optional_key);
object_optional_nested_1_layer.setProperty(runtime, "double_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.double_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "float_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.float_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "int32_optional_both", event.object_required_nested_2_layers.object_optional_nested_1_layer.int32_optional_both);

              object_required_nested_2_layers.setProperty(runtime, "object_optional_nested_1_layer", object_optional_nested_1_layer);
            }

              payload.setProperty(runtime, "object_required_nested_2_layers", object_required_nested_2_layers);
            }
{
              auto object_readonly_required = jsi::Object(runtime);
              object_readonly_required.setProperty(runtime, "boolean_required", event.object_readonly_required.boolean_required);

              payload.setProperty(runtime, "object_readonly_required", object_readonly_required);
            }
{
              auto object_readonly_optional_key = jsi::Object(runtime);
              object_readonly_optional_key.setProperty(runtime, "string_optional_key", event.object_readonly_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_readonly_optional_key", object_readonly_optional_key);
            }
{
              auto object_readonly_optional_value = jsi::Object(runtime);
              object_readonly_optional_value.setProperty(runtime, "float_optional_value", event.object_readonly_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_readonly_optional_value", object_readonly_optional_value);
            }
{
              auto object_readonly_optional_both = jsi::Object(runtime);
              object_readonly_optional_both.setProperty(runtime, "int32_optional_both", event.object_readonly_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_readonly_optional_both", object_readonly_optional_both);
            }
    return payload;
  });
}
void MGWishListComponentEventEmitter::onDirectEventDefinedInlineWithPaperName(OnDirectEventDefinedInlineWithPaperName event) const {
  dispatchEvent("directEventDefinedInlineWithPaperName", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "boolean_required", event.boolean_required);
payload.setProperty(runtime, "boolean_optional_key", event.boolean_optional_key);
payload.setProperty(runtime, "boolean_optional_value", event.boolean_optional_value);
payload.setProperty(runtime, "boolean_optional_both", event.boolean_optional_both);
payload.setProperty(runtime, "string_required", event.string_required);
payload.setProperty(runtime, "string_optional_key", event.string_optional_key);
payload.setProperty(runtime, "string_optional_value", event.string_optional_value);
payload.setProperty(runtime, "string_optional_both", event.string_optional_both);
payload.setProperty(runtime, "double_required", event.double_required);
payload.setProperty(runtime, "double_optional_key", event.double_optional_key);
payload.setProperty(runtime, "double_optional_value", event.double_optional_value);
payload.setProperty(runtime, "double_optional_both", event.double_optional_both);
payload.setProperty(runtime, "float_required", event.float_required);
payload.setProperty(runtime, "float_optional_key", event.float_optional_key);
payload.setProperty(runtime, "float_optional_value", event.float_optional_value);
payload.setProperty(runtime, "float_optional_both", event.float_optional_both);
payload.setProperty(runtime, "int32_required", event.int32_required);
payload.setProperty(runtime, "int32_optional_key", event.int32_optional_key);
payload.setProperty(runtime, "int32_optional_value", event.int32_optional_value);
payload.setProperty(runtime, "int32_optional_both", event.int32_optional_both);
payload.setProperty(runtime, "enum_required", toString(event.enum_required));
payload.setProperty(runtime, "enum_optional_key", toString(event.enum_optional_key));
payload.setProperty(runtime, "enum_optional_value", toString(event.enum_optional_value));
payload.setProperty(runtime, "enum_optional_both", toString(event.enum_optional_both));
{
              auto object_required = jsi::Object(runtime);
              object_required.setProperty(runtime, "boolean_required", event.object_required.boolean_required);

              payload.setProperty(runtime, "object_required", object_required);
            }
{
              auto object_optional_key = jsi::Object(runtime);
              object_optional_key.setProperty(runtime, "string_optional_key", event.object_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_optional_key", object_optional_key);
            }
{
              auto object_optional_value = jsi::Object(runtime);
              object_optional_value.setProperty(runtime, "float_optional_value", event.object_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_optional_value", object_optional_value);
            }
{
              auto object_optional_both = jsi::Object(runtime);
              object_optional_both.setProperty(runtime, "int32_optional_both", event.object_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_optional_both", object_optional_both);
            }
{
              auto object_required_nested_2_layers = jsi::Object(runtime);
              {
              auto object_optional_nested_1_layer = jsi::Object(runtime);
              object_optional_nested_1_layer.setProperty(runtime, "boolean_required", event.object_required_nested_2_layers.object_optional_nested_1_layer.boolean_required);
object_optional_nested_1_layer.setProperty(runtime, "string_optional_key", event.object_required_nested_2_layers.object_optional_nested_1_layer.string_optional_key);
object_optional_nested_1_layer.setProperty(runtime, "double_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.double_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "float_optional_value", event.object_required_nested_2_layers.object_optional_nested_1_layer.float_optional_value);
object_optional_nested_1_layer.setProperty(runtime, "int32_optional_both", event.object_required_nested_2_layers.object_optional_nested_1_layer.int32_optional_both);

              object_required_nested_2_layers.setProperty(runtime, "object_optional_nested_1_layer", object_optional_nested_1_layer);
            }

              payload.setProperty(runtime, "object_required_nested_2_layers", object_required_nested_2_layers);
            }
{
              auto object_readonly_required = jsi::Object(runtime);
              object_readonly_required.setProperty(runtime, "boolean_required", event.object_readonly_required.boolean_required);

              payload.setProperty(runtime, "object_readonly_required", object_readonly_required);
            }
{
              auto object_readonly_optional_key = jsi::Object(runtime);
              object_readonly_optional_key.setProperty(runtime, "string_optional_key", event.object_readonly_optional_key.string_optional_key);

              payload.setProperty(runtime, "object_readonly_optional_key", object_readonly_optional_key);
            }
{
              auto object_readonly_optional_value = jsi::Object(runtime);
              object_readonly_optional_value.setProperty(runtime, "float_optional_value", event.object_readonly_optional_value.float_optional_value);

              payload.setProperty(runtime, "object_readonly_optional_value", object_readonly_optional_value);
            }
{
              auto object_readonly_optional_both = jsi::Object(runtime);
              object_readonly_optional_both.setProperty(runtime, "int32_optional_both", event.object_readonly_optional_both.int32_optional_both);

              payload.setProperty(runtime, "object_readonly_optional_both", object_readonly_optional_both);
            }
    return payload;
  });
}

} // namespace react
} // namespace facebook
