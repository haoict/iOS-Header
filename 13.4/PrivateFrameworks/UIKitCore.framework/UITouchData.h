//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface UITouchData : NSObject
{
    struct CGPoint startTouchDownLocation;
    unsigned long long lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    _Bool touchIsValidTap;
    UITouch *lastTouch;
}

@end

