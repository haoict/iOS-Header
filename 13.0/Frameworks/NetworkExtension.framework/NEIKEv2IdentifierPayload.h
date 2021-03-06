//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload
{
    NEIKEv2Identifier *_identifier;
}

+ (id)copyTypeDescription;
@property(retain) NEIKEv2Identifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)parsePayloadData;
- (_Bool)generatePayloadData;
- (_Bool)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end

