//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlayerCommandRequest;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation
{
    MPCPlayerCommandRequest *_request;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) MPCPlayerCommandRequest *request; // @synthesize request=_request;
- (void)execute;
- (id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2;

@end

