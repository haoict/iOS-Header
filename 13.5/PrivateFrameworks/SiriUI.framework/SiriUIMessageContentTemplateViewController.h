//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateViewController.h>

@class SiriUIMessageContentTemplateView;
@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateViewController : SiriUIBaseTemplateViewController
{
}

- (Class)templateViewClass;

// Remaining properties
@property(retain, nonatomic) id <SiriUIMessageContentTemplateModel> templateModel; // @dynamic templateModel;
@property(retain, nonatomic) SiriUIMessageContentTemplateView *view; // @dynamic view;

@end

