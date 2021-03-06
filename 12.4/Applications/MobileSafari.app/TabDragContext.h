//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DragContext.h"

@class BrowserController, TabBar, TabBarItem, TabDocument, TabOverview, TabOverviewItem;

@interface TabDragContext : DragContext
{
    long long _sourceType;
    BrowserController *_sourceBrowserController;
    TabDocument *_sourceTabDocument;
    TabBar *_sourceTabBar;
    TabBarItem *_sourceTabBarItem;
    TabOverviewItem *_sourceTabOverviewItem;
    TabOverview *_sourceTabOverview;
    long long _initialTabBarDragType;
}

+ (id)tabBarDragContextWithSourceView:(id)arg1 startPoint:(struct CGPoint)arg2 tabDocument:(id)arg3 tabBarItem:(id)arg4 initialDragType:(long long)arg5;
+ (id)tabOverviewDragContextWithSourceView:(id)arg1 startPoint:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 zPosition:(double)arg4 tabDocument:(id)arg5 tabOverviewItem:(id)arg6;
@property(readonly, nonatomic) long long initialTabBarDragType; // @synthesize initialTabBarDragType=_initialTabBarDragType;
@property(readonly, nonatomic) TabOverview *sourceTabOverview; // @synthesize sourceTabOverview=_sourceTabOverview;
@property(readonly, nonatomic) TabOverviewItem *sourceTabOverviewItem; // @synthesize sourceTabOverviewItem=_sourceTabOverviewItem;
@property(readonly, nonatomic) TabBarItem *sourceTabBarItem; // @synthesize sourceTabBarItem=_sourceTabBarItem;
@property(readonly, nonatomic) TabBar *sourceTabBar; // @synthesize sourceTabBar=_sourceTabBar;
@property(readonly, nonatomic) TabDocument *sourceTabDocument; // @synthesize sourceTabDocument=_sourceTabDocument;
@property(readonly, nonatomic) BrowserController *sourceBrowserController; // @synthesize sourceBrowserController=_sourceBrowserController;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 startPoint:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 zPosition:(double)arg4 tabDocument:(id)arg5 tabBarItem:(id)arg6 tabOverviewItem:(id)arg7 initialTabBarDragType:(long long)arg8;
- (Class)dragInteractionDriverClass;

@end

