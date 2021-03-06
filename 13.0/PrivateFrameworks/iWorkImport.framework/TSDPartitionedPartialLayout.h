//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TSDDefaultPartitioner;

__attribute__((visibility("hidden")))
@interface TSDPartitionedPartialLayout : TSDLayout
{
    struct CGRect mBounds;
    TSDDefaultPartitioner *mPartitioner;
}

@property(readonly, nonatomic) TSDDefaultPartitioner *partitioner; // @synthesize partitioner=mPartitioner;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (void)processChanges:(id)arg1;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithInfo:(id)arg1 bounds:(struct CGRect)arg2 partitioner:(id)arg3;

@end

