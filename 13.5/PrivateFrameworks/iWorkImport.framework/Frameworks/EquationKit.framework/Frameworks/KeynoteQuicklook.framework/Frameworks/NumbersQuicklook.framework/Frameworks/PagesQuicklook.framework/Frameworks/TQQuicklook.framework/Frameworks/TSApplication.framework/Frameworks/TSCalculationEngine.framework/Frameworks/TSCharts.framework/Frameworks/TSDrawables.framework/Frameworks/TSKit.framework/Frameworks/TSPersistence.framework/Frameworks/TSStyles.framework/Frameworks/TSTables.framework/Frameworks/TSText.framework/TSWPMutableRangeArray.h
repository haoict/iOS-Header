//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPRangeArray.h>

@interface TSWPMutableRangeArray : TSWPRangeArray
{
}

- (void)subtract:(id)arg1;
- (void)unionWith:(id)arg1;
- (struct _NSRange)replacedTextAtRange:(struct _NSRange)arg1 delta:(long long)arg2;
- (void)replaceRangeAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;
- (void)removeRange:(struct _NSRange)arg1;
- (void)addRange:(struct _NSRange)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)concatenateRange:(struct _NSRange)arg1;
- (void)removeRangesInRange:(struct _NSRange)arg1;
- (void)clear;

@end

