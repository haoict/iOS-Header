//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKTransitAppletHistoryRecord.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying>
{
    NSNumber *_transactionType;
    NSNumber *_sectorCombination;
    NSNumber *_amountType;
    NSString *_transactionID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSNumber *amountType; // @synthesize amountType=_amountType;
@property(copy, nonatomic) NSNumber *sectorCombination; // @synthesize sectorCombination=_sectorCombination;
@property(copy, nonatomic) NSNumber *transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

