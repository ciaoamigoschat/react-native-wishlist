/**
* Copyright (c) Facebook, Inc. and its affiliates.
*
* This source code is licensed under the MIT license found in the
* LICENSE file in the root directory of this source tree.
*
* @generated by codegen project: GeneratePropsJavaDelegate.js
*/

package com.margelo.wishlist;

import android.view.View;
import androidx.annotation.Nullable;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.BaseViewManagerInterface;

public class WishlistManagerDelegate<T extends View, U extends BaseViewManagerInterface<T> & WishlistManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
  public WishlistManagerDelegate(U viewManager) {
    super(viewManager);
  }
  @Override
  public void setProperty(T view, String propName, @Nullable Object value) {
    super.setProperty(view, propName, value);
  }

  @Override
  public void receiveCommand(T view, String commandName, ReadableArray args) {
    switch (commandName) {
      case "scrollTo":
        mViewManager.scrollTo(view, args.getInt(0), args.getBoolean(1));
        break;
    }
  }
}