//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent
{
    double _blockingSecureKeyLoadDuration;
    NSNumber *_perceivedTotalStartupTime;
    double _tracklistLoadDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double tracklistLoadDuration; // @synthesize tracklistLoadDuration=_tracklistLoadDuration;
@property(copy, nonatomic) NSNumber *perceivedTotalStartupTime; // @synthesize perceivedTotalStartupTime=_perceivedTotalStartupTime;
@property(nonatomic) double blockingSecureKeyLoadDuration; // @synthesize blockingSecureKeyLoadDuration=_blockingSecureKeyLoadDuration;
- (id)eventPayload;
- (long long)eventCode;
- (id)eventName;

@end

