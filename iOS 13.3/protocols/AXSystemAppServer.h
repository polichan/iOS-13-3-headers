/* Generated by RuntimeBrowser.
 */

@protocol AXSystemAppServer <NSObject>

@required

+ (<AXSystemAppServer> *)server;

- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)dismissSiri;
- (bool)isAppSwitcherVisible;
- (bool)isControlCenterVisible;
- (bool)isDockVisible;
- (bool)isMediaPlaying;
- (bool)isNonExclusiveSystemUIFocusable;
- (bool)isNotificationCenterVisible;
- (bool)isNotificationVisible;
- (bool)isNowPlayingUIVisible;
- (bool)isReceivingAirPlay;
- (bool)isScreenSaverVisible;
- (bool)isSiriTalkingOrListening;
- (bool)isSiriVisible;
- (bool)isSoftwareUpdateUIVisible;
- (bool)isSystemSleeping;
- (int)pid;
- (void)pid:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)rebootDevice;
- (void)wakeUpDeviceIfNecessary;

@optional

- (bool)isPasscodeLockVisible;
- (bool)isScreenshotWindowVisible;

@end
