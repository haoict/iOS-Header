//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject
{
    NSMutableDictionary *_motionActivityTypeBins;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *motionActivityTypeBins; // @synthesize motionActivityTypeBins=_motionActivityTypeBins;
- (void)show;
- (unsigned long long)getDominantMotionActivityType;
- (void)addMotionActivityType:(unsigned long long)arg1;
- (id)init;

@end

