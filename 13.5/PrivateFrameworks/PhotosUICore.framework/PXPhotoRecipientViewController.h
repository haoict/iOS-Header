//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/CNContactPickerDelegate-Protocol.h>
#import <PhotosUICore/PXComposeRecipientViewDelegate-Protocol.h>
#import <PhotosUICore/PXSearchRecipientControllerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CNContactPickerViewController, NSArray, NSLayoutConstraint, NSString, PXComposeRecipientView, PXRecipientSearchDataSourceManager, PXSearchRecipientController, UIBarButtonItem;
@protocol PXPhotoRecipientViewControllerDelegate;

@interface PXPhotoRecipientViewController : UIViewController <PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate>
{
    NSLayoutConstraint *_recipientViewHeightConstraint;
    UIBarButtonItem *_addButton;
    id <PXPhotoRecipientViewControllerDelegate> _delegate;
    NSString *_fieldLabel;
    long long _maxRecipients;
    NSString *_initialLocalizedNameToQuery;
    CNContactPickerViewController *_contactPickerViewController;
    PXSearchRecipientController *_searchRecipientController;
    PXRecipientSearchDataSourceManager *_searchDataSourceManager;
    PXComposeRecipientView *_composeRecipientView;
    NSArray *_layoutConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) PXComposeRecipientView *composeRecipientView; // @synthesize composeRecipientView=_composeRecipientView;
@property(readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager; // @synthesize searchDataSourceManager=_searchDataSourceManager;
@property(retain, nonatomic) PXSearchRecipientController *searchRecipientController; // @synthesize searchRecipientController=_searchRecipientController;
@property(retain, nonatomic) CNContactPickerViewController *contactPickerViewController; // @synthesize contactPickerViewController=_contactPickerViewController;
@property(retain, nonatomic) NSString *initialLocalizedNameToQuery; // @synthesize initialLocalizedNameToQuery=_initialLocalizedNameToQuery;
@property(nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(copy, nonatomic) NSString *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property(nonatomic) __weak id <PXPhotoRecipientViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchRecipientController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)_updateAddButton;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_dismissContactPickerViewController;
- (void)_presentContactPickerViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithInitialLocalizedNameToQuery:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

