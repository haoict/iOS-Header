//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class PHPerson, UIButton;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController
{
    UIButton *_peopleTitleView;
    PHPerson *_person;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) UIButton *peopleTitleView; // @synthesize peopleTitleView=_peopleTitleView;
- (id)createAssetActionManager;
- (id)createTitleView;

@end

