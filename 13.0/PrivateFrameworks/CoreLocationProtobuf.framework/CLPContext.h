//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPContext : PBCodable <NSCopying>
{
    NSString *_bundleCategory;
    int _type;
    int _workoutType;
    _Bool _isDriving;
    struct {
        unsigned int type:1;
        unsigned int workoutType:1;
        unsigned int isDriving:1;
    } _has;
}

@property(retain, nonatomic) NSString *bundleCategory; // @synthesize bundleCategory=_bundleCategory;
@property(nonatomic) int workoutType; // @synthesize workoutType=_workoutType;
@property(nonatomic) _Bool isDriving; // @synthesize isDriving=_isDriving;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBundleCategory;
@property(nonatomic) _Bool hasWorkoutType;
@property(nonatomic) _Bool hasIsDriving;
@property(nonatomic) _Bool hasType;

@end

