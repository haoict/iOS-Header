//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSSet, NSString;
@protocol CRKFeatureDataStoreProtocol;

@protocol CRKFeatureDataStoreProtocol <NSObject>
+ (id <CRKFeatureDataStoreProtocol>)sharedDataStore;
@property(nonatomic, getter=isClassroomInstructorRoleEnabled) _Bool classroomInstructorRoleEnabled;
@property(nonatomic, getter=isClassroomStudentRoleEnabled) _Bool classroomStudentRoleEnabled;
@property(readonly, copy, nonatomic) NSSet *activeClassroomRoles;
@property(readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) _Bool classroomRequestPermissionToLeaveClassesForced;
@property(readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) _Bool classroomAutomaticClassJoiningForced;
@property(readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) _Bool classroomUnpromptedScreenObservationForced;
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(NSString *)arg3 configurationUUID:(NSString *)arg4;
- (unsigned long long)effectiveValueForSetting:(NSString *)arg1 configurationUUID:(NSString *)arg2 outAsk:(_Bool *)arg3;
- (unsigned long long)boolRestrictionForFeature:(NSString *)arg1;
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(NSString *)arg3;
- (unsigned long long)effectiveBoolValueForSetting:(NSString *)arg1 outAsk:(_Bool *)arg2;

@optional
- (_Bool)isFeatureForced:(NSString *)arg1;
@end

