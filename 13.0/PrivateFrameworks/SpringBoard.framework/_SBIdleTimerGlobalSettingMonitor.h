//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _SBIdleTimerGlobalSettingMonitorDelegate;

@interface _SBIdleTimerGlobalSettingMonitor : NSObject
{
    NSString *_label;
    id <_SBIdleTimerGlobalSettingMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <_SBIdleTimerGlobalSettingMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (_Bool)_updateCache;
- (id)formattedValue;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2;

@end

