//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class NSString;

@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_taskIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)taskIsScheduledWithIdentifier:(id)arg1;
+ (_Bool)cancelAllTasks;
+ (_Bool)cancelTaskWithIdentifier:(id)arg1;
+ (_Bool)scheduleTask:(id)arg1;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct NSString *)activityForScheduling;
- (id)init;

@end

