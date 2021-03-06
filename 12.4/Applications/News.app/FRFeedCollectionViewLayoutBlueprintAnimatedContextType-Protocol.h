//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UICollectionViewLayoutAttributes;

@protocol FRFeedCollectionViewLayoutBlueprintAnimatedContextType <NSObject>

@optional
- (UICollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingDecorationElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2 withTopOffsetBlock:(void (^)(UICollectionViewLayoutAttributes *))arg3;
- (UICollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2 withTopOffsetBlock:(void (^)(UICollectionViewLayoutAttributes *))arg3;
- (UICollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath *)arg1 withTopOffsetBlock:(void (^)(UICollectionViewLayoutAttributes *))arg2;
- (UICollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingDecorationElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2 withTopOffsetBlock:(void (^)(UICollectionViewLayoutAttributes *))arg3;
- (UICollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2 withTopOffsetBlock:(void (^)(UICollectionViewLayoutAttributes *))arg3;
- (UICollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath *)arg1 withTopOffsetBlock:(void (^)(UICollectionViewLayoutAttributes *))arg2;
@end

