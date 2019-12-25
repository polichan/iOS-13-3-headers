/* Generated by RuntimeBrowser.
 */

@protocol VCCallSessionDelegate

@required

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioIOFormat;
- (void)didChangeLocalVariablesForSession:(VCCallSession *)arg1;
- (void)didReceiveCaptions:(VCCaptionsTranscription *)arg1 remoteClient:(unsigned int)arg2;
- (void)remoteAudioDidPause:(bool)arg1 callID:(unsigned int)arg2;
- (void)remoteVideoDidPause:(bool)arg1 callID:(unsigned int)arg2;
- (void)session:(VCCallSession *)arg1 cancelRelayRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 changeVideoRulesToCaptureRule:(VCVideoRule *)arg2 encodeRule:(VCVideoRule *)arg3 featuresListString:(NSString *)arg4;
- (void)session:(VCCallSession *)arg1 cleanUpWithDelay:(long long)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 connectionDidChangeWithLocalInterfaceType:(NSString *)arg2 remoteInterfaceType:(NSString *)arg3 callID:(unsigned int)arg4;
- (void)session:(VCCallSession *)arg1 didChangeRemoteScreenAttributes:(VideoAttributes *)arg2;
- (void)session:(VCCallSession *)arg1 didChangeVideoRule:(VCVideoRule *)arg2;
- (void)session:(VCCallSession *)arg1 didPauseAudio:(bool)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didPauseVideo:(bool)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didReceiveARPLData:(NSData *)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 didReceiveData:(NSData *)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(VCCallSession *)arg1 didReceiveMomentsRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 didStart:(bool)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(NSString *)arg4 remoteInterfaceType:(NSString *)arg5 error:(NSError *)arg6;
- (bool)session:(VCCallSession *)arg1 didStopVideoIO:(bool)arg2 error:(id*)arg3;
- (void)session:(VCCallSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)session:(VCCallSession *)arg1 initiateRelayRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 isSendingAudio:(bool)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 localAudioEnabled:(bool)arg2 withCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)session:(VCCallSession *)arg1 localIPChange:(NSData *)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(VCCallSession *)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (bool)session:(VCCallSession *)arg1 receivedRemoteFrame:(struct __CVBuffer { }*)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 withScreenAttributes:(VideoAttributes *)arg4 videoAttributes:(VideoAttributes *)arg5 isFirstFrame:(bool)arg6 isVideoPaused:(bool)arg7;
- (void)session:(VCCallSession *)arg1 remoteAudioEnabled:(bool)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 remoteMediaStalled:(bool)arg2;
- (void)session:(VCCallSession *)arg1 sendRelayResponse:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 setMomentsCapabilities:(int)arg2 imageType:(int)arg3 videoCodec:(int)arg4;
- (void)session:(VCCallSession *)arg1 setRemoteBasebandCodecType:(unsigned int)arg2 sampleRate:(double)arg3;
- (void)session:(void *)arg1 startAudioWithFarEndVersionInfo:(void *)arg2 internalFormat:(void *)arg3 internalSamplesPerFrame:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: VCCallSession *, struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*, struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)session:(VCCallSession *)arg1 startVideoReceive:(id*)arg2;
- (bool)session:(VCCallSession *)arg1 startVideoSend:(id*)arg2 captureRuleWifi:(VCVideoRule *)arg3 captureRuleCell:(VCVideoRule *)arg4 interface:(int)arg5 isUnpausing:(bool)arg6;
- (void)session:(void *)arg1 stopAudioWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: VCCallSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)session:(VCCallSession *)arg1 stopVideoReceive:(id*)arg2 isPausing:(bool)arg3;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 networkHint:(bool)arg3;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)setBWEOptions:(bool)arg1 UseNewBWEMode:(bool)arg2 FakeLargeFrameMode:(bool)arg3 ProbingSenderLog:(bool)arg4;
- (bool)stopVideoSend:(bool)arg1 error:(id*)arg2;

@end
