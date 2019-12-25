/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNWL2Report : PBCodable <NSCopying> {
    bool  _cellularKnownGood;
    int  _cellularLqm;
    int  _cellularPowerCostDownload;
    int  _cellularPowerCostUpload;
    int  _cellularRadioTechnology;
    struct { 
        unsigned int cellularLqm : 1; 
        unsigned int cellularPowerCostDownload : 1; 
        unsigned int cellularPowerCostUpload : 1; 
        unsigned int cellularRadioTechnology : 1; 
        unsigned int wifiLqm : 1; 
        unsigned int wifiRadioTechnology : 1; 
        unsigned int wifiRssi : 1; 
        unsigned int cellularKnownGood : 1; 
        unsigned int wifiKnownGood : 1; 
    }  _has;
    bool  _wifiKnownGood;
    int  _wifiLqm;
    int  _wifiRadioTechnology;
    int  _wifiRssi;
}

@property (nonatomic) bool cellularKnownGood;
@property (nonatomic) int cellularLqm;
@property (nonatomic) int cellularPowerCostDownload;
@property (nonatomic) int cellularPowerCostUpload;
@property (nonatomic) int cellularRadioTechnology;
@property (nonatomic) bool hasCellularKnownGood;
@property (nonatomic) bool hasCellularLqm;
@property (nonatomic) bool hasCellularPowerCostDownload;
@property (nonatomic) bool hasCellularPowerCostUpload;
@property (nonatomic) bool hasCellularRadioTechnology;
@property (nonatomic) bool hasWifiKnownGood;
@property (nonatomic) bool hasWifiLqm;
@property (nonatomic) bool hasWifiRadioTechnology;
@property (nonatomic) bool hasWifiRssi;
@property (nonatomic) bool wifiKnownGood;
@property (nonatomic) int wifiLqm;
@property (nonatomic) int wifiRadioTechnology;
@property (nonatomic) int wifiRssi;

- (int)StringAsCellularPowerCostDownload:(id)arg1;
- (int)StringAsCellularPowerCostUpload:(id)arg1;
- (int)StringAsCellularRadioTechnology:(id)arg1;
- (int)StringAsWifiRadioTechnology:(id)arg1;
- (bool)cellularKnownGood;
- (int)cellularLqm;
- (int)cellularPowerCostDownload;
- (id)cellularPowerCostDownloadAsString:(int)arg1;
- (int)cellularPowerCostUpload;
- (id)cellularPowerCostUploadAsString:(int)arg1;
- (int)cellularRadioTechnology;
- (id)cellularRadioTechnologyAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCellularKnownGood;
- (bool)hasCellularLqm;
- (bool)hasCellularPowerCostDownload;
- (bool)hasCellularPowerCostUpload;
- (bool)hasCellularRadioTechnology;
- (bool)hasWifiKnownGood;
- (bool)hasWifiLqm;
- (bool)hasWifiRadioTechnology;
- (bool)hasWifiRssi;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCellularKnownGood:(bool)arg1;
- (void)setCellularLqm:(int)arg1;
- (void)setCellularPowerCostDownload:(int)arg1;
- (void)setCellularPowerCostUpload:(int)arg1;
- (void)setCellularRadioTechnology:(int)arg1;
- (void)setHasCellularKnownGood:(bool)arg1;
- (void)setHasCellularLqm:(bool)arg1;
- (void)setHasCellularPowerCostDownload:(bool)arg1;
- (void)setHasCellularPowerCostUpload:(bool)arg1;
- (void)setHasCellularRadioTechnology:(bool)arg1;
- (void)setHasWifiKnownGood:(bool)arg1;
- (void)setHasWifiLqm:(bool)arg1;
- (void)setHasWifiRadioTechnology:(bool)arg1;
- (void)setHasWifiRssi:(bool)arg1;
- (void)setWifiKnownGood:(bool)arg1;
- (void)setWifiLqm:(int)arg1;
- (void)setWifiRadioTechnology:(int)arg1;
- (void)setWifiRssi:(int)arg1;
- (bool)wifiKnownGood;
- (int)wifiLqm;
- (int)wifiRadioTechnology;
- (id)wifiRadioTechnologyAsString:(int)arg1;
- (int)wifiRssi;
- (void)writeTo:(id)arg1;

@end
