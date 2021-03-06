//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKFillStyle, NSString, UIColor, UIImage;

@interface HKDisplayCategory : NSObject
{
    CDUnknownBlockType _keyColor;
    long long _categoryID;
    NSString *_categoryName;
    NSString *_displayName;
    NSString *_largeListIconName;
    NSString *_listIconName;
    NSString *_healthDataIconName;
    NSString *_shareIconName;
}

+ (id)topLevelCategoryIdentifiers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *shareIconName; // @synthesize shareIconName=_shareIconName;
@property(readonly, nonatomic) NSString *healthDataIconName; // @synthesize healthDataIconName=_healthDataIconName;
@property(readonly, nonatomic) NSString *listIconName; // @synthesize listIconName=_listIconName;
@property(readonly, nonatomic) NSString *largeListIconName; // @synthesize largeListIconName=_largeListIconName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isTopLevelCategory;
@property(readonly, nonatomic) _Bool isMeCategory;
@property(readonly, nonatomic) UIImage *shareIcon;
@property(readonly, nonatomic) UIImage *healthDataIcon;
@property(readonly, nonatomic) UIImage *listIcon;
@property(readonly, nonatomic) UIImage *largeListIcon;
@property(readonly, nonatomic) HKFillStyle *fillStyle;
@property(readonly, nonatomic) UIColor *color;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

