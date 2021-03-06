//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDPlayModeButton, MCDRepeatButton, NSArray;

@interface MCDPlayModeControlView : UIView
{
    _Bool _fuseSubscriberLayout;
    MCDRepeatButton *_repeatButton;
    MCDPlayModeButton *_moreButton;
    MCDPlayModeButton *_shuffleButton;
    MCDPlayModeButton *_addToLibraryButton;
    MCDPlayModeButton *_playbackRateButton;
    NSArray *_activeButtonLayoutConstraints;
}

@property(retain, nonatomic) NSArray *activeButtonLayoutConstraints; // @synthesize activeButtonLayoutConstraints=_activeButtonLayoutConstraints;
@property(nonatomic) _Bool fuseSubscriberLayout; // @synthesize fuseSubscriberLayout=_fuseSubscriberLayout;
@property(readonly, nonatomic) MCDPlayModeButton *playbackRateButton; // @synthesize playbackRateButton=_playbackRateButton;
@property(readonly, nonatomic) MCDPlayModeButton *addToLibraryButton; // @synthesize addToLibraryButton=_addToLibraryButton;
@property(readonly, nonatomic) MCDPlayModeButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(readonly, nonatomic) MCDPlayModeButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) MCDRepeatButton *repeatButton; // @synthesize repeatButton=_repeatButton;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateButtonLayouts;
- (void)_addConstraints;
- (void)addSizeConstraintsForButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

