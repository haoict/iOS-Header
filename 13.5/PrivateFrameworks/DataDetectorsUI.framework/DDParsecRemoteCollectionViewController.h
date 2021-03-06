//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <DataDetectorsUI/DDParsecHostVCInterface-Protocol.h>

@protocol DDParsecHostVCInterface;

__attribute__((visibility("hidden")))
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface>
{
    _Bool _receivedInteractionDidFinish;
    id <DDParsecHostVCInterface> _hostSideDelegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property __weak id <DDParsecHostVCInterface> hostSideDelegate; // @synthesize hostSideDelegate=_hostSideDelegate;
- (_Bool)_canShowWhileLocked;
- (void)openTrailerPunchout:(id)arg1;
- (void)getStatusBarHidden:(CDUnknownBlockType)arg1;
- (void)openParsecURL:(id)arg1;
- (void)showingFTE:(_Bool)arg1;
- (void)showingErrorView:(_Bool)arg1;
- (void)interactionEndedWithPunchout:(_Bool)arg1;
- (void)interactionEnded;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)canBecomeFirstResponder;

@end

