//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

__attribute__((visibility("hidden")))
@interface OCDEncryptedReader : OCDReader
{
    OCCDecryptor *mDecryptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OCCDecryptor *decryptor; // @synthesize decryptor=mDecryptor;
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (void)useUnencryptedDocument;
- (id)defaultPassphrase;
- (void)restartReaderToUseDecryptedDocument;

@end

