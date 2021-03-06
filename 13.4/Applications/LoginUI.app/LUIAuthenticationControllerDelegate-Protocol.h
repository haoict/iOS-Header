//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UMUser;
@protocol LUIProgressAnimationProtocol;

@protocol LUIAuthenticationControllerDelegate <NSObject>
- (void)presentPasscodeViewControllerForUser:(UMUser *)arg1 passcodeViewDidAppearAction:(void (^)(void))arg2 passcodeCanceledAction:(void (^)(void))arg3 passcodeEnteredAction:(void (^)(NSString *, id <LUIPasscodeVerificationResultResponder>))arg4;

@optional
@property(readonly, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView;
- (_Bool)shouldUpdateStudentStatusWithClassroom;
- (void)authenticationCanceled;
@end

