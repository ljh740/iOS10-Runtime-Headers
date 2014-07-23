/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSData, NSString;

@interface BBImage : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    NSData *_data;
    NSString *_path;
    NSString *_name;
    NSString *_bundlePath;
}

@property(copy) NSData * data;
@property(copy) NSString * path;
@property(copy) NSString * name;
@property(copy) NSString * bundlePath;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)imageWithName:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithPath:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)imageWithData:(id)arg1;

- (id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4;
- (void)setBundlePath:(id)arg1;
- (id)path;
- (void)setName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)data;
- (id)uniqueIdentifier;
- (void)setPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)bundlePath;
- (void)setData:(id)arg1;

@end