//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICopyToPasteboardActivity.h>

#import <PhotosUI/PXActivity-Protocol.h>

@class NSString;
@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyToPasteboardActivity : UICopyToPasteboardActivity <PXActivity>
{
    id <PXActivityItemSourceController> _itemSourceController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXActivityItemSourceController> itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (id)activityTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

