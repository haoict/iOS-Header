//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;

__attribute__((visibility("hidden")))
@interface SLRemoteComposeViewController : _UIRemoteViewController
{
    id <SLRemoteComposeViewControllerDelegateProtocol> _delegate;
}

@property(nonatomic) __weak id <SLRemoteComposeViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

