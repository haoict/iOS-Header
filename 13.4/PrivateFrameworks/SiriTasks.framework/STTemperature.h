//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@interface STTemperature : STSiriModelObject
{
    double _value;
    long long _units;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)units;
- (double)value;
- (id)_initWithValue:(double)arg1 units:(long long)arg2;

@end

