//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject
{
    NSDictionary *_backingDictionary;
    NSMutableArray *_keyIndices;
}

- (void).cxx_destruct;
- (id)reconcileKey:(id)arg1 matchedIndex:(unsigned int *)arg2 sequence:(unsigned char *)arg3 error:(unsigned char *)arg4;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

