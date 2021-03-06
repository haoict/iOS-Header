//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString;

@interface UIHandleRemoteNotificationAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (long long)UIActionType;
@property(readonly, copy, nonatomic) NSDictionary *userResponse;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(CDUnknownBlockType)arg5;

@end

