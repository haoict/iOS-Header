//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSPurchaseReceipt;
@protocol SKPaymentQueueClient;

@interface ReceiptRefreshOperation : ISOperation
{
    id <SKPaymentQueueClient> _client;
    SSPurchaseReceipt *_existingReceipt;
    unsigned long long _flags;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
- (id)_postBodyData;
- (_Bool)_isSandboxed;
- (void)run;
@property(copy) CDUnknownBlockType resultBlock;
- (id)initWithClient:(id)arg1 receiptFlags:(unsigned long long)arg2;

@end

