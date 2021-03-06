//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPAlert.h>

#import <TelephonyUI/SBSRemoteAlertHandleObserver-Protocol.h>

@class BSProcessHandle, NSSet, NSString, SBSRemoteAlertHandle;

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver>
{
    SBSRemoteAlertHandle *_remoteAlertHandle;
    CDUnknownBlockType _dialAction;
    NSString *_buttonTitle;
    NSSet *_handles;
    BSProcessHandle *_processHandle;
}

@property(readonly, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(readonly, copy, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) CDUnknownBlockType dialAction; // @synthesize dialAction=_dialAction;
@property(retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // @synthesize remoteAlertHandle=_remoteAlertHandle;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (id)phoneNumberHandle;
- (void)otherResponse;
- (void)defaultResponse;
- (id)otherButtonTitle;
- (id)defaultButtonTitle;
- (void)show;
- (id)title;
- (id)initWithButtonTitle:(id)arg1 handles:(id)arg2 dialAction:(CDUnknownBlockType)arg3;
- (id)initWithJoinRequest:(id)arg1 dialAction:(CDUnknownBlockType)arg2;
- (id)initWithDialRequest:(id)arg1 dialAction:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

