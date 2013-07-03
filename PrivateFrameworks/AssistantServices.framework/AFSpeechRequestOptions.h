/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {
    BOOL _isEyesFree;
    BOOL _useAutomaticEndpointing;
    int _event;
    NSString *_btDeviceAddress;
    NSString *_serverCommandId;
    double _activationEventTime;
}

@property int activationEvent;
@property(copy) NSString * btDeviceAddress;
@property BOOL isEyesFree;
@property(copy) NSString * serverCommandId;
@property BOOL useAutomaticEndpointing;
@property double activationEventTime;

+ (BOOL)supportsSecureCoding;

- (void)setActivationEventTime:(double)arg1;
- (double)activationEventTime;
- (BOOL)useAutomaticEndpointing;
- (void)setServerCommandId:(id)arg1;
- (void)setIsEyesFree:(BOOL)arg1;
- (BOOL)isEyesFree;
- (void)setBtDeviceAddress:(id)arg1;
- (id)serverCommandId;
- (id)btDeviceAddress;
- (int)activationEvent;
- (void)setActivationEvent:(int)arg1;
- (void).cxx_destruct;
- (void)setUseAutomaticEndpointing:(BOOL)arg1;
- (id)initWithActivationEvent:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end