package com.inappupdate

import com.facebook.react.bridge.ReactApplicationContext

abstract class InappUpdateSpec internal constructor(context: ReactApplicationContext) :
  NativeInappUpdateSpec(context) {
}
