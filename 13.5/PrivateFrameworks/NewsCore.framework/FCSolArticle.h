//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _accessible;
    NSString *_identifier;
    NSString *_publisherID;
    double _score;
    NSSet *_whitelistedTopicIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *whitelistedTopicIDs; // @synthesize whitelistedTopicIDs=_whitelistedTopicIDs;
@property(nonatomic) _Bool accessible; // @synthesize accessible=_accessible;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(_Bool)arg4;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(_Bool)arg4 whitelistedTopicIDs:(id)arg5;

@end

