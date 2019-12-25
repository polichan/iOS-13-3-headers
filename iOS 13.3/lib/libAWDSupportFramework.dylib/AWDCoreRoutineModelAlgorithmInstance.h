/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying> {
    unsigned long long  _addressComponentMatches;
    double  _distanceFromTruth;
    unsigned int  _efficacy;
    struct { 
        unsigned int addressComponentMatches : 1; 
        unsigned int distanceFromTruth : 1; 
        unsigned int uncertainty : 1; 
        unsigned int efficacy : 1; 
        unsigned int previousType : 1; 
        unsigned int source : 1; 
        unsigned int truthSource : 1; 
        unsigned int truthType : 1; 
        unsigned int type : 1; 
        unsigned int isRotted : 1; 
    }  _has;
    bool  _isRotted;
    unsigned int  _previousType;
    unsigned int  _source;
    unsigned int  _truthSource;
    unsigned int  _truthType;
    unsigned int  _type;
    double  _uncertainty;
}

@property (nonatomic) unsigned long long addressComponentMatches;
@property (nonatomic) double distanceFromTruth;
@property (nonatomic) unsigned int efficacy;
@property (nonatomic) bool hasAddressComponentMatches;
@property (nonatomic) bool hasDistanceFromTruth;
@property (nonatomic) bool hasEfficacy;
@property (nonatomic) bool hasIsRotted;
@property (nonatomic) bool hasPreviousType;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasTruthSource;
@property (nonatomic) bool hasTruthType;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUncertainty;
@property (nonatomic) bool isRotted;
@property (nonatomic) unsigned int previousType;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int truthSource;
@property (nonatomic) unsigned int truthType;
@property (nonatomic) unsigned int type;
@property (nonatomic) double uncertainty;

- (unsigned long long)addressComponentMatches;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromTruth;
- (unsigned int)efficacy;
- (bool)hasAddressComponentMatches;
- (bool)hasDistanceFromTruth;
- (bool)hasEfficacy;
- (bool)hasIsRotted;
- (bool)hasPreviousType;
- (bool)hasSource;
- (bool)hasTruthSource;
- (bool)hasTruthType;
- (bool)hasType;
- (bool)hasUncertainty;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRotted;
- (void)mergeFrom:(id)arg1;
- (unsigned int)previousType;
- (bool)readFrom:(id)arg1;
- (void)setAddressComponentMatches:(unsigned long long)arg1;
- (void)setDistanceFromTruth:(double)arg1;
- (void)setEfficacy:(unsigned int)arg1;
- (void)setHasAddressComponentMatches:(bool)arg1;
- (void)setHasDistanceFromTruth:(bool)arg1;
- (void)setHasEfficacy:(bool)arg1;
- (void)setHasIsRotted:(bool)arg1;
- (void)setHasPreviousType:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTruthSource:(bool)arg1;
- (void)setHasTruthType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUncertainty:(bool)arg1;
- (void)setIsRotted:(bool)arg1;
- (void)setPreviousType:(unsigned int)arg1;
- (void)setSource:(unsigned int)arg1;
- (void)setTruthSource:(unsigned int)arg1;
- (void)setTruthType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUncertainty:(double)arg1;
- (unsigned int)source;
- (unsigned int)truthSource;
- (unsigned int)truthType;
- (unsigned int)type;
- (double)uncertainty;
- (void)writeTo:(id)arg1;

@end
