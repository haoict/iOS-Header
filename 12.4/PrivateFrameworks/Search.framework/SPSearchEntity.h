//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPSearchEntity : NSObject <NSSecureCoding>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
@property(readonly) NSString *tokenText;
@property(readonly) NSString *queryString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) _Bool isPeopleSearch;

@end

