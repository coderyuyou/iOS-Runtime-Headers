/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying> {
    NSData *_report;
    NSString *_virtualDeviceID;
}

@property (nonatomic, readonly) BOOL hasReport;
@property (nonatomic, readonly) BOOL hasVirtualDeviceID;
@property (nonatomic, retain) NSData *report;
@property (nonatomic, retain) NSString *virtualDeviceID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasReport;
- (BOOL)hasVirtualDeviceID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (void)setVirtualDeviceID:(id)arg1;
- (id)virtualDeviceID;
- (void)writeTo:(id)arg1;

@end