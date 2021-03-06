//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent
{
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
    id _configChangedObserverToken;
}

+ (_Bool)isSupported;
- (void).cxx_destruct;
@property(retain, nonatomic) id configChangedObserverToken; // @synthesize configChangedObserverToken=_configChangedObserverToken;
- (void)_logAudioFileInfo:(id)arg1;
- (void)_stopActiveSound:(id)arg1;
- (_Bool)_startEngineIfNeeded:(id *)arg1;
- (void)_scheduleOneShotSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_scheduleActiveSound:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

