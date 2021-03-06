//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOMapServiceTraits, MSPCollection, NSArray;

@protocol CollectionManagerOperation <NSObject>
- (GEOMapServiceTraits *)newTraits;
- (void)deleteCollections:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteCollection:(MSPCollection *)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveCollection:(MSPCollection *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createCollection:(MSPCollection *)arg1 completion:(void (^)(NSError *))arg2;
- (void)touchCollection:(MSPCollection *)arg1;
@end

