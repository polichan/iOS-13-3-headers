/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreMbufStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int mbuf16KBTotal : 1; 
        unsigned int mbuf256BTotal : 1; 
        unsigned int mbuf2KBTotal : 1; 
        unsigned int mbuf4KBTotal : 1; 
        unsigned int mbufDrainCount : 1; 
        unsigned int mbufMemReleased : 1; 
        unsigned int sockAtMBLimit : 1; 
        unsigned int sockMBcnt : 1; 
    }  _has;
    unsigned long long  _mbuf16KBTotal;
    unsigned long long  _mbuf256BTotal;
    unsigned long long  _mbuf2KBTotal;
    unsigned long long  _mbuf4KBTotal;
    unsigned long long  _mbufDrainCount;
    unsigned long long  _mbufMemReleased;
    unsigned long long  _sockAtMBLimit;
    unsigned long long  _sockMBcnt;
}

@property (nonatomic) bool hasMbuf16KBTotal;
@property (nonatomic) bool hasMbuf256BTotal;
@property (nonatomic) bool hasMbuf2KBTotal;
@property (nonatomic) bool hasMbuf4KBTotal;
@property (nonatomic) bool hasMbufDrainCount;
@property (nonatomic) bool hasMbufMemReleased;
@property (nonatomic) bool hasSockAtMBLimit;
@property (nonatomic) bool hasSockMBcnt;
@property (nonatomic) unsigned long long mbuf16KBTotal;
@property (nonatomic) unsigned long long mbuf256BTotal;
@property (nonatomic) unsigned long long mbuf2KBTotal;
@property (nonatomic) unsigned long long mbuf4KBTotal;
@property (nonatomic) unsigned long long mbufDrainCount;
@property (nonatomic) unsigned long long mbufMemReleased;
@property (nonatomic) unsigned long long sockAtMBLimit;
@property (nonatomic) unsigned long long sockMBcnt;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMbuf16KBTotal;
- (bool)hasMbuf256BTotal;
- (bool)hasMbuf2KBTotal;
- (bool)hasMbuf4KBTotal;
- (bool)hasMbufDrainCount;
- (bool)hasMbufMemReleased;
- (bool)hasSockAtMBLimit;
- (bool)hasSockMBcnt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mbuf16KBTotal;
- (unsigned long long)mbuf256BTotal;
- (unsigned long long)mbuf2KBTotal;
- (unsigned long long)mbuf4KBTotal;
- (unsigned long long)mbufDrainCount;
- (unsigned long long)mbufMemReleased;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMbuf16KBTotal:(bool)arg1;
- (void)setHasMbuf256BTotal:(bool)arg1;
- (void)setHasMbuf2KBTotal:(bool)arg1;
- (void)setHasMbuf4KBTotal:(bool)arg1;
- (void)setHasMbufDrainCount:(bool)arg1;
- (void)setHasMbufMemReleased:(bool)arg1;
- (void)setHasSockAtMBLimit:(bool)arg1;
- (void)setHasSockMBcnt:(bool)arg1;
- (void)setMbuf16KBTotal:(unsigned long long)arg1;
- (void)setMbuf256BTotal:(unsigned long long)arg1;
- (void)setMbuf2KBTotal:(unsigned long long)arg1;
- (void)setMbuf4KBTotal:(unsigned long long)arg1;
- (void)setMbufDrainCount:(unsigned long long)arg1;
- (void)setMbufMemReleased:(unsigned long long)arg1;
- (void)setSockAtMBLimit:(unsigned long long)arg1;
- (void)setSockMBcnt:(unsigned long long)arg1;
- (unsigned long long)sockAtMBLimit;
- (unsigned long long)sockMBcnt;
- (void)writeTo:(id)arg1;

@end
