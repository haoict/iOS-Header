//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WallpaperKit/WKAbstractWallpaper.h>

#import <WallpaperKit/WKFileBasedWallpaper-Protocol.h>

@class NSString, NSURL;

@interface WKLiveWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper>
{
    NSURL *_fullsizeImageURL;
    NSURL *_thumbnailImageURL;
    NSURL *_videoAssetURL;
    double _stillTimeInVideo;
}

- (void).cxx_destruct;
@property(nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property(copy, nonatomic) NSURL *videoAssetURL; // @synthesize videoAssetURL=_videoAssetURL;
@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSURL *fullsizeImageURL; // @synthesize fullsizeImageURL=_fullsizeImageURL;
@property(readonly, nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 videoAssetURL:(id)arg5 stillTimeInVideo:(double)arg6;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

