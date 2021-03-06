//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>
#import <PhotosUI/PXAssetReferenceProtocol-Protocol.h>

@class NSIndexPath, NSString;
@protocol PUDisplayAsset, PUDisplayAssetCollection;

@interface PUAssetReference : NSObject <NSCopying, PXAssetReferenceProtocol>
{
    id <PUDisplayAsset> _asset;
    id <PUDisplayAssetCollection> _assetCollection;
    NSIndexPath *_indexPath;
    NSString *_dataSourceIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) id <PUDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) struct PXSimpleIndexPath simpleIndexPath;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

