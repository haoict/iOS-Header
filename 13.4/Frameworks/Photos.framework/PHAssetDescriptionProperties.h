//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetDescriptionProperties : PHAssetPropertySet
{
    NSString *_title;
    NSString *_assetDescription;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *assetDescription; // @synthesize assetDescription=_assetDescription;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end

