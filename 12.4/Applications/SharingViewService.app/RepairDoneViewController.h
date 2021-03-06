//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSError, UIButton, UIImageView, UILabel;

@interface RepairDoneViewController : SVSBaseViewController
{
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_imageView;
    UIButton *_reportBugButton;
    UIButton *_doneButton;
    int _status;
    NSError *_error;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)handleReportBugButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleActionButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

