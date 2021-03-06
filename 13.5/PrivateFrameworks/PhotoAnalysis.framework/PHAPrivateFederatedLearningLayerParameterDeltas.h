//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAMutableFloatArray;

@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject
{
    PHAMutableFloatArray *_weightDeltas;
    PHAMutableFloatArray *_biasDeltas;
}

+ (id)deltasFromLayerParameters:(id)arg1 toLayerParameters:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PHAMutableFloatArray *biasDeltas; // @synthesize biasDeltas=_biasDeltas;
@property(retain, nonatomic) PHAMutableFloatArray *weightDeltas; // @synthesize weightDeltas=_weightDeltas;
- (id)initWithWeightDeltas:(id)arg1 biasDeltas:(id)arg2;

@end

