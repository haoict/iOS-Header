//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIBarButtonItem;

@interface UIViewController (MusicSearchViewControllerAdditions)
- (void)_music_handleSearchButtonTapped:(id)arg1;
- (void)music_presentSearchViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, setter=music_setSearchOptions:) unsigned long long music_searchOptions;
@property(readonly, nonatomic) UIBarButtonItem *music_searchEntryRightBarButtonItem;
@property(nonatomic, setter=music_setWantsSearchEntryRightBarButtonItem:) _Bool music_wantsSearchEntryRightBarButtonItem;
@end

