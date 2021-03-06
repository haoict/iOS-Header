//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBAction, BLTPBSectionIcon, NSData, NSMutableArray, NSString;

@interface BLTPBBulletin : PBCodable <NSCopying>
{
    double _date;
    double _publicationDate;
    double _requiredExpirationDate;
    double _soundAudioVolume;
    double _soundMaximumDuration;
    NSMutableArray *_additionalAttachments;
    NSData *_alertSuppressionContexts;
    NSData *_alertSuppressionContextsNulls;
    NSData *_attachment;
    NSString *_attachmentID;
    unsigned int _attachmentType;
    NSString *_attachmentURL;
    NSString *_bulletinID;
    NSString *_category;
    NSString *_categoryID;
    NSData *_context;
    NSData *_contextNulls;
    BLTPBAction *_dismissAction;
    NSString *_dismissalID;
    unsigned int _feed;
    BLTPBSectionIcon *_icon;
    NSString *_messageTitle;
    NSMutableArray *_peopleIDs;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_replyToken;
    NSString *_sectionDisplayName;
    NSString *_sectionID;
    int _sectionSubtype;
    BLTPBAction *_snoozeAction;
    NSString *_sockPuppetAppBundleID;
    NSString *_soundAccountIdentifier;
    int _soundAlertType;
    NSString *_soundToneIdentifier;
    NSMutableArray *_subsectionIDs;
    NSString *_subtitle;
    NSMutableArray *_supplementaryActions;
    NSString *_teamID;
    NSString *_threadID;
    NSString *_title;
    NSString *_universalSectionID;
    _Bool _containsUpdateIcon;
    _Bool _containsUpdatedAttachment;
    _Bool _hasCriticalIcon;
    _Bool _ignoresQuietMode;
    _Bool _includesSound;
    _Bool _loading;
    _Bool _preemptsPresentedAlert;
    _Bool _soundShouldIgnoreRingerSwitch;
    _Bool _soundShouldRepeat;
    _Bool _suppressDelayForForwardedBulletins;
    _Bool _turnsOnDisplay;
    struct {
        unsigned int date:1;
        unsigned int publicationDate:1;
        unsigned int requiredExpirationDate:1;
        unsigned int soundAudioVolume:1;
        unsigned int soundMaximumDuration:1;
        unsigned int attachmentType:1;
        unsigned int sectionSubtype:1;
        unsigned int soundAlertType:1;
        unsigned int containsUpdateIcon:1;
        unsigned int containsUpdatedAttachment:1;
        unsigned int hasCriticalIcon:1;
        unsigned int ignoresQuietMode:1;
        unsigned int loading:1;
        unsigned int preemptsPresentedAlert:1;
        unsigned int soundShouldIgnoreRingerSwitch:1;
        unsigned int soundShouldRepeat:1;
        unsigned int suppressDelayForForwardedBulletins:1;
        unsigned int turnsOnDisplay:1;
    } _has;
}

