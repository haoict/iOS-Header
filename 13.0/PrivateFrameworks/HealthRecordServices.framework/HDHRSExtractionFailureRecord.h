//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding>
{
    long long _failureCode;
    NSString *_propertyName;
    NSString *_resourceKeyPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)extractionFailureRecordWithCode:(long long)arg1 propertyName:(id)arg2 resourceKeyPath:(id)arg3;
@property(readonly, copy, nonatomic) NSString *resourceKeyPath; // @synthesize resourceKeyPath=_resourceKeyPath;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) long long failureCode; // @synthesize failureCode=_failureCode;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *internalDisplaySafeDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

