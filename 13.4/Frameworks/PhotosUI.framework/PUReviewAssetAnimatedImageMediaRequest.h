//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUReviewAssetCancelableMediaRequest-Protocol.h>

__attribute__((visibility("hidden")))
@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>
{
    long long __animatedRequestID;
}

@property(readonly, nonatomic) long long _animatedRequestID; // @synthesize _animatedRequestID=__animatedRequestID;
- (void)cancelRequest;
- (id)initWithAnimatedImageRequestID:(long long)arg1;

@end

