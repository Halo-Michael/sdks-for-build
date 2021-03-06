//
//  INBalanceType.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#ifndef INBalanceType_h
#define INBalanceType_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INBalanceType) {
    INBalanceTypeUnknown = 0,
    INBalanceTypeMoney,
    INBalanceTypePoints,
    INBalanceTypeMiles,
} API_AVAILABLE(ios(11.0), watchos(4.0)) API_UNAVAILABLE(macosx);

#endif // INBalanceType_h
