//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSNNPadGradientState : MPSNNGradientState
{
    struct MPSImageCoordinate _fwdPadBefore;
    struct MPSImageCoordinate _fwdPadAfter;
    unsigned long long _srcImgFcCount;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)arg1;

@end

