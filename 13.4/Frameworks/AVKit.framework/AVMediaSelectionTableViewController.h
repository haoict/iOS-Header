//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class AVMediaSelectionOption, AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTableViewController : UITableViewController
{
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
    AVPlayerController *_playerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;
- (_Bool)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;
- (void)playerControllerMediaSelectionChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

