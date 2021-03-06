//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class HFEventBuilder, NSSet;
@protocol HFLocationEventBuilder;

@interface HFLocationTriggerBuilder : HFTriggerBuilder
{
    HFEventBuilder<HFLocationEventBuilder> *_eventBuilder;
    NSSet *_stagedEvents;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) NSSet *stagedEvents; // @synthesize stagedEvents=_stagedEvents;
@property(retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder; // @synthesize eventBuilder=_eventBuilder;
- (void).cxx_destruct;
- (id)_performValidation;
- (id)_updateEvents;
- (id)_allActionSets;
- (_Bool)requiresFMFDeviceToRun;
- (_Bool)requiresLocationServicesAuthorization;
- (_Bool)secureActionsRequireConfirmationToRun;
- (_Bool)requiresConfirmationToRun;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (_Bool)supportsEndEvents;
- (_Bool)supportsConditions;

@end

