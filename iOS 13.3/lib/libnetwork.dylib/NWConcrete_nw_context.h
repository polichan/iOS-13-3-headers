/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_context : NSObject <OS_nw_context> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  activate_lock;
    unsigned int  activated;
    struct nw_context_cache { struct _cache_entries_head { struct nw_association_cache_entry {} *x_1_1_1; struct nw_association_cache_entry {} **x_1_1_2; } x1; struct _idle_cache_entries_head { struct nw_association_cache_entry {} *x_2_1_1; struct nw_association_cache_entry {} **x_2_1_2; } x2; struct nw_hash_table {} *x3; struct nw_hash_table {} *x4; struct nw_hash_table {} *x5; void *x6; unsigned int x7; unsigned int x8; } * cache;
    struct nw_context_globals { void *x1; struct nw_timer_list_head { struct nw_timer_entry {} *x_2_1_1; struct nw_timer_entry {} **x_2_1_2; } x2; struct nw_hash_table {} *x3; unsigned long long x4; struct os_unfair_lock_s { unsigned int x_5_1_1; } x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct os_unfair_lock_s { unsigned int x_7_1_1; } x7; struct nw_hash_table {} *x8; void *x9; void *x10; struct nw_mem_buffer_manager {} *x11; struct nw_mem_buffer_manager {} *x12; struct nw_mem_buffer_manager {} *x13; struct nw_mem_buffer_manager {} *x14; struct nw_mem_buffer_manager {} *x15; } * globals;
    char * identifier;
    unsigned int  is_implicit;
    unsigned int  is_isolated_context;
    unsigned int  isolate_protocol_cache;
    unsigned int  isolate_protocol_stack;
    NWConcrete_nw_context * isolated_context;
    unsigned int  max_cache_entries;
    unsigned int  max_idle_cache_entries;
    int  privacy_level;
    int  scheduling_mode;
    unsigned int  target_cache_entries;
    NSObject<OS_dispatch_workloop> * workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(const char *)arg1;
- (id)redactedDescription;

@end
