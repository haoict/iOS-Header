//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSString;

@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe>
{
    unsigned long long _mode;
    _Bool _addSide;
}

+ (id)title;
- (void)_perform;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

