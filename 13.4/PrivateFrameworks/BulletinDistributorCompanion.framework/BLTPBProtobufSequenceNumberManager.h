//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BLTCircularBitBuffer, NSLock, NSString, NSURL, NSUUID;

@interface BLTPBProtobufSequenceNumberManager : NSObject
{
    unsigned long long _sendSequenceNumber;
    unsigned long long _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    NSURL *_sequenceNumbersURL;
    _Bool _updateSequenceNumbersOnOutOfOrder;
    unsigned long long _sessionState;
    NSString *_serviceName;
    NSUUID *_currentSessionIdentifier;
    NSUUID *_recvSessionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *recvSessionIdentifier; // @synthesize recvSessionIdentifier=_recvSessionIdentifier;
@property(readonly, nonatomic) NSUUID *currentSessionIdentifier; // @synthesize currentSessionIdentifier=_currentSessionIdentifier;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
- (_Bool)_writeSequenceNumbersToStore;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1;
- (id)_sequenceNumbersURL;
- (_Bool)_isSequenceNumberInOrder:(unsigned long long)arg1;
- (id)nextSendSequenceNumber;
- (long long)setRecvSequenceNumber:(unsigned long long)arg1 recvSessionIdentifier:(id)arg2 force:(_Bool)arg3;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(_Bool)arg2 duplicateCapacity:(unsigned long long)arg3;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(_Bool)arg2;

@end

