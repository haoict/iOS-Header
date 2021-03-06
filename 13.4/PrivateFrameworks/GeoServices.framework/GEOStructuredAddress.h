//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_5df41632 _geoIds;
    NSString *_administrativeAreaCode;
    NSString *_administrativeArea;
    NSMutableArray *_areaOfInterests;
    NSString *_countryCode;
    NSString *_country;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCodeExtension;
    NSString *_postCodeFull;
    NSString *_postCode;
    NSString *_premises;
    NSString *_premise;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)subPremiseType;
+ (Class)dependentLocalityType;
+ (Class)areaOfInterestType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)geoIdAtIndex:(unsigned long long)arg1;
- (void)addGeoId:(long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) long long *geoIds;
@property(readonly, nonatomic) unsigned long long geoIdsCount;
@property(retain, nonatomic) NSString *postCodeFull;
@property(readonly, nonatomic) _Bool hasPostCodeFull;
- (id)subPremiseAtIndex:(unsigned long long)arg1;
- (unsigned long long)subPremisesCount;
- (void)addSubPremise:(id)arg1;
- (void)clearSubPremises;
@property(retain, nonatomic) NSMutableArray *subPremises;
@property(retain, nonatomic) NSString *premise;
@property(readonly, nonatomic) _Bool hasPremise;
- (id)dependentLocalityAtIndex:(unsigned long long)arg1;
- (unsigned long long)dependentLocalitysCount;
- (void)addDependentLocality:(id)arg1;
- (void)clearDependentLocalitys;
@property(retain, nonatomic) NSMutableArray *dependentLocalitys;
@property(retain, nonatomic) NSString *ocean;
@property(readonly, nonatomic) _Bool hasOcean;
@property(retain, nonatomic) NSString *inlandWater;
@property(readonly, nonatomic) _Bool hasInlandWater;
- (id)areaOfInterestAtIndex:(unsigned long long)arg1;
- (unsigned long long)areaOfInterestsCount;
- (void)addAreaOfInterest:(id)arg1;
- (void)clearAreaOfInterests;
@property(retain, nonatomic) NSMutableArray *areaOfInterests;
@property(retain, nonatomic) NSString *postCodeExtension;
@property(readonly, nonatomic) _Bool hasPostCodeExtension;
@property(retain, nonatomic) NSString *fullThoroughfare;
@property(readonly, nonatomic) _Bool hasFullThoroughfare;
@property(retain, nonatomic) NSString *subThoroughfare;
@property(readonly, nonatomic) _Bool hasSubThoroughfare;
@property(retain, nonatomic) NSString *thoroughfare;
@property(readonly, nonatomic) _Bool hasThoroughfare;
@property(retain, nonatomic) NSString *premises;
@property(readonly, nonatomic) _Bool hasPremises;
@property(retain, nonatomic) NSString *subLocality;
@property(readonly, nonatomic) _Bool hasSubLocality;
@property(retain, nonatomic) NSString *postCode;
@property(readonly, nonatomic) _Bool hasPostCode;
@property(retain, nonatomic) NSString *locality;
@property(readonly, nonatomic) _Bool hasLocality;
@property(retain, nonatomic) NSString *subAdministrativeArea;
@property(readonly, nonatomic) _Bool hasSubAdministrativeArea;
@property(retain, nonatomic) NSString *administrativeAreaCode;
@property(readonly, nonatomic) _Bool hasAdministrativeAreaCode;
@property(retain, nonatomic) NSString *administrativeArea;
@property(readonly, nonatomic) _Bool hasAdministrativeArea;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(retain, nonatomic) NSString *country;
@property(readonly, nonatomic) _Bool hasCountry;
- (void)dealloc;
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (_Bool)isEmpty;
- (id)postalAddress;
- (id)initWithPostalAddress:(id)arg1;
- (id)addressDictionary;
- (id)initWithAddressDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

