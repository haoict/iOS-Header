//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSSDebugScreenshotMangerView;

@interface SSSDittoRemoteView : UIView
{
    SSSDebugScreenshotMangerView *_debugScreenshotManagerView;
    _Bool _acceptsTouches;
}

@property(nonatomic) _Bool acceptsTouches; // @synthesize acceptsTouches=_acceptsTouches;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

