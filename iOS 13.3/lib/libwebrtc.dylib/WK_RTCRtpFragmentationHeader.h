/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface WK_RTCRtpFragmentationHeader : NSObject {
    NSArray * _fragmentationLength;
    NSArray * _fragmentationOffset;
    NSArray * _fragmentationPlType;
    NSArray * _fragmentationTimeDiff;
}

@property (nonatomic, retain) NSArray *fragmentationLength;
@property (nonatomic, retain) NSArray *fragmentationOffset;
@property (nonatomic, retain) NSArray *fragmentationPlType;
@property (nonatomic, retain) NSArray *fragmentationTimeDiff;

- (void).cxx_destruct;
- (id)fragmentationLength;
- (id)fragmentationOffset;
- (id)fragmentationPlType;
- (id)fragmentationTimeDiff;
- (void)setFragmentationLength:(id)arg1;
- (void)setFragmentationOffset:(id)arg1;
- (void)setFragmentationPlType:(id)arg1;
- (void)setFragmentationTimeDiff:(id)arg1;

// WK_RTCRtpFragmentationHeader (Private)

- (struct unique_ptr<webrtc::RTPFragmentationHeader, std::__1::default_delete<webrtc::RTPFragmentationHeader> > { struct __compressed_pair<webrtc::RTPFragmentationHeader *, std::__1::default_delete<webrtc::RTPFragmentationHeader> > { struct RTPFragmentationHeader {} *x_1_1_1; } x1; })createNativeFragmentationHeader;
- (id)initWithNativeFragmentationHeader:(const struct RTPFragmentationHeader { unsigned short x1; unsigned long long *x2; unsigned long long *x3; unsigned short *x4; char *x5; }*)arg1;

@end
