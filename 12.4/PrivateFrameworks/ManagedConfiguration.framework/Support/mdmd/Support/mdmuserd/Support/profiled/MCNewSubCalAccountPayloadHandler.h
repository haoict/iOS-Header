//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCACAccountPayloadHandler.h"

@interface MCNewSubCalAccountPayloadHandler : MCACAccountPayloadHandler
{
}

- (void)remove;
- (void)unsetAside;
- (void)setAsideWithInstaller:(id)arg1;
- (_Bool)isInstalled;
- (id)accountTypeIdentifiers;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(_Bool)arg2;
- (id)_accountFromPayload;
- (id)unhashedAccountIdentifier;

@end

