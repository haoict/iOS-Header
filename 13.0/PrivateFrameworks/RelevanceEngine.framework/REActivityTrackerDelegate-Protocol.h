//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, REActivityTracker;

@protocol REActivityTrackerDelegate <NSObject>

@optional
- (void)activityTracker:(REActivityTracker *)arg1 didEndActivity:(NSString *)arg2 forObject:(id)arg3;
- (void)activityTracker:(REActivityTracker *)arg1 didBeginActivity:(NSString *)arg2 forObject:(id)arg3;
- (void)activityTracker:(REActivityTracker *)arg1 didEndActivity:(NSString *)arg2;
- (void)activityTracker:(REActivityTracker *)arg1 didBeginActivity:(NSString *)arg2;
@end

