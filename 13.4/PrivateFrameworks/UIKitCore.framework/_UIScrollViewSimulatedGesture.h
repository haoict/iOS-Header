//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewSimulatedGesture : NSObject
{
    double _simulationDuration;
    double _beginTime;
    CDUnknownBlockType _beginBlock;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _endBlock;
}

- (void).cxx_destruct;
- (_Bool)updateSimulation;
- (id)initWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;

@end

