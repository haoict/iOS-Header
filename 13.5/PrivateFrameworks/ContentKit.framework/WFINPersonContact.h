//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContact.h>

@class INPerson;

@interface WFINPersonContact : WFContact
{
    INPerson *_person;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)contactWithPerson:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) INPerson *person; // @synthesize person=_person;
- (id)wfSerializedRepresentation;
- (id)inPerson;
- (id)wfName;
- (id)initWithINPerson:(id)arg1;

@end

