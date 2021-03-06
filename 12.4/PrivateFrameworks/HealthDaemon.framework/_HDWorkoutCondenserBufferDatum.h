//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface _HDWorkoutCondenserBufferDatum : NSObject
{
    _Bool _isSeries;
    double _startTime;
    double _endTime;
    double _value;
    NSUUID *_UUID;
}

@property(readonly, nonatomic) _Bool isSeries; // @synthesize isSeries=_isSeries;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)preferredDatum:(id)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUID:(id)arg4 series:(_Bool)arg5;
- (id)init;

@end

