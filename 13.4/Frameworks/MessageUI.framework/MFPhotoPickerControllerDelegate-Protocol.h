//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFPhotoPickerController, NSDictionary, NSString;

@protocol MFPhotoPickerControllerDelegate <NSObject>
- (void)photoPicker:(MFPhotoPickerController *)arg1 didSelectAssetWithIdentifier:(NSString *)arg2 mediaInfo:(NSDictionary *)arg3;

@optional
- (void)photoPicker:(MFPhotoPickerController *)arg1 didDeselectAssetWithIdentifier:(NSString *)arg2;
- (void)photoPickerDidCancel:(MFPhotoPickerController *)arg1;
@end

