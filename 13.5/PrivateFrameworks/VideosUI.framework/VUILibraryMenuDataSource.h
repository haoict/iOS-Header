//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryDataSource.h>

@class NSSet, VUIMenuDataSource;

__attribute__((visibility("hidden")))
@interface VUILibraryMenuDataSource : VUILibraryDataSource
{
    VUIMenuDataSource *_menuItems;
    NSSet *_validCategories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *validCategories; // @synthesize validCategories=_validCategories;
@property(retain, nonatomic) VUIMenuDataSource *menuItems; // @synthesize menuItems=_menuItems;
- (id)initWithValidCategories:(id)arg1;

@end

