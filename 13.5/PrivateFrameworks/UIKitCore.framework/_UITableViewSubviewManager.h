//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMapTable, UITableView, UITableViewCell;
@protocol _UITableViewSubviewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewSubviewManager : NSObject
{
    UITableViewCell *_reorderingCell;
    UITableView<_UITableViewSubviewManagerDelegate> *_tableView;
    NSCountedSet *_reusePreventedCells;
    NSMapTable *_cellsReadyForReuse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *cellsReadyForReuse; // @synthesize cellsReadyForReuse=_cellsReadyForReuse;
@property(retain, nonatomic) NSCountedSet *reusePreventedCells; // @synthesize reusePreventedCells=_reusePreventedCells;
@property(nonatomic) __weak UITableView<_UITableViewSubviewManagerDelegate> *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewCell *reorderingCell; // @synthesize reorderingCell=_reorderingCell;
- (void)resumeReuseOfCell:(id)arg1;
- (void)preventReuseOfCell:(id)arg1;
- (void)cellReadyForReuse:(id)arg1 withIndexPath:(id)arg2 didEndDisplaying:(_Bool)arg3;
- (_Bool)shouldDeferReuseOfCell:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

