//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation
{
    NSString *_canonicalID;
    WLKContentPlayResponse *_response;
}

@property(retain, nonatomic) WLKContentPlayResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithCanonicalID:(id)arg1 caller:(id)arg2;

@end

