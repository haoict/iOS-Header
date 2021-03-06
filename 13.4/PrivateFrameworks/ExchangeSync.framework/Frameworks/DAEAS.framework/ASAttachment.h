//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/DAMailMessageAttachment-Protocol.h>
#import <DAEAS/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSSecureCoding>
{
    NSString *_name;
    NSNumber *_size;
    NSNumber *_method;
    NSString *_displayName;
    NSString *_contentId;
    NSString *_contentLocation;
    NSNumber *_isInline;
    NSNumber *_hasBase64Transfer;
    NSString *_clientId;
    NSURL *_localPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *localPath; // @synthesize localPath=_localPath;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSNumber *hasBase64Transfer; // @synthesize hasBase64Transfer=_hasBase64Transfer;
@property(copy, nonatomic) NSNumber *isInline; // @synthesize isInline=_isInline;
@property(copy, nonatomic) NSString *contentLocation; // @synthesize contentLocation=_contentLocation;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSNumber *method; // @synthesize method=_method;
@property(copy, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;
- (_Bool)isMostDefinitelyBase64ed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setPercentEscapedName:(id)arg1;

@end

