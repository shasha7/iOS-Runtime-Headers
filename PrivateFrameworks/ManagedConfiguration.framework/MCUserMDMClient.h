/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserMDMClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_createAndStartMDMXPCConnection;
- (void)dealloc;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)arg1;
- (void)processUserRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)processUserRequest:(id)arg1 outError:(id*)arg2;
- (id)pushToken;
- (void)scheduleTokenUpdate;
- (void)setXpcConnection:(id)arg1;
- (void)simulatePush;
- (bool)supportsPerUserMDM;
- (id)xpcConnection;

@end