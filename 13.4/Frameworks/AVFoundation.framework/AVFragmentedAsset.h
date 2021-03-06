//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVURLAsset.h>

#import <AVFoundation/AVFragmentMinding-Protocol.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding>
{
    AVFragmentedAssetInternal *_fragmentedAsset;
}

+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForAssetTracks;
- (_Bool)_mindsFragments;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end

