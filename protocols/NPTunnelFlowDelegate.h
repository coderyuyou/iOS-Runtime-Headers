/* Generated by RuntimeBrowser.
 */

@protocol NPTunnelFlowDelegate <NSObject>

@required

- (void)flowDidClose:(NPTunnelFlow *)arg1;
- (int)flowGetCurrentMTU;
- (NPTunnelFlowTelemetry *)flowInstantiateTelemetryFlowWithService:(NSString *)arg1 url:(NSURL *)arg2;

@end