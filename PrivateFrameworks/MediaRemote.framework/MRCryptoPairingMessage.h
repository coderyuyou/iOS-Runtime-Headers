/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *pairingData;
@property (getter=isRetrying, nonatomic, readonly) BOOL retrying;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) long status;
@property (getter=isUsingSystemPairing, nonatomic, readonly) BOOL usingSystemPairing;

- (unsigned int)encryptionType;
- (id)initWithPairingData:(id)arg1 status:(long)arg2;
- (id)initWithPairingData:(id)arg1 status:(long)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(unsigned int)arg5;
- (BOOL)isRetrying;
- (BOOL)isUsingSystemPairing;
- (id)pairingData;
- (unsigned int)state;
- (long)status;
- (unsigned int)type;

@end