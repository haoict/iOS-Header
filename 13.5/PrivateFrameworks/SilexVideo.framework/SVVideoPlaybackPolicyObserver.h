//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackPolicyObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVVideoPlaybackPolicy;

@interface SVVideoPlaybackPolicyObserver : NSObject <SVVideoPlaybackPolicyObserving>
{
    CDUnknownBlockType requestStateChangeBlock;
    CDUnknownBlockType allowedStateChangeBlock;
    id <SVVideoPlaybackPolicy> _policy;
    SVKeyValueObserver *_playbackAllowedObserver;
    SVKeyValueObserver *_playbackRequestedObserver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SVKeyValueObserver *playbackRequestedObserver; // @synthesize playbackRequestedObserver=_playbackRequestedObserver;
@property(readonly, nonatomic) SVKeyValueObserver *playbackAllowedObserver; // @synthesize playbackAllowedObserver=_playbackAllowedObserver;
@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> policy; // @synthesize policy=_policy;
@property(copy, nonatomic, setter=onAllowedStateChange:) CDUnknownBlockType allowedStateChangeBlock; // @synthesize allowedStateChangeBlock;
@property(copy, nonatomic, setter=onRequestStateChange:) CDUnknownBlockType requestStateChangeBlock; // @synthesize requestStateChangeBlock;
- (void)playbackRequestedStateChanged;
- (void)playbackAllowedStateChanged;
- (id)initWithPlaybackPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

