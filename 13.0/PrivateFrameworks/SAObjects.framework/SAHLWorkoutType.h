//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAHLWorkoutType : AceObject <SAAceSerializable>
{
}

+ (id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)workoutType;
@property(copy, nonatomic) NSString *workoutLocationType;
@property(copy, nonatomic) NSString *workoutCategory;
@property(copy, nonatomic) NSString *swimmingLocationType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

