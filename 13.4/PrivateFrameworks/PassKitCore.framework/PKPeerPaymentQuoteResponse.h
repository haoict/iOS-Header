//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse
{
    PKPeerPaymentQuote *_quote;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPeerPaymentQuote *quote; // @synthesize quote=_quote;
- (id)initWithData:(id)arg1;

@end

