//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_data;

@interface TSPUnknownObject : TSPObject
{
    NSString *_packageLocator;
    NSObject<OS_dispatch_data> *_serializedData;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // @synthesize serializedData=_serializedData;
- (void).cxx_destruct;
- (id)packageLocator;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithContext:(id)arg1;

@end

