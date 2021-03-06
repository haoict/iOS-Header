//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDProfile, HDSQLitePredicate;

@interface ACHWorkoutUtility : NSObject
{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    HDSQLitePredicate *_firstPartyPredicate;
}

@property(retain, nonatomic) HDSQLitePredicate *firstPartyPredicate; // @synthesize firstPartyPredicate=_firstPartyPredicate;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (void).cxx_destruct;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3;
- (id)workoutsInDateInterval:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end

