/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardIconLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int iconPageInFolder : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalIconPagesInFolder : 1; 
        unsigned int iconIsFolder : 1; 
        unsigned int iconIsFromDock : 1; 
        unsigned int iconIsFromFolder : 1; 
    }  _has;
    bool  _iconIsFolder;
    bool  _iconIsFromDock;
    bool  _iconIsFromFolder;
    unsigned long long  _iconPageInFolder;
    unsigned long long  _timestamp;
    unsigned long long  _totalIconPagesInFolder;
}

@property (nonatomic) bool hasIconIsFolder;
@property (nonatomic) bool hasIconIsFromDock;
@property (nonatomic) bool hasIconIsFromFolder;
@property (nonatomic) bool hasIconPageInFolder;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalIconPagesInFolder;
@property (nonatomic) bool iconIsFolder;
@property (nonatomic) bool iconIsFromDock;
@property (nonatomic) bool iconIsFromFolder;
@property (nonatomic) unsigned long long iconPageInFolder;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalIconPagesInFolder;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIconIsFolder;
- (bool)hasIconIsFromDock;
- (bool)hasIconIsFromFolder;
- (bool)hasIconPageInFolder;
- (bool)hasTimestamp;
- (bool)hasTotalIconPagesInFolder;
- (unsigned long long)hash;
- (bool)iconIsFolder;
- (bool)iconIsFromDock;
- (bool)iconIsFromFolder;
- (unsigned long long)iconPageInFolder;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIconIsFolder:(bool)arg1;
- (void)setHasIconIsFromDock:(bool)arg1;
- (void)setHasIconIsFromFolder:(bool)arg1;
- (void)setHasIconPageInFolder:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalIconPagesInFolder:(bool)arg1;
- (void)setIconIsFolder:(bool)arg1;
- (void)setIconIsFromDock:(bool)arg1;
- (void)setIconIsFromFolder:(bool)arg1;
- (void)setIconPageInFolder:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalIconPagesInFolder:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)totalIconPagesInFolder;
- (void)writeTo:(id)arg1;

@end