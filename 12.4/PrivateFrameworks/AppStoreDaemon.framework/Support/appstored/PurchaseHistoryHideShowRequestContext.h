//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSArray;

@interface PurchaseHistoryHideShowRequestContext : NSObject
{
    NSArray *_items;
    ACAccount *_account;
    AMSProcessInfo *_clientInfo;
}

+ (id)newContextWithItems:(id)arg1 account:(id)arg2 client:(id)arg3;
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) ACAccount *account; // @synthesize account=_account;
@property(readonly) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)_initWithItems:(id)arg1 account:(id)arg2 client:(id)arg3;

@end

