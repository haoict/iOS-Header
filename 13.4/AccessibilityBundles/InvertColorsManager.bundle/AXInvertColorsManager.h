//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXInvertColorsManager : NSObject
{
}

+ (_Bool)toggleDarkModeWindowInvert:(id)arg1;
+ (void)updateClassicInvertColors:(id)arg1;
+ (void)_traverseAppForInvertColors;
+ (_Bool)objectIsOnCarScreen:(id)arg1;
+ (void)traverseAppForInvertColors:(CDUnknownBlockType)arg1;
+ (void)_initializeMonitoring;
+ (void)initialize;
- (void)_installCategories;
- (void)_installWebKitCategories;
- (void)_installSpringBoardCategories;
- (void)_installUIKitCategories;
- (_Bool)_shouldInstallCategories;
- (id)_invertColorHelperClasses;
- (id)init;

@end

