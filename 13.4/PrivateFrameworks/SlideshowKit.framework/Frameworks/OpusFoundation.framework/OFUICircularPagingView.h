//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

#import <OpusFoundation/UIScrollViewDelegate-Protocol.h>

@class NSString, OFUICircularPagingViewController, UIScrollView, UIView;
@protocol OFUICircularPagingViewDelegate;

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate>
{
    double _gapBetweenPages;
    OFUICircularPagingViewController *_circularPagingViewController;
    id <OFUICircularPagingViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_previousPagingView;
    UIView *_currentPagingView;
    UIView *_nextPagingView;
    _Bool _rotationInProgress;
    _Bool _scrollViewIsMoving;
}

@property(nonatomic) id <OFUICircularPagingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) OFUICircularPagingViewController *circularPagingViewController; // @synthesize circularPagingViewController=_circularPagingViewController;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didRotate;
- (void)willAnimateRotation;
- (id)pagingViewAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateLayout;
- (struct CGRect)_frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForScrollView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

