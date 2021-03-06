//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonRawEspressoResult, NSObject;
@protocol OS_dispatch_queue;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique
{
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    struct SkeletonJointFilter<float> _extrapolationFilter2D;
    struct SkeletonJointFilter<float> _extrapolationFilter2DForLiftingData;
    NSObject<OS_dispatch_queue> *_processingQueue;
    AR2DSkeletonRawEspressoResult *_previousRawEspressoResult;
}

@property(retain, nonatomic) AR2DSkeletonRawEspressoResult *previousRawEspressoResult; // @synthesize previousRawEspressoResult=_previousRawEspressoResult;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processData:(id)arg1;
- (id)init;

@end

