//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentExecutionResult-Protocol.h>

@class NSString;

@interface _INPBIntentExecutionResult : PBCodable <_INPBIntentExecutionResult, NSSecureCoding, NSCopying>
{
    CDStruct_a8e956ad _has;
    _Bool __encodeLegacyGloryData;
    int _encodingFormat;
    NSString *_encodedIntent;
    NSString *_encodedIntentResponse;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int encodingFormat; // @synthesize encodingFormat=_encodingFormat;
@property(copy, nonatomic) NSString *encodedIntentResponse; // @synthesize encodedIntentResponse=_encodedIntentResponse;
@property(copy, nonatomic) NSString *encodedIntent; // @synthesize encodedIntent=_encodedIntent;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsEncodingFormat:(id)arg1;
- (id)encodingFormatAsString:(int)arg1;
@property(nonatomic) _Bool hasEncodingFormat;
@property(readonly, nonatomic) _Bool hasEncodedIntentResponse;
@property(readonly, nonatomic) _Bool hasEncodedIntent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

