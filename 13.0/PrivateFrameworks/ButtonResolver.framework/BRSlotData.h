//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRAsset, NSNumber;

@interface BRSlotData : NSObject
{
    _Bool _isProgrammed;
    NSNumber *_slot;
    BRAsset *_asset;
    unsigned long long _refCount;
}

@property(nonatomic) unsigned long long refCount; // @synthesize refCount=_refCount;
@property(nonatomic) _Bool isProgrammed; // @synthesize isProgrammed=_isProgrammed;
@property(retain, nonatomic) BRAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSNumber *slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) id propertyList;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlotData:(id)arg1;

@end

