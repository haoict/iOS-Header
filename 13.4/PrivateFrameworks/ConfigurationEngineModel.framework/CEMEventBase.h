//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMEventBase : CEMPayloadBase
{
    NSString *_payloadType;
}

+ (id)eventForPayload:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

