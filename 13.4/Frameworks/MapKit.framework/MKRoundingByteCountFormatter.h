//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKRoundingByteCountFormatter : NSObject
{
}

+ (id)stringFromByteCountWithRoundingTo10MB:(long long)arg1;
+ (id)stringFromByteCountWithRoundingTo5MB:(long long)arg1;
+ (id)stringFromByteCountWithRoundingTo1MB:(long long)arg1;
+ (long long)roundByteCount:(long long)arg1 toNearest:(long long)arg2;
+ (id)stringFromByteCount:(long long)arg1 roundedToNearest:(long long)arg2;

@end

