//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCUIApplicationManaging-Protocol.h>

@protocol XCUIXcodeApplicationManaging <XCUIApplicationManaging>
- (void)terminateProcessWithToken:(id)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestLaunchProgressForProcessWithToken:(id)arg1 completion:(void (^)(_Bool, float, NSError *))arg2;
@end

