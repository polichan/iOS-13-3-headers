/* Generated by RuntimeBrowser.
 */

@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>

@required

- (void)dumpPhotoAnalysisStatusWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)dumpStatusIncludingDaemon:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPhotosXPCEndpointWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSXPCListenerEndpoint *, NSError *, void*
- (void)incompleteRestoreProcessesWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)initializeSharedMemoryForDeferredLogs:(PLXPCObject *)arg1;
- (void)setPhotosXPCEndpoint:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