+ (Class)additionalAttachmentsType;
+ (Class)peopleIDsType;
+ (Class)subsectionIDsType;
+ (Class)supplementaryActionsType;
+ (void)_addAttachmentsFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 attachOption:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_attachmentFromBBAttachmentMetadata:(id)arg1 bulletin:(id)arg2 observer:(id)arg3 fileOption:(unsigned long long)arg4 attachNoData:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 observer:(id)arg3 feed:(unsigned long long)arg4 teamID:(id)arg5 universalSectionID:(id)arg6 shouldUseExpirationDate:(_Bool)arg7 replyToken:(id)arg8 gizmoLegacyPublisherBulletinID:(id)arg9 gizmoLegacyCategoryID:(id)arg10 gizmoSectionID:(id)arg11 gizmoSectionSubtype:(id)arg12 useUserInfoForContext:(_Bool)arg13 removeSubtitleForOlderWatches:(_Bool)arg14 attachOption:(unsigned long long)arg15 completion:(CDUnknownBlockType)arg16;
- (void).cxx_destruct;
@property(nonatomic) _Bool containsUpdateIcon; // @synthesize containsUpdateIcon=_containsUpdateIcon;
@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool suppressDelayForForwardedBulletins; // @synthesize suppressDelayForForwardedBulletins=_suppressDelayForForwardedBulletins;
@property(nonatomic) _Bool preemptsPresentedAlert; // @synthesize preemptsPresentedAlert=_preemptsPresentedAlert;
@property(nonatomic) double soundAudioVolume; // @synthesize soundAudioVolume=_soundAudioVolume;
@property(nonatomic) _Bool hasCriticalIcon; // @synthesize hasCriticalIcon=_hasCriticalIcon;
@property(nonatomic) _Bool soundShouldIgnoreRingerSwitch; // @synthesize soundShouldIgnoreRingerSwitch=_soundShouldIgnoreRingerSwitch;
@property(nonatomic) _Bool soundShouldRepeat; // @synthesize soundShouldRepeat=_soundShouldRepeat;
@property(nonatomic) double soundMaximumDuration; // @synthesize soundMaximumDuration=_soundMaximumDuration;
@property(retain, nonatomic) NSString *replyToken; // @synthesize replyToken=_replyToken;
@property(nonatomic) double requiredExpirationDate; // @synthesize requiredExpirationDate=_requiredExpirationDate;
@property(retain, nonatomic) NSMutableArray *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(retain, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(retain, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(retain, nonatomic) NSData *alertSuppressionContextsNulls; // @synthesize alertSuppressionContextsNulls=_alertSuppressionContextsNulls;
@property(retain, nonatomic) NSData *contextNulls; // @synthesize contextNulls=_contextNulls;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool ignoresQuietMode; // @synthesize ignoresQuietMode=_ignoresQuietMode;
@property(retain, nonatomic) NSMutableArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(retain, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(retain, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(retain, nonatomic) NSMutableArray *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property(nonatomic) _Bool turnsOnDisplay; // @synthesize turnsOnDisplay=_turnsOnDisplay;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool containsUpdatedAttachment; // @synthesize containsUpdatedAttachment=_containsUpdatedAttachment;
@property(nonatomic) unsigned int attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSString *soundToneIdentifier; // @synthesize soundToneIdentifier=_soundToneIdentifier;
@property(retain, nonatomic) NSString *soundAccountIdentifier; // @synthesize soundAccountIdentifier=_soundAccountIdentifier;
@property(nonatomic) int soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property(retain, nonatomic) NSData *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property(retain, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(nonatomic) _Bool includesSound; // @synthesize includesSound=_includesSound;
@property(nonatomic) double publicationDate; // @synthesize publicationDate=_publicationDate;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *sockPuppetAppBundleID; // @synthesize sockPuppetAppBundleID=_sockPuppetAppBundleID;
@property(nonatomic) int sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(retain, nonatomic) BLTPBAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) BLTPBAction *snoozeAction; // @synthesize snoozeAction=_snoozeAction;
@property(nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSMutableArray *supplementaryActions; // @synthesize supplementaryActions=_supplementaryActions;
@property(retain, nonatomic) NSData *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasContainsUpdateIcon;
@property(readonly, nonatomic) _Bool hasIcon;
@property(nonatomic) _Bool hasSuppressDelayForForwardedBulletins;
@property(nonatomic) _Bool hasPreemptsPresentedAlert;
@property(nonatomic) _Bool hasSoundAudioVolume;
@property(nonatomic) _Bool hasHasCriticalIcon;
@property(nonatomic) _Bool hasSoundShouldIgnoreRingerSwitch;
@property(nonatomic) _Bool hasSoundShouldRepeat;
@property(nonatomic) _Bool hasSoundMaximumDuration;
@property(readonly, nonatomic) _Bool hasReplyToken;
@property(nonatomic) _Bool hasRequiredExpirationDate;
- (id)additionalAttachmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalAttachmentsCount;
- (void)addAdditionalAttachments:(id)arg1;
- (void)clearAdditionalAttachments;
@property(readonly, nonatomic) _Bool hasAttachmentID;
@property(readonly, nonatomic) _Bool hasThreadID;
@property(readonly, nonatomic) _Bool hasAlertSuppressionContextsNulls;
@property(readonly, nonatomic) _Bool hasContextNulls;
@property(readonly, nonatomic) _Bool hasCategoryID;
@property(nonatomic) _Bool hasIgnoresQuietMode;
- (id)peopleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleIDsCount;
- (void)addPeopleIDs:(id)arg1;
- (void)clearPeopleIDs;
@property(readonly, nonatomic) _Bool hasAttachmentURL;
@property(readonly, nonatomic) _Bool hasDismissalID;
- (id)subsectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionIDsCount;
- (void)addSubsectionIDs:(id)arg1;
- (void)clearSubsectionIDs;
@property(nonatomic) _Bool hasTurnsOnDisplay;
@property(nonatomic) _Bool hasLoading;
@property(nonatomic) _Bool hasContainsUpdatedAttachment;
@property(nonatomic) _Bool hasAttachmentType;
@property(readonly, nonatomic) _Bool hasSoundToneIdentifier;
@property(readonly, nonatomic) _Bool hasSoundAccountIdentifier;
@property(nonatomic) _Bool hasSoundAlertType;
@property(readonly, nonatomic) _Bool hasAlertSuppressionContexts;
@property(readonly, nonatomic) _Bool hasUniversalSectionID;
@property(readonly, nonatomic) _Bool hasContext;
@property(readonly, nonatomic) _Bool hasTeamID;
@property(nonatomic) _Bool hasPublicationDate;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasSockPuppetAppBundleID;
@property(nonatomic) _Bool hasSectionSubtype;
@property(readonly, nonatomic) _Bool hasDismissAction;
@property(readonly, nonatomic) _Bool hasPublisherBulletinID;
@property(readonly, nonatomic) _Bool hasRecordID;
@property(readonly, nonatomic) _Bool hasSnoozeAction;
- (id)supplementaryActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supplementaryActionsCount;
- (void)addSupplementaryActions:(id)arg1;
- (void)clearSupplementaryActions;
@property(readonly, nonatomic) _Bool hasAttachment;
@property(nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasMessageTitle;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasSectionDisplayName;
@property(readonly, nonatomic) _Bool hasSectionID;
@property(readonly, nonatomic) _Bool hasBulletinID;
- (id)description;
- (id)attachmentURLURL;
- (id)attachmentKey:(id)arg1;
- (id)publisherMatchID;

@end

