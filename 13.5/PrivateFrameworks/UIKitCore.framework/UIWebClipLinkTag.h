//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject
{
    _Bool _mediaMatchesPortraitOrientation;
    _Bool _mediaMatchesLandscapeOrientation;
    NSString *_href;
    NSString *_rel;
    NSString *_sizes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool mediaMatchesLandscapeOrientation; // @synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation;
@property(nonatomic) _Bool mediaMatchesPortraitOrientation; // @synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation;
@property(copy, nonatomic) NSString *sizes; // @synthesize sizes=_sizes;
@property(copy, nonatomic) NSString *rel; // @synthesize rel=_rel;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, nonatomic) NSURL *hrefURL;

@end

