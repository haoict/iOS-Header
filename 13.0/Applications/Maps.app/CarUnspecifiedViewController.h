//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CarUnspecifiedViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
- (void)_tappedWidget:(id)arg1;
- (void)_addDebugView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

