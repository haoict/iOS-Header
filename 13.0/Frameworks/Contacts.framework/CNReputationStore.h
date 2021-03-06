//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNReputationContactsAdapter, CNReputationCoreRecentsAdapter, CNReputationLogger;
@protocol CNSchedulerProvider;

@interface CNReputationStore : NSObject
{
    CNReputationCoreRecentsAdapter *_coreRecentsAdapter;
    CNReputationContactsAdapter *_contactsAdapter;
    CNReputationLogger *_logger;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNReputationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter; // @synthesize contactsAdapter=_contactsAdapter;
@property(readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter; // @synthesize coreRecentsAdapter=_coreRecentsAdapter;
- (void).cxx_destruct;
- (id)makeFutureForHandle:(id)arg1;
- (id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4;
- (id)init;

@end

