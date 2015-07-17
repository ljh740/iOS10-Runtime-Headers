/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent {
    int  _authorizationStatus;
}

@property (nonatomic, readonly) int authorizationStatus;

+ (unsigned int)_packetEventType;

- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (int)authorizationStatus;
- (id)description;
- (id)initWithAuthorizationStatus:(int)arg1;

@end