//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDictionary, NSUUID;

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation
{
    NSUUID *_identifier;
    NSDictionary *_metadata;
    NSUUID *_frozenIdentifier;
    long long _freezeResult;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long freezeResult; // @synthesize freezeResult=_freezeResult;
@property(readonly, copy, nonatomic) NSUUID *frozenIdentifier; // @synthesize frozenIdentifier=_frozenIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2;

@end

