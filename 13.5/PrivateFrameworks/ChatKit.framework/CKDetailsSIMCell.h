//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UILabel;

@interface CKDetailsSIMCell : CKDetailsCell <CKDetailsCell>
{
    UILabel *_simTitleLabel;
}

+ (double)preferredHeight;
+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *simTitleLabel; // @synthesize simTitleLabel=_simTitleLabel;
- (void)initConstraints;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

