//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CNFetchResult : NSObject
{
    id _value;
    NSData *_currentHistoryToken;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *currentHistoryToken; // @synthesize currentHistoryToken=_currentHistoryToken;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)description;
- (id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2;

@end

