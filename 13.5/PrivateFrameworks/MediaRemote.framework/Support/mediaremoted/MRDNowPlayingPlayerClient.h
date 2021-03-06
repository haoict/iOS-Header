//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDNowPlayingPlayerClientPlaybackState, MRPlaybackQueueSubscriptionController, NSArray, NSData, NSDate, NSMutableDictionary, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingPlayerProtobuf, _MRPlaybackQueueProtobuf, _MRSetStateMessageProtobuf;
@protocol MRDNowPlayingPlayerClientDelegate, OS_dispatch_queue, OS_os_transaction;

@interface MRDNowPlayingPlayerClient : NSObject
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSArray *_supportedRemoteControlCommands;
    NSData *_supportedRemoteControlCommandsData;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    unsigned long long _playbackQueueCapabilities;
    MRDNowPlayingPlayerClientPlaybackState *_playerPlaybackState;
    MRDNowPlayingPlayerClientPlaybackState *_inferredPlayerPlaybackState;
    NSMutableDictionary *_playbackStateHistory;
    NSMutableDictionary *_inFlightArtworkRequests;
    _Bool _scheduledSaveNowPlayingArtworkFileURL;
    NSObject<OS_os_transaction> *_hasNowPlayingDataTransaction;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _pushStateIsPlaying;
    _Bool _pushStateHasNowPlayingData;
    NSDate *_lastPlayingDate;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
    id <MRDNowPlayingPlayerClientDelegate> _delegate;
    MRDNowPlayingPlayerClientPlaybackState *_pushStatePlaybackState;
    _MRNowPlayingPlayerProtobuf *_pushStatePlayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pushStateHasNowPlayingData; // @synthesize pushStateHasNowPlayingData=_pushStateHasNowPlayingData;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *pushStatePlayer; // @synthesize pushStatePlayer=_pushStatePlayer;
@property(retain, nonatomic) MRDNowPlayingPlayerClientPlaybackState *pushStatePlaybackState; // @synthesize pushStatePlaybackState=_pushStatePlaybackState;
@property(nonatomic) _Bool pushStateIsPlaying; // @synthesize pushStateIsPlaying=_pushStateIsPlaying;
@property(nonatomic) __weak id <MRDNowPlayingPlayerClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) NSDate *lastPlayingDate; // @synthesize lastPlayingDate=_lastPlayingDate;
- (void)_registerCallbacksForPlayerPath:(id)arg1;
- (void)_onQueue_requestArtworkForContentItems:(id)arg1;
- (void)requestArtworkForContentItems:(id)arg1;
- (void)_onQueue_popState;
- (void)_onQueue_pushState;
- (void)_onQueue_playbackQueueContentItemsArtworkDidChange:(id)arg1;
- (void)_onQueue_playbackQueueContentItemsDidChange:(id)arg1;
- (void)_onQueue_playbackQueueCapabilitiesDidChange:(unsigned long long)arg1;
- (void)_onQueue_playbackQueueDidChange:(id)arg1;
- (void)_onQueue_supportedCommandsDidChange:(id)arg1;
- (void)_onQueue_playbackStateDidChanged:(id)arg1;
- (void)_onQueue_isPlayingDidChange:(_Bool)arg1;
- (void)_onQueue_saveNowPlayingItemArtworkURL;
- (void)saveNowPlayingArtworkFileURL;
- (id)_sortSnapshots:(id)arg1;
@property(readonly, nonatomic) NSArray *snapshots;
- (id)snapshotForIsPlaying:(_Bool)arg1;
- (id)snapshotsForIsPlaying:(_Bool)arg1;
- (id)snapshotForPlaybackState:(unsigned int)arg1;
- (void)artworkUpdatedForContentItems:(id)arg1;
- (void)_onQueue_updatePlaybackQueueWithItem:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)_onQueue_updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)updatePlaybackQueue:(id)arg1;
- (void)updatePlayer:(id)arg1;
- (void)updateClient:(id)arg1;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
- (id)_onQueue_lastPlayingDate;
@property(readonly, nonatomic) double timeSincePlaying;
@property(readonly, nonatomic) _MRSetStateMessageProtobuf *nowPlayingState;
@property(readonly, nonatomic) _Bool hasNowPlayingData;
- (_Bool)_onQueue_isPlaying;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) unsigned long long playbackQueueCapabilities;
- (id)_onQueue_playbackState;
@property(readonly, nonatomic) unsigned int playbackState;
- (void)updatePlaybackState:(unsigned int)arg1 date:(id)arg2;
@property(nonatomic) unsigned int inferredPlaybackState;
@property(readonly, nonatomic) _MRContentItemProtobuf *nowPlayingContentItem;
@property(copy, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property(copy, nonatomic) NSData *supportedRemoteControlCommandsData;
- (id)_onQueue_supportedRemoteControlCommands;
@property(readonly, nonatomic) NSArray *supportedRemoteControlCommands;
@property(readonly, nonatomic) _MRNowPlayingPlayerProtobuf *player;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;

@end

