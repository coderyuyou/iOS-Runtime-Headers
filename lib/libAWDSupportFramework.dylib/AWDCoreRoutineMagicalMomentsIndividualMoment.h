/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicalMomentsIndividualMoment : PBCodable <NSCopying> {
    int  _expertType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int expertType : 1; 
        unsigned int modelType : 1; 
    }  _has;
    int  _modelType;
    NSString * _suggestionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) int expertType;
@property (nonatomic) BOOL hasExpertType;
@property (nonatomic) BOOL hasModelType;
@property (nonatomic, readonly) BOOL hasSuggestionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int modelType;
@property (nonatomic, retain) NSString *suggestionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)expertType;
- (BOOL)hasExpertType;
- (BOOL)hasModelType;
- (BOOL)hasSuggestionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)modelType;
- (BOOL)readFrom:(id)arg1;
- (void)setExpertType:(int)arg1;
- (void)setHasExpertType:(BOOL)arg1;
- (void)setHasModelType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setModelType:(int)arg1;
- (void)setSuggestionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestionId;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
