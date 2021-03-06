//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPSubscriptionNotificationAlert, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotification : PBCodable <NSCopying>
{
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    NSString *_collapseIdKey;
    _Bool _shouldBadge;
    _Bool _shouldSendContentAvailable;
    _Bool _shouldSendMutableContent;
    struct {
        unsigned int shouldBadge:1;
        unsigned int shouldSendContentAvailable:1;
        unsigned int shouldSendMutableContent:1;
    } _has;
}

+ (Class)additionalFieldsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *collapseIdKey; // @synthesize collapseIdKey=_collapseIdKey;
@property(nonatomic) _Bool shouldSendMutableContent; // @synthesize shouldSendMutableContent=_shouldSendMutableContent;
@property(nonatomic) _Bool shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(retain, nonatomic) NSMutableArray *additionalFields; // @synthesize additionalFields=_additionalFields;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(retain, nonatomic) CKDPSubscriptionNotificationAlert *alert; // @synthesize alert=_alert;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCollapseIdKey;
@property(nonatomic) _Bool hasShouldSendMutableContent;
@property(nonatomic) _Bool hasShouldSendContentAvailable;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalFieldsCount;
- (void)addAdditionalFields:(id)arg1;
- (void)clearAdditionalFields;
@property(nonatomic) _Bool hasShouldBadge;
@property(readonly, nonatomic) _Bool hasAlert;

@end

