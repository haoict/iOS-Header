//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthorizationClientProtocol-Protocol.h>

@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol>
{
    id <AKAuthorizationUIProvider> _uiProvider;
}

- (void).cxx_destruct;
@property(retain) id <AKAuthorizationUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

