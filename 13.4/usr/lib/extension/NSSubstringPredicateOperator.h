//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSStringPredicateOperator.h>

@interface NSSubstringPredicateOperator : NSStringPredicateOperator
{
    unsigned long long _position;
}

+ (_Bool)supportsSecureCoding;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)symbol;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)position;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 position:(unsigned long long)arg4;
- (SEL)selector;

@end

