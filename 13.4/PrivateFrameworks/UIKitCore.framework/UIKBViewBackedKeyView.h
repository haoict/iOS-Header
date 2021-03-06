//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBKeyView.h>

@class UIKBBackdropView, UIView;
@protocol UIKBKeyViewContentView;

__attribute__((visibility("hidden")))
@interface UIKBViewBackedKeyView : UIKBKeyView
{
    UIView<UIKBKeyViewContentView> *_contentView;
    UIKBBackdropView *_backdropView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIKBBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)setDrawFrame:(struct CGRect)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)renderFlagsForTraits:(id)arg1;

@end

