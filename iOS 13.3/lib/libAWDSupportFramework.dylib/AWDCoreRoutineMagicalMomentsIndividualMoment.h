/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
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
@property (nonatomic) bool hasExpertType;
@property (nonatomic) bool hasModelType;
@property (nonatomic, readonly) bool hasSuggestionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int modelType;
@property (nonatomic, retain) NSString *suggestionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)expertType;
- (bool)hasExpertType;
- (bool)hasModelType;
- (bool)hasSuggestionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)modelType;
- (bool)readFrom:(id)arg1;
- (void)setExpertType:(int)arg1;
- (void)setHasExpertType:(bool)arg1;
- (void)setHasModelType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setModelType:(int)arg1;
- (void)setSuggestionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestionId;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
