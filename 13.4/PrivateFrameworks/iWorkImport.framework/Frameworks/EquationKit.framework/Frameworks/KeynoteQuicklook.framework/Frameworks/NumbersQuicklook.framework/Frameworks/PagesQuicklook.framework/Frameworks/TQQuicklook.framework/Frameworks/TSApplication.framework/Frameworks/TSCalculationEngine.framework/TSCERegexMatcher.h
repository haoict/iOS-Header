//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

@interface TSCERegexMatcher : NSObject
{
    NSRegularExpression *_regex;
}

+ (id)regexMatcherWithStringMatch:(id)arg1;
- (void).cxx_destruct;
- (_Bool)matches:(id)arg1;
- (id)initWithStringToMatch:(id)arg1;

@end

