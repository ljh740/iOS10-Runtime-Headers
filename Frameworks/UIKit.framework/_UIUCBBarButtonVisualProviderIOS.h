/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    NSMutableArray * _constraints;
    UIButton * _contentButton;
    UIImage * _selectionBackground;
    UIColor * _selectionBackgroundTintColor;
    UIImageView * _selectionBackgroundView;
    UIColor * _selectionTintColor;
}

@property (nonatomic, retain) UIImage *selectionBackground;
@property (nonatomic, retain) UIColor *selectionBackgroundTintColor;
@property (nonatomic, retain) UIColor *selectionTintColor;

+ (id)_defaultTitleAttributes;

- (void).cxx_destruct;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (void)_configureSelectionViewFromBarItem:(id)arg1;
- (id)_defaultTitleAttributes;
- (id)_newButton;
- (id)_selectionBackgroundView;
- (void)configureButton:(id)arg1 fromBarItem:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)selectionBackground;
- (id)selectionBackgroundTintColor;
- (id)selectionTintColor;
- (void)setSelectionBackground:(id)arg1;
- (void)setSelectionBackgroundTintColor:(id)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2;

@end