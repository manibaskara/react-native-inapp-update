
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNInappUpdateSpec.h"

@interface InappUpdate : NSObject <NativeInappUpdateSpec>
#else
#import <React/RCTBridgeModule.h>

@interface InappUpdate : NSObject <RCTBridgeModule>
#endif

@end
