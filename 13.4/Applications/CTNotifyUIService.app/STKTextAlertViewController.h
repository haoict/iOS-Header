//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STKBaseAlertViewController.h"

#import "UINavigationBarDelegate-Protocol.h"

@class NSString, STKTextSessionAction;

@interface STKTextAlertViewController : STKBaseAlertViewController <UINavigationBarDelegate>
{
}

+ (_Bool)wantsTextView;
- (void)dismiss;
- (void)dismiss:(id)arg1;
- (void)accept:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)alertText;
- (void)rightNavigationButtonPressed;
- (void)leftNavigationButtonPressed;
- (id)newBottomBar;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)newTopBar;
- (_Bool)_sendsResponseUponDisplay;
- (_Bool)validateAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) STKTextSessionAction *sessionAction; // @dynamic sessionAction;
@property(readonly) Class superclass;

@end

