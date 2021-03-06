//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CSPageViewController;
@protocol CSCoverSheetParticipating, SBFLegibilitySettingsProvider;

@protocol CSSpotlightPresenting <NSObject>
@property(nonatomic) __weak CSPageViewController *todayPageViewController;
- (id <SBFLegibilitySettingsProvider>)createSpotlightLegiblitySettingsProvider;
- (void)dismissSpotlightWithCompletion:(void (^)(void))arg1;
- (void)dismissSpotlight;
- (void)launchSpotlightForSourceViewController:(id <CSCoverSheetParticipating>)arg1 interactive:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)launchSpotlightForSourceViewController:(id <CSCoverSheetParticipating>)arg1 interactive:(_Bool)arg2;
@end

