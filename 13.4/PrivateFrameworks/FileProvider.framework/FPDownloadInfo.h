//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPActionOperationInfo.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding>
{
    _Bool _recursively;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool recursively; // @synthesize recursively=_recursively;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

