//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSOrientationUpdate : NSObject
{
    long long _orientation;
    double _duration;
    long long _rotationDirection;
}

@property(nonatomic) long long rotationDirection; // @synthesize rotationDirection=_rotationDirection;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (id)description;
- (id)initWithOrientation:(long long)arg1 duration:(double)arg2 rotationDirection:(long long)arg3;
- (id)init;

@end

