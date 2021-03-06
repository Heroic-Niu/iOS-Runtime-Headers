/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUCryptor, <SFUOutputStream>;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
    <SFUOutputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    unsigned int mCrc32;
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (unsigned int)crc32;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;
- (id)inputStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3;
- (id)closeLocalStream;
- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
