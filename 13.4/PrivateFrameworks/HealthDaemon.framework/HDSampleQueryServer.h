//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer
{
    _Bool _suspended;
    _Bool _includeAutomaticTimeZones;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
}

+ (_Bool)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool includeAutomaticTimeZones; // @synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void)_queue_start;
- (_Bool)validateConfiguration:(id *)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

