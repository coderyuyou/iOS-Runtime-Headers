/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExtension : NSObject <CXCallDirectoryStoreMigratorExtension, _NSExtensionContextHosting> {
    NSSet * __allowedErrorClasses;
    int  __assertionRefCount;
    NSBundle * __extensionBundle;
    NSMutableDictionary * __extensionContexts;
    NSMutableDictionary * __extensionExpirationIdentifiers;
    BKSProcessAssertion * __extensionProcessAssertion;
    NSMutableDictionary * __extensionServiceConnections;
    <PKPlugIn> * __plugIn;
    id /* block */  __requestPostCompletionBlock;
    id /* block */  __requestPostCompletionBlockWithItems;
    NSObject<OS_dispatch_queue> * __safePluginQueue;
    id  __stashedPlugInConnection;
    NSDictionary * _attributes;
    NSUUID * _connectionUUID;
    NSString * _extensionPointIdentifier;
    NSString * _identifier;
    NSDictionary * _infoDictionary;
    BOOL  _observingHostAppStateChanges;
    id /* block */  _requestCancellationBlock;
    id /* block */  _requestCompletionBlock;
    id /* block */  _requestInterruptionBlock;
    NSString * _version;
}

@property (setter=_setAllowedErrorClasses:, nonatomic, copy) NSSet *_allowedErrorClasses;
@property (setter=_setAssertionRefCount:, nonatomic) int _assertionRefCount;
@property (setter=_setExtensionBundle:, nonatomic, retain) NSBundle *_extensionBundle;
@property (setter=_setExtensionContexts:, nonatomic, retain) NSMutableDictionary *_extensionContexts;
@property (setter=_setExtensionExpirationsIdentifiers:, nonatomic, retain) NSMutableDictionary *_extensionExpirationIdentifiers;
@property (setter=_setExtensionProcessAssertion:, nonatomic, retain) BKSProcessAssertion *_extensionProcessAssertion;
@property (setter=_setExtensionServiceConnections:, nonatomic, retain) NSMutableDictionary *_extensionServiceConnections;
@property (getter=_extensionState, setter=_setExtensionState:, nonatomic, copy) NSDictionary *_extensionState;
@property (getter=_isMarkedNew, nonatomic, readonly) BOOL _markedNew;
@property (setter=_setPlugIn:, nonatomic, retain) <PKPlugIn> *_plugIn;
@property (nonatomic, copy) id /* block */ _requestPostCompletionBlock;
@property (nonatomic, copy) id /* block */ _requestPostCompletionBlockWithItems;
@property (nonatomic) NSObject<OS_dispatch_queue> *_safePluginQueue;
@property (retain) id _stashedPlugInConnection;
@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, copy) NSUUID *connectionUUID;
@property (nonatomic, readonly) NSURL *containingAppURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabledViaPlugInKit, nonatomic, readonly) BOOL enabledViaPlugInKit;
@property (nonatomic, copy) NSString *extensionPointIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *infoDictionary;
@property (nonatomic, readonly) NSString *localizedContainingAppName;
@property (nonatomic, readonly) NSString *localizedName;
@property (getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:, nonatomic) BOOL observingHostAppStateChanges;
@property (nonatomic, readonly) BOOL optedIn;
@property (nonatomic, readonly) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, readonly) NSIndexSet *pu_supportedMediaTypes;
@property (nonatomic, copy) id /* block */ requestCancellationBlock;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, copy) id /* block */ requestInterruptionBlock;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *version;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)_shouldLogExtensionDiscovery;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(id /* block */)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)extensionWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id*)arg3;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(id /* block */)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (void)initializeFiltering;
+ (id)predicateForActivationRule:(id)arg1;

