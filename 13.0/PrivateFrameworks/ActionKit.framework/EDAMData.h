//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSData, NSNumber;

@interface EDAMData : FATObject
{
    NSData *_bodyHash;
    NSNumber *_size;
    NSData *_body;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *bodyHash; // @synthesize bodyHash=_bodyHash;
- (void).cxx_destruct;

@end

