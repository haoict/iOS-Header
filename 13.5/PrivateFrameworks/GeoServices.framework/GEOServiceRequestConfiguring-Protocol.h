//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapServiceTraits, NSArray, NSDictionary, NSNumber, NSString, PBRequest;

@protocol GEOServiceRequestConfiguring <NSObject>
- (unsigned char)requestCounterInfoTypeForRequest:(PBRequest *)arg1;
- (NSNumber *)serviceTypeNumber;
- (NSString *)debugRequestName;
- (CDStruct_d1a7ebee)dataRequestKindForRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2;
- (NSDictionary *)additionalHTTPHeaders;
- (NSArray *)additionalURLQueryItems;
- (unsigned long long)urlType;

@optional
- (unsigned long long)multipathServiceType;
- (double)timeout;
@end

