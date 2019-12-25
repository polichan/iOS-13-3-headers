/* Generated by RuntimeBrowser.
 */

@protocol MSPReplicaRecordFromCloud <MSPReplicaRecord>

@required

+ (<MSPReplicaRecordFromCloud> *)recordFromInsertEdit:(MSPReplicaEditInsertRecord *)arg1;
+ (<MSPReplicaRecordFromCloud> *)tombstoneWithRecordIdentifier:(NSUUID *)arg1;

- (void)applyUpdateEdit:(MSPReplicaEditUpdateContents *)arg1;
- (bool)isTombstoneRepresentedByCloudRecord;
- (CKRecord *)record;
- (NSUUID *)recordIdentifier;
- (CKRecord *)recordRepresentation;
- (void)setRecord:(CKRecord *)arg1;
- (CKRecordID *)tombstoneRecordRepresentation;

@end
