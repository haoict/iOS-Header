//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UnitTestRedirectTaskDelegate : NSObject <NSURLSessionTaskDelegate>
{
    _Bool _correctRequestURLSent;
}

@property _Bool correctRequestURLSent; // @synthesize correctRequestURLSent=_correctRequestURLSent;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

