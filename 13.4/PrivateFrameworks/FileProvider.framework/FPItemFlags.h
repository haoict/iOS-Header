//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSFileProviderItemFlags-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSString;

@interface FPItemFlags : NSObject <NSCopying, NSSecureCoding, NSFileProviderItemFlags>
{
    _Bool _userExecutable;
    _Bool _userReadable;
    _Bool _userWritable;
    _Bool _hidden;
    _Bool _pathExtensionHidden;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isPathExtensionHidden) _Bool pathExtensionHidden; // @synthesize pathExtensionHidden=_pathExtensionHidden;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isUserWritable) _Bool userWritable; // @synthesize userWritable=_userWritable;
@property(nonatomic, getter=isUserReadable) _Bool userReadable; // @synthesize userReadable=_userReadable;
@property(nonatomic, getter=isUserExecutable) _Bool userExecutable; // @synthesize userExecutable=_userExecutable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToItemFlags:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

