//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject
{
    HKUnit *_distanceUnit;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKUnit *distanceUnit; // @synthesize distanceUnit=_distanceUnit;
- (long long)indexForValue:(double)arg1;
- (double)valueForIndex:(long long)arg1;
- (double)valueTranslatedFromDistanceUnit:(double)arg1;
- (double)valueTranslatedIntoDistanceUnit:(double)arg1;
- (id)initWithDistanceUnit:(id)arg1;

@end

