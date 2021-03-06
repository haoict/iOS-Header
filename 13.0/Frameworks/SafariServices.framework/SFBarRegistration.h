//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <SafariServices/_SFBarRegistrationToken-Protocol.h>

@class NSMutableSet, NSOrderedSet, NSString, SFDownloadsBarButtonItem, UIBarButtonItem, UIToolbar, _SFBarManager;

__attribute__((visibility("hidden")))
@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken>
{
    NSOrderedSet *_arrangedBarItems;
    UIToolbar *_bar;
    _SFBarManager *_barManager;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_bookmarksItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_newTabItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_tabExposeItem;
    UIBarButtonItem *_openInSafariItem;
    SFDownloadsBarButtonItem *_downloadsItem;
    NSMutableSet *_hiddenBarItems;
    NSOrderedSet *_lastCommittedArrangedBarItems;
    long long _layout;
}

- (void).cxx_destruct;
- (void)_itemReceivedLongPress:(id)arg1;
- (void)_itemReceivedTap:(id)arg1;
- (void)_itemReceivedTouchDown:(id)arg1;
- (long long)_barItemForUIBarButtonItem:(id)arg1;
- (id)_UIBarButtonItemForBarItem:(long long)arg1;
- (id)_UIBarButtonItemsForArrangedBarItems:(id)arg1;
- (id)_effectiveArrangedBarItems;
- (_Bool)_arrangedBarItemsNeedUpdate;
- (id)popoverSourceInfoForItem:(long long)arg1;
- (id)UIBarButtonItemForItem:(long long)arg1;
- (_Bool)containsBarItem:(long long)arg1;
- (void)updateArrangedUIBarButtonItemsIfNeeded;
- (void)setBarItem:(long long)arg1 hidden:(_Bool)arg2;
- (void)setBarItem:(long long)arg1 enabled:(_Bool)arg2;
- (void)pulseDownloadsItem;
- (void)setDownloadsItemProgress:(double)arg1;
- (void)setBookmarksItemSelected:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)_newBarButtonItemForSFBarItem:(long long)arg1;
- (id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