- (id)_allowedErrorClasses;
- (int)_assertionRefCount;
- (id)_bareExtensionServiceConnection;
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_didCreateExtensionContext:(id)arg1;
- (void)_didShowExtensionManagementInterface;
- (void)_didShowNewExtensionIndicator;
- (id)_extensionBundle;
- (id)_extensionContextForUUID:(id)arg1;
- (id)_extensionContexts;
- (id)_extensionExpirationIdentifiers;
- (id)_extensionProcessAssertion;
- (id)_extensionServiceConnections;
- (id)_extensionState;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (id)_initWithPKPlugin:(id)arg1;
- (BOOL)_isMarkedNew;
- (BOOL)_isObservingHostAppStateChanges;
- (BOOL)_isPhotoServiceAccessGranted;
- (BOOL)_isSystemExtension;
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;
- (void)_kill:(int)arg1;
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_plugIn;
- (int)_plugInProcessIdentifier;
- (void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)_requestPostCompletionBlock;
- (id /* block */)_requestPostCompletionBlockWithItems;
- (void)_resetExtensionState;
- (id)_safePluginQueue;
- (void)_safelyBeginUsing:(id /* block */)arg1;
- (void)_safelyEndUsing:(id /* block */)arg1;
- (void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(id /* block */)arg2;
- (void)_setAllowedErrorClasses:(id)arg1;
- (void)_setAssertionRefCount:(int)arg1;
- (void)_setExtensionBundle:(id)arg1;
- (void)_setExtensionContexts:(id)arg1;
- (void)_setExtensionExpirationsIdentifiers:(id)arg1;
- (void)_setExtensionProcessAssertion:(id)arg1;
- (void)_setExtensionServiceConnections:(id)arg1;
- (void)_setExtensionState:(id)arg1;
- (void)_setObservingHostAppStateChanges:(BOOL)arg1;
- (void)_setPlugIn:(id)arg1;
- (id)_stashedPlugInConnection;
- (BOOL)_wantsProcessPerRequest;
- (BOOL)attemptOptIn:(id*)arg1;
- (BOOL)attemptOptOut:(id*)arg1;
- (id)attributes;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(id /* block */)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)connectionUUID;
- (void)dealloc;
- (id)description;
- (id)extensionPointIdentifier;
- (unsigned int)hash;
- (id)icons;
- (id)identifier;
- (id)infoDictionary;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (BOOL)optedIn;
- (int)pidForRequestIdentifier:(id)arg1;
- (id /* block */)requestCancellationBlock;
- (id /* block */)requestCompletionBlock;
- (id /* block */)requestInterruptionBlock;
- (void)setAttributes:(id)arg1;
- (void)setConnectionUUID:(id)arg1;
- (void)setExtensionPointIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setRequestCancellationBlock:(id /* block */)arg1;
- (void)setRequestCompletionBlock:(id /* block */)arg1;
- (void)setRequestInterruptionBlock:(id /* block */)arg1;
- (void)setVersion:(id)arg1;
- (void)set_requestPostCompletionBlock:(id /* block */)arg1;
- (void)set_requestPostCompletionBlockWithItems:(id /* block */)arg1;
- (void)set_safePluginQueue:(id)arg1;
- (void)set_stashedPlugInConnection:(id)arg1;
- (id)version;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)containingAppURL;
- (BOOL)isEnabledViaPlugInKit;
- (id)localizedContainingAppName;
- (id)localizedName;
- (id)plugInKitProxy;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(int)arg1 completion:(id /* block */)arg2;
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(id /* block */)arg1;
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(id /* block */)arg1;
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(id /* block */)arg1;
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(id /* block */)arg2;
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(BOOL)arg3 completion:(id /* block */)arg4;
+ (BOOL)appAllowedToTalkToSiri:(id)arg1;

- (BOOL)_intents_extensionSupportsAtLeastOneSiriIntent;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

- (id)nc_description;
- (BOOL)nc_hasExplicitUserElectionState;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_supportedMediaTypes;
- (BOOL)pu_supportsMediaType:(unsigned int)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)__UIKit_upcall_icons;
- (void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(id /* block */)arg2;
- (void)instantiateViewControllerWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 connectionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_extensionContainerBundleIdentifier;
- (id)uns_extensionContainerBundleProxy;
- (BOOL)uns_isExtensionSessionBeingDebugged:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (id)nc_extensionContainerBundleIdentifier;
- (id)nc_extensionContainerBundleProxy;

@end