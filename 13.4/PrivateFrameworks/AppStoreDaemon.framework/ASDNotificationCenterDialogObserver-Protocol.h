//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest;

@protocol ASDNotificationCenterDialogObserver <NSObject>
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 resultHandler:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 resultHandler:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

