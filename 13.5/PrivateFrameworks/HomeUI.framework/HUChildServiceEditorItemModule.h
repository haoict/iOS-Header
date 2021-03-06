//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFItem, HFServiceItemProvider, HMAccessory, HMHome, NSSet;
@protocol HFServiceLikeItem;

@interface HUChildServiceEditorItemModule : HFItemModule
{
    NSSet *_itemProviders;
    HFItem<HFServiceLikeItem> *_sourceItem;
    HFServiceItemProvider *_childServiceItemProvider;
    unsigned long long _editingMode;
    HMHome *_home;
}

+ (CDUnknownBlockType)childItemComparator;
+ (id)supportedServiceTypes;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
@property(retain, nonatomic) HFServiceItemProvider *childServiceItemProvider; // @synthesize childServiceItemProvider=_childServiceItemProvider;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceItem; // @synthesize sourceItem=_sourceItem;
- (id)toggleConfigurationStateForItem:(id)arg1;
- (_Bool)canToggleConfigurationStateForItem:(id)arg1;
- (long long)configurationStateForItem:(id)arg1;
- (id)_isConfiguredControlItemForItem:(id)arg1;
- (id)_createItemProviders;
- (id)itemProviders;
@property(readonly, nonatomic) HMAccessory *accessory;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 mode:(unsigned long long)arg4;

@end

