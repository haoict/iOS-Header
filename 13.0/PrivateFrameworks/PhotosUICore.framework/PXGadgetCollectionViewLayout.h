//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PXGadgetSpec;
@protocol PXGadgetCollectionViewLayoutDelegate;

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout>
{
    _Bool _pagingEnabled;
    _Bool _isPageFullColumnnWidth;
    PXGadgetSpec *_spec;
    id <PXGadgetCollectionViewLayoutDelegate> _delegate;
    long long _pageSizeClass;
    double _columnWidth;
    double _interSectionSpacing;
}

@property(nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) _Bool isPageFullColumnnWidth; // @synthesize isPageFullColumnnWidth=_isPageFullColumnnWidth;
@property(nonatomic) long long pageSizeClass; // @synthesize pageSizeClass=_pageSizeClass;
@property(nonatomic) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) __weak id <PXGadgetCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (unsigned long long)_sectionHeaderStyleForGadget:(id)arg1;
- (_Bool)_shouldShowSectionHeaderForGadget:(id)arg1;
- (_Bool)_hasButtonForGadget:(id)arg1;
- (unsigned long long)_buttonTypeForGadget:(id)arg1;
- (id)_titleForGadget:(id)arg1;
- (id)_gadgetForSection:(long long)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

