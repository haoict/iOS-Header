//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EntryPointsCoordinator, ErrorAction, RichMapsActivity;

@protocol EntryPointsCoordinatorDelegate
- (_Bool)isCarPlayOnlyContext;
- (_Bool)isNavigationTurnByTurnOrStepping;
- (void)entryPointsCoordinator:(EntryPointsCoordinator *)arg1 didMergedRichMapsActivity:(RichMapsActivity *)arg2;
- (void)entryPointsCoordinator:(EntryPointsCoordinator *)arg1 performErrorAction:(ErrorAction *)arg2;
@end

