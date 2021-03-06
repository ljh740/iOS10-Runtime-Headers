/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContextConfiguration : NSObject <NSCopying> {
    long long  _containerEnvironment;
    NSString * _contentContainerCombinationIdentifier;
    NSString * _contentContainerIdentifier;
    NSString * _privateDataContainerCombinationIdentifier;
    NSString * _privateDataContainerIdentifier;
}

@property (nonatomic, readonly) long long containerEnvironment;
@property (nonatomic, readonly, copy) NSString *contentContainerCombinationIdentifier;
@property (nonatomic, readonly, copy) NSString *contentContainerIdentifier;
@property (nonatomic, readonly, copy) NSString *privateDataContainerCombinationIdentifier;
@property (nonatomic, readonly, copy) NSString *privateDataContainerIdentifier;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (long long)containerEnvironment;
- (id)contentContainerCombinationIdentifier;
- (id)contentContainerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithContainerEnvironment:(long long)arg1 contentContainerIdentifier:(id)arg2 privateDataContainerIdentifier:(id)arg3 storeFrontID:(id)arg4;
- (id)privateDataContainerCombinationIdentifier;
- (id)privateDataContainerIdentifier;

@end
