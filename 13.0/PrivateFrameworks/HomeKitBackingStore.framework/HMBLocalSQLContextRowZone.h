//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;
@protocol HMBLocalZoneID;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRowZone : HMFObject
{
    id <HMBLocalZoneID> _identifier;
    unsigned long long _zoneRow;
    NSUUID *_replication;
}

@property(retain, nonatomic) NSUUID *replication; // @synthesize replication=_replication;
@property(nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(retain, nonatomic) id <HMBLocalZoneID> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3;
- (id)initWithZoneRow:(unsigned long long)arg1;
- (id)init;

@end

