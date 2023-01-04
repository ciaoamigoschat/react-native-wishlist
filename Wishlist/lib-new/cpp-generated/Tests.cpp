/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by codegen project: GenerateTests.js
 * */

#include <gtest/gtest.h>
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/components/Wishlist/Props.h>
#include <react/renderer/core/RawProps.h>
#include <react/renderer/core/RawPropsParser.h>
#include <react/renderer/core/propsConversions.h>

using namespace facebook::react;

TEST(MGWishListComponentProps_DoesNotDie, etc) {
  auto propParser = RawPropsParser();
  propParser.prepare<MGWishListComponentProps>();
  auto const &sourceProps = MGWishListComponentProps();
  auto const &rawProps = RawProps(folly::dynamic::object("xx_invalid_xx", "xx_invalid_xx"));

  ContextContainer contextContainer{};
  PropsParserContext parserContext{-1, contextContainer};

  rawProps.parse(propParser, parserContext);
  MGWishListComponentProps(parserContext, sourceProps, rawProps);
}

TEST(MGWishListComponentProps_inflatorId, etc) {
  auto propParser = RawPropsParser();
  propParser.prepare<MGWishListComponentProps>();
  auto const &sourceProps = MGWishListComponentProps();
  auto const &rawProps = RawProps(folly::dynamic::object("inflatorId", "foo"));

  ContextContainer contextContainer{};
  PropsParserContext parserContext{-1, contextContainer};

  rawProps.parse(propParser, parserContext);
  MGWishListComponentProps(parserContext, sourceProps, rawProps);
}