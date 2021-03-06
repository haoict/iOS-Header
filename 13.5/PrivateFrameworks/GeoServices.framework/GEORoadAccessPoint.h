//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEORoadAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    int _drivingDirection;
    unsigned int _significance;
    int _transitDirection;
    int _walkingDirection;
    _Bool _isApproximate;
    struct {
        unsigned int has_drivingDirection:1;
        unsigned int has_significance:1;
        unsigned int has_transitDirection:1;
        unsigned int has_walkingDirection:1;
        unsigned int has_isApproximate:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSignificance;
@property(nonatomic) unsigned int significance;
- (int)StringAsTransitDirection:(id)arg1;
- (id)transitDirectionAsString:(int)arg1;
@property(nonatomic) _Bool hasTransitDirection;
@property(nonatomic) int transitDirection;
- (int)StringAsDrivingDirection:(id)arg1;
- (id)drivingDirectionAsString:(int)arg1;
@property(nonatomic) _Bool hasDrivingDirection;
@property(nonatomic) int drivingDirection;
- (int)StringAsWalkingDirection:(id)arg1;
- (id)walkingDirectionAsString:(int)arg1;
@property(nonatomic) _Bool hasWalkingDirection;
@property(nonatomic) int walkingDirection;
@property(nonatomic) _Bool hasIsApproximate;
@property(nonatomic) _Bool isApproximate;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;

@end

