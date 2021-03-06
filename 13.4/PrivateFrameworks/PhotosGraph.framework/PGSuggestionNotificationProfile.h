//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSSet;
@protocol OS_os_log;

@interface PGSuggestionNotificationProfile : NSObject
{
    NSArray *_existingSuggestions;
    _Bool _eligibleForNotification;
    unsigned char _userType;
    NSSet *_shareParticipantContactIdentifiers;
    NSDate *_dateOfLastNotification;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg1;
+ (unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg1;
- (void).cxx_destruct;
@property(nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (unsigned char)notificationQualityForEnrichableEvent:(id)arg1;
- (unsigned char)notificationQualityForHighlightNode:(id)arg1;
- (void)_determineUserTypeAndEligibility;
- (_Bool)shouldNotifyForSuggestion:(id)arg1 withOptions:(id)arg2;
@property(readonly, nonatomic) NSDate *dateOfLastNotification;
- (id)shareParticipantContactIdentifiers;
@property(readonly, nonatomic) unsigned char userType;
@property(readonly, nonatomic) _Bool eligibleForNotification;
- (id)initWithExistingSuggestions:(id)arg1;

@end

