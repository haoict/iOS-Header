//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesResponse : PKPeerPaymentWebServiceResponse
{
    PKPeerPaymentPreferences *_peerPaymentPreferences;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences; // @synthesize peerPaymentPreferences=_peerPaymentPreferences;
- (id)initWithData:(id)arg1;

@end

