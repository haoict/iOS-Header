//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKParticipant.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface EKParticipant (WFNaming) <WFNaming, WFSerializableContent>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wfSerializedRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

