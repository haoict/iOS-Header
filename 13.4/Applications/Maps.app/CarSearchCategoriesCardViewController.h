//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"
#import "CarFocusOrderCollection-Protocol.h"
#import "CarUserInputCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CarTableView, NSArray, NSString;
@protocol CarSearchCategoriesCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CarSearchCategoriesCardViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CarUserInputCellDelegate, CarCardContent, CarFocusOrderCollection>
{
    id <CarSearchCategoriesCardViewControllerDelegate> _delegate;
    NSArray *_categories;
    CarTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CarTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <CarSearchCategoriesCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)userInputCell:(id)arg1 didSelectAction:(unsigned long long)arg2 usingInteractionModel:(unsigned long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCategories:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end

