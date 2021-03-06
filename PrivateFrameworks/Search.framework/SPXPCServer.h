/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPXPCServer : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
    id /* block */ _defaultMessageHandler;
    id /* block */ _disconnectHandler;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_handlerMap;
    double _idleTimerInterval;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    BOOL _shutdown;
    id /* block */ _shutdownHandler;
    BOOL _timeoutPending;
    BOOL _timerHasFiredSinceLastMessage;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

@property (nonatomic, copy) id /* block */ defaultMessageHandler;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, copy) id /* block */ shutdownHandler;

- (BOOL)_doingWork;
- (void)_handleNewConnection:(id)arg1;
- (id /* block */)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)_rescheduleIdleTimer;
- (void)_resetMessageFlag;
- (BOOL)_runShutdownHandler;
- (BOOL)connectionsAreActive;
- (void)dealloc;
- (id /* block */)defaultMessageHandler;
- (id /* block */)disconnectHandler;
- (id)initListenerWithServiceName:(id)arg1;
- (id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)setDefaultMessageHandler:(id /* block */)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(id /* block */)arg2;
- (void)setIdleTimerInterval:(double)arg1;
- (void)setShutdownHandler:(id /* block */)arg1;
- (BOOL)shutdown;
- (id /* block */)shutdownHandler;
- (void)startListening;

@end
