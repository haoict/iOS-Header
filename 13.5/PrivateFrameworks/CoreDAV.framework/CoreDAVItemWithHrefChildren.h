//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem
{
    NSMutableSet *_hrefs;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) NSMutableSet *hrefs; // @synthesize hrefs=_hrefs;
- (id)hrefsAsStrings;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsFullURLs;
- (void)addHref:(id)arg1;
- (id)description;

@end

