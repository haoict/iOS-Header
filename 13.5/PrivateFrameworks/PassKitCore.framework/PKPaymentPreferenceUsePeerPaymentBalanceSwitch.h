//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentPreference.h>

@class PKCurrencyAmount, PKPaymentPass;

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference
{
    _Bool _on;
    _Bool _enabled;
    PKPaymentPass *_peerPaymentPass;
    PKCurrencyAmount *_peerPaymentBalance;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(retain, nonatomic) PKPaymentPass *peerPaymentPass; // @synthesize peerPaymentPass=_peerPaymentPass;

@end

