//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface PXGAssetImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_activeRequestIDs;
    NSMutableSet *_activeAssets;
    NSMutableArray *_entries;
    NSMutableArray *_reusableEntries;
}

- (void).cxx_destruct;
- (void)clearCachedImagesForRequestIDs:(id)arg1;
- (void)cacheImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 forRequestID:(int)arg3;
- (struct CGImage *)cachedImageWithOrientation:(unsigned int *)arg1 forAsset:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 forRequestID:(int)arg5;
- (id)init;

@end

