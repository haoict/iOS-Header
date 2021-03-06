//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>

@class MKMapItem, MKPlacePhotoGalleryAttributionView, NSArray, NSMutableArray, NSNumber, NSString, UIBarButtonItem, UIScrollView, UIView;
@protocol MKPlacePhotoGalleryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotoGalleryViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _shouldFinishAnimation;
    id <MKPlacePhotoGalleryViewControllerDelegate> _delegate;
    NSArray *_photos;
    MKMapItem *_mapItem;
    NSArray *_photoViews;
    UIView *_additionalView;
    UIScrollView *_scrollView;
    long long _panGestureStartingDirection;
    UIView *_gestureTrackedView;
    NSNumber *_originalIndex;
    MKPlacePhotoGalleryAttributionView *_attributionView;
    NSMutableArray *_indexesOfDownloadedImages;
    NSMutableArray *_downloadingImagesURLs;
    double _lastScrollViewOffsetBeforeScrolling;
    UIBarButtonItem *_openNavigationBarButton;
    struct CGPoint _imageViewCenterPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *openNavigationBarButton; // @synthesize openNavigationBarButton=_openNavigationBarButton;
@property(nonatomic) double lastScrollViewOffsetBeforeScrolling; // @synthesize lastScrollViewOffsetBeforeScrolling=_lastScrollViewOffsetBeforeScrolling;
@property(retain, nonatomic) NSMutableArray *downloadingImagesURLs; // @synthesize downloadingImagesURLs=_downloadingImagesURLs;
@property(retain, nonatomic) NSMutableArray *indexesOfDownloadedImages; // @synthesize indexesOfDownloadedImages=_indexesOfDownloadedImages;
@property(retain, nonatomic) MKPlacePhotoGalleryAttributionView *attributionView; // @synthesize attributionView=_attributionView;
@property(retain, nonatomic) NSNumber *originalIndex; // @synthesize originalIndex=_originalIndex;
@property(nonatomic) _Bool shouldFinishAnimation; // @synthesize shouldFinishAnimation=_shouldFinishAnimation;
@property(retain, nonatomic) UIView *gestureTrackedView; // @synthesize gestureTrackedView=_gestureTrackedView;
@property(nonatomic) long long panGestureStartingDirection; // @synthesize panGestureStartingDirection=_panGestureStartingDirection;
@property(nonatomic) struct CGPoint imageViewCenterPoint; // @synthesize imageViewCenterPoint=_imageViewCenterPoint;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *additionalView; // @synthesize additionalView=_additionalView;
@property(copy, nonatomic) NSArray *photoViews; // @synthesize photoViews=_photoViews;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(nonatomic) __weak id <MKPlacePhotoGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didTapOnAdditionalView;
- (void)didTapOnAttributionView;
- (void)dismiss;
- (void)didTapDone;
- (void)didTapOpen;
- (void)updateViewsWithPhotoAtIndex:(unsigned long long)arg1;
- (void)resetPhotosZoomLevel;
- (void)zoomToPoint:(id)arg1;
- (void)setUIStyleWithNavigationBarHidden:(_Bool)arg1;
- (void)toggleBackground:(id)arg1;
- (unsigned long long)viewsCount;
- (void)handlePanGesture:(id)arg1;
- (struct CGPoint)scrollViewContentOffset;
- (unsigned long long)indexOfView:(id)arg1;
- (unsigned long long)indexOfVisibleView;
- (id)photoViewForTransition;
- (void)cancelDownloadingImages;
- (void)downloadImageForVisibleViews;
- (void)viewDidLayoutSubviews;
- (id)attributionLogoUsingDarkAppearance:(_Bool)arg1;
- (void)setupAttributionView;
- (void)setupAdditionalView:(id)arg1 withStackView:(id)arg2;
- (void)setupPhotoViewsWithStackView:(id)arg1;
- (void)setupViewsWithAdditionalView:(id)arg1;
- (void)dealloc;
- (id)initWithPhotos:(id)arg1 additionalView:(id)arg2 scrollToIndex:(unsigned long long)arg3 mapItem:(id)arg4 delegate:(id)arg5;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

