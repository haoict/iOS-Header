//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface TFImageUpload : PBCodable <NSSecureCoding, NSCopying>
{
    NSString *_uploadUrl;
    NSString *_xiCloudVersionIdHeader;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *xiCloudVersionIdHeader; // @synthesize xiCloudVersionIdHeader=_xiCloudVersionIdHeader;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
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
@property(readonly, nonatomic) _Bool hasXiCloudVersionIdHeader;
@property(readonly, nonatomic) _Bool hasUploadUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

