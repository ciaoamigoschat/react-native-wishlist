#ifndef ShadowNodeCopyMachine_hpp
#define ShadowNodeCopyMachine_hpp

#include "WishlistProps.h"
#include <react/renderer/components/view/ConcreteViewShadowNode.h>
#include "LayoutContext.h"
#include "LayoutConstraints.h"
#include <iostream>

#include <stdio.h>

namespace facebook {
namespace react {

class ShadowNodeCopyMachine {
public:
    static std::shared_ptr<const ShadowNode> copyShadowSubtree(std::shared_ptr<const ShadowNode> sn);
};

};
};


#endif /* ShadowNodeCopyMachine_hpp */