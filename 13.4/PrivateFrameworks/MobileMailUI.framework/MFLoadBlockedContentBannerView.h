//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView
{
    long long _blockingReason;
    id <MFLoadBlockedContentBannerViewDelegate> _delegate;
    unsigned long long _blockedContentTypes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long blockedContentTypes; // @synthesize blockedContentTypes=_blockedContentTypes;
@property(nonatomic) __weak id <MFLoadBlockedContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_titleControlTapped:(id)arg1;
- (void)_updateBannerText;
- (id)initWithFrame:(struct CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3;

@end

