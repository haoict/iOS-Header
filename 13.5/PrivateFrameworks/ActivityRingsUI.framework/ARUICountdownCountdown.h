//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
{
    unsigned long long _step;
    _Bool _cancelable;
    double _percent;
}

+ (id)identifier;
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (unsigned long long)countdownStep;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)identifier;
- (_Bool)cancelable;
- (id)timingFunction;
- (double)duration;
- (double)delay;
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(_Bool)arg3;

@end

