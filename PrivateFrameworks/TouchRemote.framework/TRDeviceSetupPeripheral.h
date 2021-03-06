/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupPeripheral : NSObject {
    _TRUserNotfication *_activeUserNotification;
    NSString *_authenticationAppleID;
    unsigned int _authenticationAttemptCount;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    <TRDeviceSetupPeripheralDelegate> *_delegate;
    NSString *_deviceGUID;
    BOOL _performingSetup;
    BOOL _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_userAgent;
}

@property (nonatomic) <TRDeviceSetupPeripheralDelegate> *delegate;

- (void).cxx_destruct;
- (void)_authenticateWithParameters:(id)arg1;
- (BOOL)_canPerformSetupReturningHasWiFiNetwork:(BOOL*)arg1;
- (void)_didDisconnect;
- (id)_didReceiveData:(id)arg1;
- (id)_didTap;
- (void)_sendSetupDataWithAuthInfo:(id)arg1 diagnosticSubmissionEnabled:(BOOL)arg2 rememberPasswordEnabled:(BOOL)arg3;
- (void)_setupDidComplete;
- (void)_setupDidFailWithError:(id)arg1;
- (BOOL)_showUserNotificationForAppleID:(id)arg1 returningAppleID:(id*)arg2 password:(id*)arg3;
- (void)_showUserNotificationForAuthenticationFailure:(id)arg1;
- (BOOL)_showUserNotificationForDiagnosticSubmission;
- (void)_showUserNotificationForErrorWithTitle:(id)arg1 message:(id)arg2;
- (BOOL)_showUserNotificationForRememberPasswordForAppleID:(id)arg1;
- (void)_startAuthentication;
- (void)cancelPreparingForSetup;
- (void)cancelSetupForStateChange;
- (void)cancelSetupForTimeout;
- (id)delegate;
- (id)init;
- (BOOL)performSetup;
- (void)setDelegate:(id)arg1;

@end
