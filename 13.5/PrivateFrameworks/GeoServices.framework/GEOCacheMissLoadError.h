//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOCacheMissLoadError : PBCodable <NSCopying>
{
    NSString *_errorDomain;
    unsigned int _count;
    int _errorCode;
    struct {
        unsigned int has_count:1;
        unsigned int has_errorCode:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) int errorCode;
@property(retain, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) _Bool hasErrorDomain;

@end

