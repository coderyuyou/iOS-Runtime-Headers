/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest> {
}

@property(readonly) BOOL isUserRequested;
@property(readonly) BOOL shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (BOOL)isUserRequested;
- (BOOL)shouldSend;

@end