//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class NSMutableArray, UIButton, UILabel, _SFTextSuggestion;
@protocol _SFAutoFillInputViewDelegate;

@interface _SFAutoFillInputView : UIInputView
{
    _SFTextSuggestion *_suggestion;
    UILabel *_explanationLabel;
    UIButton *_keyboardButton;
    UIButton *_otherPasswordsButton;
    UIButton *_fillCredentialButton;
    NSMutableArray *_dynamicConstraints;
    id <_SFAutoFillInputViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_SFAutoFillInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showStandardKeyboard:(id)arg1;
- (void)_showMorePasswords:(id)arg1;
- (void)_fillCredential:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFillCredentialButtonLabelMetrics;
- (void)updateConstraints;
- (id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3;

@end

