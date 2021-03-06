//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPConfigurationFieldValue, NSString;

__attribute__((visibility("hidden")))
@interface CKDPConfigurationField : PBCodable <NSCopying>
{
    NSString *_name;
    CKDPConfigurationFieldValue *_value;
}

@property(retain, nonatomic) CKDPConfigurationFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
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
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasName;

@end

