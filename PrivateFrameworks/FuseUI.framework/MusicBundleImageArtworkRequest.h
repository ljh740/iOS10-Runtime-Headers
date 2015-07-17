/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicBundleImageArtworkRequest : NSObject <NSCopying> {
    NSBundle * _bundle;
    NSString * _imageName;
    int  _renderingMode;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic) int renderingMode;
@property (nonatomic, copy) UIColor *tintColor;

- (void).cxx_destruct;
- (id)bundle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)imageName;
- (id)initWithImageName:(id)arg1 inBundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)renderingMode;
- (void)setRenderingMode:(int)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end