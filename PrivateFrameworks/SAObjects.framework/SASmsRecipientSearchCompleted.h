/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASmsRecipientSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * recipients;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)recipientSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recipientSearchCompleted;

- (id)encodedClassName;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)groupIdentifier;

@end