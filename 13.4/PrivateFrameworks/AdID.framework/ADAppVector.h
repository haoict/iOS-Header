//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADVector.h>

@interface ADAppVector : ADVector
{
    unsigned int _adamID;
}

@property(readonly, nonatomic) unsigned int adamID; // @synthesize adamID=_adamID;
- (id)description;
- (id)data;
- (id)initWithString:(id)arg1 version:(id)arg2;
- (id)initWithVersion:(id)arg1 header:(struct ADAppVectorHeader *)arg2 floats:(float *)arg3;

@end

