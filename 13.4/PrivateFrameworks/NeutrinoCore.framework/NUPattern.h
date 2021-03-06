//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface NUPattern : NSObject
{
    _Bool _isFixedOrder;
}

+ (_Bool)scanString:(id)arg1 intoPattern:(out id *)arg2 error:(out id *)arg3;
+ (id)patternWithString:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) _Bool isFixedOrder; // @synthesize isFixedOrder=_isFixedOrder;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)match:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *stringRepresentation;
- (id)optimizedPattern;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) NSArray *shortestMatch;
- (_Bool)isDetermisitic;
@property(readonly, nonatomic) NSSet *tokens;

@end

