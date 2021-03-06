//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNMeCardSharingNameProvider-Protocol.h>

@class CNContact, NSString;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider>
{
    CNContact *_contact;
}

+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)nickname;
- (id)middleName;
- (id)givenName;
- (id)familyName;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

