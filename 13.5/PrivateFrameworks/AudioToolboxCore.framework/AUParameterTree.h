//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolboxCore/AUParameterGroup.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class AUAudioUnit_XH, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding>
{
    _Bool __autoCreatedForV2AU;
    _Bool __suppressObserverCallbacks;
    int _numRecorders;
    NSObject<OS_dispatch_queue> *_observationQueue;
    struct AUObserverController *_observerController;
    NSObject<OS_dispatch_queue> *_valueAccessQueue;
    AUAudioUnit_XH *__auXH;
    struct AURemoteParameterObserver *_remoteObserverToken;
    struct AURemoteParameterObserver *_remoteRecorderToken;
    NSXPCConnection *_remoteParameterSynchronizerXPCConnection;
    vector_66b3461a _addrToParamIndex;
}

+ (_Bool)supportsSecureCoding;
+ (id)createTreeWithChildren:(id)arg1;
+ (id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
+ (id)createGroupTemplate:(id)arg1;
+ (id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3;
+ (id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak NSXPCConnection *remoteParameterSynchronizerXPCConnection; // @synthesize remoteParameterSynchronizerXPCConnection=_remoteParameterSynchronizerXPCConnection;
@property(nonatomic) _Bool _suppressObserverCallbacks; // @synthesize _suppressObserverCallbacks=__suppressObserverCallbacks;
@property(nonatomic) struct AURemoteParameterObserver *remoteRecorderToken; // @synthesize remoteRecorderToken=_remoteRecorderToken;
@property(nonatomic) struct AURemoteParameterObserver *remoteObserverToken; // @synthesize remoteObserverToken=_remoteObserverToken;
@property(nonatomic) int numRecorders; // @synthesize numRecorders=_numRecorders;
@property(nonatomic) __weak AUAudioUnit_XH *_auXH; // @synthesize _auXH=__auXH;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *valueAccessQueue; // @synthesize valueAccessQueue=_valueAccessQueue;
@property(nonatomic) struct AUObserverController *observerController; // @synthesize observerController=_observerController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // @synthesize observationQueue=_observationQueue;
@property(nonatomic) _Bool _autoCreatedForV2AU; // @synthesize _autoCreatedForV2AU=__autoCreatedForV2AU;
@property(nonatomic) vector_66b3461a addrToParamIndex; // @synthesize addrToParamIndex=_addrToParamIndex;
- (void)remoteSyncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_checkInitTreeObservation;
- (id)parameterWithID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)parameterWithAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (void)_init2;

@end

