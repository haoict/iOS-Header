//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRXCardContentView.h"

#import "_UIScrollViewLayoutObserver-Protocol.h"

@class PRXScrollShadowView, UIScrollView;

@interface PRXScrollableContentView : PRXCardContentView <_UIScrollViewLayoutObserver>
{
    PRXScrollShadowView *_topShadow;
    PRXScrollShadowView *_bottomShadow;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)_updateShadows;
- (_Bool)_shouldAnimateShadows;
- (id)initWithCardStyle:(long long)arg1;

@end

