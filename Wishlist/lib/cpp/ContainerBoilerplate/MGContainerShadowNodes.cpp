
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by codegen project: GenerateShadowNodeCpp.js
 */

#include <react/renderer/components/view/ConcreteViewShadowNode.h>
#include "MGContainerShadowNodes.h"
#include "MGContainerProps.h"
#include <react/renderer/core/ComponentDescriptor.h>

namespace facebook {
namespace react {

extern const char MGTemplateContainerComponentComponentName[] = "MGTemplateContainerComponent";

MGTemplateContainerComponentShadowNode::MGTemplateContainerComponentShadowNode(
    ShadowNodeFragment const &fragment,
    ShadowNodeFamily::Shared const &family,
    ShadowNodeTraits traits)
    : ConcreteViewShadowNode(fragment, family, traits) {

}

MGTemplateContainerComponentShadowNode::MGTemplateContainerComponentShadowNode(
    ShadowNode const &sourceShadowNode,
    ShadowNodeFragment const &fragment)
    : ConcreteViewShadowNode(sourceShadowNode, fragment) {
}

void MGTemplateContainerComponentShadowNode::appendChild(ShadowNode::Shared const &childNode) {
   this->templates.push_back(childNode);
   auto props = std::dynamic_pointer_cast<const MGTemplateContainerComponentProps>(this->getProps());
   if (props->names.size() == this->templates.size()) { // last Child
       PropsParserContext propsParserContext{getSurfaceId(), *this->getComponentDescriptor().getContextContainer().get()};
       std::shared_ptr<MGTemplateContainerComponentProps> newProps = std::make_shared<MGTemplateContainerComponentProps>(propsParserContext, props, nullptr);
       newProps->templates = templates;
       props_ = newProps;
   }
}

} // namespace react
} // namespace facebook
