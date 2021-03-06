//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CABasicAnimation.h>

#import <NewsUI/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface NUBasicAnimation : CABasicAnimation <CAAnimationDelegate>
{
    CDUnknownBlockType _completion;
}

+ (id)animationWithKeyPath:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

