//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary;

@interface SGBundleIdBlacklist : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_blacklist;
}

+ (id)defaultBlacklist;
- (void).cxx_destruct;
- (_Bool)isEqualToBundleIdBlacklist:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)enumerateBlacklistRangesForBundleId:(id)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)blacklistBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (_Bool)isBlacklisted:(id)arg1 date:(id)arg2;
- (id)plist;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end

