//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoCheckTLKsMissingResponse : PBCodable <NSCopying>
{
    NSData *_errorData;
    _Bool _missing;
    _Bool _pending;
    struct {
        unsigned int missing:1;
        unsigned int pending:1;
    } _has;
}

@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool missing; // @synthesize missing=_missing;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
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
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasMissing;
@property(nonatomic) _Bool hasPending;

@end

