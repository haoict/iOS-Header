//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet, NSString;

@interface HFServiceIconItemProvider : HFItemProvider
{
    NSString *_serviceType;
    NSString *_serviceSubtype;
    HMHome *_home;
    NSSet *_iconItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *iconItems; // @synthesize iconItems=_iconItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3;
- (id)init;

@end

