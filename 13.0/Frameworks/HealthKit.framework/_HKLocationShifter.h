//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _HKLocationShifter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)isShiftRequiredForLocations:(id)arg1;
- (void).cxx_destruct;
- (void)shiftLocations:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

