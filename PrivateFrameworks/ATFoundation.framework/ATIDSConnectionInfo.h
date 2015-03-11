/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATIDSSocket, IDSDevice, MSVXPCTransaction;

@interface ATIDSConnectionInfo : NSObject {
    unsigned long long _connectionState;
    IDSDevice *_device;
    unsigned int _failureCount;
    long long _priority;
    ATIDSSocket *_socket;
    double _wakeupTimestamp;
    MSVXPCTransaction *_xpcTransaction;
}

@property unsigned long long connectionState;
@property(retain) IDSDevice * device;
@property unsigned int failureCount;
@property long long priority;
@property(retain) ATIDSSocket * socket;
@property double wakeupTimestamp;

- (void).cxx_destruct;
- (unsigned long long)connectionState;
- (void)dealloc;
- (id)device;
- (unsigned int)failureCount;
- (id)init;
- (long long)priority;
- (void)setConnectionState:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setFailureCount:(unsigned int)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSocket:(id)arg1;
- (void)setWakeupTimestamp:(double)arg1;
- (id)socket;
- (double)wakeupTimestamp;

@end