/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSData;

@interface GKMatchPacket : NSObject  {
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    BOOL _valid;
    NSData *_data;
}

@property unsigned char version;
@property unsigned char packetType;
@property unsigned int sequenceNumber;
@property unsigned int totalLength;
@property unsigned short checksum;
@property BOOL valid;
@property(retain) NSData * data;


- (void)setChecksum:(unsigned short)arg1;
- (unsigned short)checksum;
- (unsigned char)packetType;
- (unsigned int)totalLength;
- (void)setTotalLength:(unsigned int)arg1;
- (void)setPacketType:(unsigned char)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;
- (void)setValid:(BOOL)arg1;
- (id)data;
- (void)dealloc;
- (id)init;
- (void)setVersion:(unsigned char)arg1;
- (id)message;
- (unsigned char)version;
- (BOOL)valid;
- (void)setData:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end
