//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class SUPreviewOverlayViewController;

@protocol SUPreviewOverlayContainer <NSObject>

@optional
- (_Bool)showPreviewOverlay:(SUPreviewOverlayViewController *)arg1 animated:(_Bool)arg2 completionBlock:(void (^)(void))arg3;
- (void)hidePreviewOverlay:(SUPreviewOverlayViewController *)arg1 animated:(_Bool)arg2 completionBlock:(void (^)(void))arg3;
- (_Bool)isShowingPreviewOverlay;
@end

