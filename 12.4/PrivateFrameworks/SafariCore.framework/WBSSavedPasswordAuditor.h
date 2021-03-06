//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSAutoFillQuirksManager, WBSSavedPasswordStore;

@interface WBSSavedPasswordAuditor : NSObject
{
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedPasswordStore *_savedPasswordStore;
}

- (void).cxx_destruct;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;
- (_Bool)savedPasswordIsReused:(id)arg1;
- (_Bool)passwordStoreHasDuplicatedPasswords;
- (_Bool)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2;
- (_Bool)_savedPasswordQualifiesForReuseAuditing:(id)arg1;
- (id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2;

@end

