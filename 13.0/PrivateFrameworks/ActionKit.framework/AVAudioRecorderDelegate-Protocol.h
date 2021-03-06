//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class AVAudioRecorder, NSError;

@protocol AVAudioRecorderDelegate <NSObject>

@optional
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withOptions:(unsigned long long)arg2;
- (void)audioRecorderBeginInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderDidFinishRecording:(AVAudioRecorder *)arg1 successfully:(_Bool)arg2;
@end

