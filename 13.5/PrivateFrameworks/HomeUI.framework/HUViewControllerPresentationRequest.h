//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject
{
    _Bool _animated;
    UIViewController *_viewController;
    unsigned long long _preferredPresentationType;
}

+ (id)requestWithViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned long long preferredPresentationType; // @synthesize preferredPresentationType=_preferredPresentationType;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithViewController:(id)arg1;

@end

