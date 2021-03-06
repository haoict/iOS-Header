//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSDate, NSUUID, TUConversation;

@interface IMTUConversationChatItem : IMTranscriptChatItem
{
    IMHandle *_conversationInitiator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IMHandle *conversationInitiator; // @synthesize conversationInitiator=_conversationInitiator;
- (_Bool)canDelete;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) __weak TUConversation *tuConversation;
@property(readonly, nonatomic) NSUUID *tuConversationUUID;
- (id)activeCall;
- (id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

