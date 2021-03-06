//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class SBUIForceTouchGestureRecognizer, SBUIIconForceTouchController;

@protocol SBUIIconForceTouchControllerDelegate <NSObject>

@optional
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 didDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 willDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 didPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 willPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (_Bool)iconForceTouchController:(SBUIIconForceTouchController *)arg1 shouldUseSecureWindowForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (_Bool)iconForceTouchController:(SBUIIconForceTouchController *)arg1 shouldHandleGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
@end

