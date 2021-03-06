//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUTDSXPCClientInterface-Protocol.h>
#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CUTDSSeeker : NSObject <CUTDSXPCClientInterface, NSSecureCoding>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    _Bool _directedOnly;
    _Bool _passive;
    int _dataLinkType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    NSString *_xpcServiceName;
    NSMutableSet *_endpoints;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tdsHashSeek; // @synthesize tdsHashSeek=_tdsHashSeek;
@property(nonatomic) unsigned long long tdsHashProvide; // @synthesize tdsHashProvide=_tdsHashProvide;
@property(retain, nonatomic) NSMutableSet *endpoints; // @synthesize endpoints=_endpoints;
@property(copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool passive; // @synthesize passive=_passive;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool directedOnly; // @synthesize directedOnly=_directedOnly;
@property(nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)updateEndpointsForDevices:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

