/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKMapServiceTicket>, MKLocalSearchRequest;

@interface MKLocalSearch : NSObject {
    MKLocalSearchRequest *_request;
    <MKMapServiceTicket> *_ticket;
}

@property(getter=isSearching,readonly) bool searching;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(id)arg4 queue:(id)arg5;
- (void)_phoneOnlyStartWithCompletionHandler:(id)arg1 queue:(id)arg2;
- (void)_startWithCompletionHandler:(id)arg1 queue:(id)arg2;
- (void)cancel;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isSearching;
- (void)startWithCompletionHandler:(id)arg1;

@end