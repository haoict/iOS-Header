//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPResponse.h>

@class MPModelResponse;

@interface MPModelShimResponse : MPResponse
{
    MPModelResponse *_modelResponse;
}

+ (id)builderProtocol;
@property(retain, nonatomic) MPModelResponse *modelResponse; // @synthesize modelResponse=_modelResponse;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

@end

