//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

@interface GKTerraceNoiseModifier : GKNoiseModifier
{
    double *_controlPoints;
    int _count;
    _Bool _inverted;
}

- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (void)dealloc;
- (id)initWithPeakInputValues:(id)arg1 terracesInverted:(_Bool)arg2;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

