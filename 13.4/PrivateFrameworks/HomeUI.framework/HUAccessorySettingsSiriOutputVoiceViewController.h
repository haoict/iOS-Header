//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>

@class HUAccessorySettingsSiriOutputVoiceItemManager, NSString;

@interface HUAccessorySettingsSiriOutputVoiceViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol>
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUAccessorySettingsSiriOutputVoiceItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

