//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount
{
    NSURL *_endpointURL;
}

+ (id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3;
+ (unsigned long long)modelVersion;
+ (_Bool)allowsMultipleAccounts;
+ (id)localizedServiceName;
+ (id)serviceID;
@property(copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedName;
- (_Bool)isValid;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;

@end

