//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface EDAMBusinessQueryResult : FATObject
{
    NSNumber *_totalNotebooks;
    NSDictionary *_totalNotesByNotebook;
    NSArray *_experts;
    NSArray *_matchingNotebooks;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *matchingNotebooks; // @synthesize matchingNotebooks=_matchingNotebooks;
@property(retain, nonatomic) NSArray *experts; // @synthesize experts=_experts;
@property(retain, nonatomic) NSDictionary *totalNotesByNotebook; // @synthesize totalNotesByNotebook=_totalNotesByNotebook;
@property(retain, nonatomic) NSNumber *totalNotebooks; // @synthesize totalNotebooks=_totalNotebooks;

@end

