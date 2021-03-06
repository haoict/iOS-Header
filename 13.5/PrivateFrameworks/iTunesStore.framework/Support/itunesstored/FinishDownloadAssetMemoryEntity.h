//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface FinishDownloadAssetMemoryEntity : SSMemoryEntity
{
    NSString *_downloadKind;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadKind; // @synthesize downloadKind=_downloadKind;
@property(readonly, nonatomic) NSString *variantIdentifier;
@property(readonly, nonatomic) NSString *sourceURLString;
@property(readonly, nonatomic) NSArray *SINFs;
@property(readonly, nonatomic) NSData *SINFData;
@property(readonly, nonatomic) unsigned long long processingTypes;
@property(readonly, nonatomic) NSString *pathExtension;
@property(readonly, nonatomic) NSString *localPath;
@property(readonly, nonatomic) long long mediaLibraryProtectionType;
@property(readonly, nonatomic, getter=isExternalAsset) _Bool externalAsset;
@property(readonly, nonatomic, getter=isDRMFree) _Bool DRMFree;
@property(readonly, nonatomic) NSString *fileProtectionType;
@property(readonly, nonatomic) NSDictionary *fileAttributes;
@property(readonly, nonatomic) NSData *DPInfoData;
@property(readonly, nonatomic) NSString *destinationURLString;
@property(readonly, nonatomic) NSString *destinationFileName;
@property(readonly, nonatomic) NSString *assetType;

@end

