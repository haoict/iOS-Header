//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AACCore/AEPerformancePrimitivesInFlightInterval-Protocol.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject <AEPerformancePrimitivesInFlightInterval>
{
    _Bool _isEnded;
    NSString *_name;
    unsigned long long _signpostID;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnded; // @synthesize isEnded=_isEnded;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)endInterval;
- (id)initWithName:(id)arg1 signpostID:(unsigned long long)arg2 log:(id)arg3;
- (void)dealloc;

@end

