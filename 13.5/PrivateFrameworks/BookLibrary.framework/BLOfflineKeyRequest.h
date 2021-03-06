//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class BLSecureOfflineKeyDeliveryRequest, BLStoreItemMetadataRequest, ICStoreHLSAssetInfo, MPMediaItem, NSData, NSString;

@interface BLOfflineKeyRequest : ICRequestOperation
{
    BLStoreItemMetadataRequest *_metadataRequest;
    ICStoreHLSAssetInfo *_assetInfo;
    BLSecureOfflineKeyDeliveryRequest *_secureKeyRequest;
    MPMediaItem *_mediaItem;
    NSString *_identity;
    NSData *_persistentKeyData;
}

- (void).cxx_destruct;
- (void)_performOfflineKeyRequest;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithMediaItem:(id)arg1 identity:(id)arg2;

@end

