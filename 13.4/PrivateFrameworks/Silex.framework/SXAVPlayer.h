//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import <Silex/AVPlayerItemDelegate-Protocol.h>

@class NSString, SVKeyValueObserver;

@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate>
{
    int _audioMode;
    int _playbackPosition;
    int _playbackStatus;
    CDUnknownBlockType _playbackStatusBlock;
    CDUnknownBlockType _playbackProgressBlock;
    CDUnknownBlockType _loadingProgressBlock;
    double _elapsedTime;
    double _duration;
    double _frameRate;
    id _timeObserver;
    SVKeyValueObserver *_timeControlStatusObserver;
    SVKeyValueObserver *_statusObserver;
    SVKeyValueObserver *_durationObserver;
    SVKeyValueObserver *_loadedTimeRangesObserver;
    CDStruct_1b6d18a9 _cumulativeTimePlayed;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVKeyValueObserver *loadedTimeRangesObserver; // @synthesize loadedTimeRangesObserver=_loadedTimeRangesObserver;
@property(retain, nonatomic) SVKeyValueObserver *durationObserver; // @synthesize durationObserver=_durationObserver;
@property(retain, nonatomic) SVKeyValueObserver *statusObserver; // @synthesize statusObserver=_statusObserver;
@property(retain, nonatomic) SVKeyValueObserver *timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;
@property(nonatomic) CDStruct_1b6d18a9 cumulativeTimePlayed; // @synthesize cumulativeTimePlayed=_cumulativeTimePlayed;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(copy, nonatomic) CDUnknownBlockType loadingProgressBlock; // @synthesize loadingProgressBlock=_loadingProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType playbackProgressBlock; // @synthesize playbackProgressBlock=_playbackProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType playbackStatusBlock; // @synthesize playbackStatusBlock=_playbackStatusBlock;
@property(nonatomic) int playbackStatus; // @synthesize playbackStatus=_playbackStatus;
@property(nonatomic) int playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(readonly, nonatomic) int audioMode; // @synthesize audioMode=_audioMode;
- (void)durationChanged;
- (void)loadedTimeRangesChanged;
- (void)timeControlStatusChanged;
- (void)statusChanged;
- (void)setElapsedTime:(double)arg1 duration:(double)arg2;
- (void)playedToEnd:(id)arg1;
- (void)addObservers;
- (void)stopTimeObserver;
- (void)updateTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (void)startTimeObserver;
- (void)loadFrameRate;
@property(readonly, nonatomic) double totalTimePlayed;
- (void)seekToStartWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1 audioMode:(int)arg2;
- (id)initWithURL:(id)arg1 audioMode:(int)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

