/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSEngine : NSObject <NPHSOSPersistentTimerLocationManagerDelegate, NSXPCListenerDelegate, SOSServerProtocol> {
    NSMutableArray * _clientConnections;
    SOSContactsManager * _contactsManager;
    FKFriendsManager * _friendsManager;
    CLLocation * _lastLocationSent;
    NPHSOSPersistentTimerLocationManager * _sosPersistentTimerLocationManager;
    NSDate * _timeLastMessageSent;
    NSDate * _timeToStopSendingMessages;
}

@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FKFriendsManager *friendsManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)SOSSendingLocationUpdateChanged:(id)arg1;
- (BOOL)_isMMSEnabled;
- (BOOL)_locationIsValidToSend:(id)arg1;
- (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(BOOL)arg2 withMMS:(BOOL)arg3;
- (id)clientConnections;
- (void)contactStoreDidChange;
- (id)contactsManager;
- (void)dealloc;
- (id)friendsManager;
- (id)init;
- (BOOL)isSendingLocationUpdate;
- (void)isSendingLocationUpdate:(id /* block */)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)notificationEnabledAndContactsExist;
- (void)setClientConnections:(id)arg1;
- (void)setFriendsManager:(id)arg1;
- (void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2;
- (void)start;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)stopSendingLocationUpdate;
- (void)willStartSendingLocationUpdate;

@end