//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DownloadHandlerManager, NSArray;

@protocol DownloadHandlerObserver <NSObject>

@optional
- (void)downloadHandlerManager:(DownloadHandlerManager *)arg1 sessionsDidChange:(NSArray *)arg2;
- (void)downloadHandlerManagerHandlersDidChange:(DownloadHandlerManager *)arg1;
@end

