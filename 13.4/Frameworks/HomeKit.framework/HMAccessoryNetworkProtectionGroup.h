//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID;

@interface HMAccessoryNetworkProtectionGroup : NSObject <HMObjectMerge, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    HMHome *_home;
    NSUUID *_uniqueIdentifier;
    NSString *_manufacturer;
    HMAccessoryCategory *_category;
    long long _targetProtectionMode;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)_configureWithHome:(id)arg1;
- (void)updateProtectionMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *accessories;
@property long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
@property(retain) HMAccessoryCategory *category; // @synthesize category=_category;
@property(copy) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property __weak HMHome *home; // @synthesize home=_home;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 protectionMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

