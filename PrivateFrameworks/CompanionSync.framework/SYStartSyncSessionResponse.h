/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStartSyncSessionResponse : PBCodable <NSCopying> {
    BOOL  _accepted;
    SYErrorInfo * _error;
    SYMessageHeader * _header;
    NSString * _sessionID;
    BOOL  _supportsRestart;
    BOOL  _supportsRollback;
}

@property (nonatomic) BOOL accepted;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) BOOL hasError;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) BOOL supportsRestart;
@property (nonatomic) BOOL supportsRollback;

- (void).cxx_destruct;
- (BOOL)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (BOOL)hasError;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sessionID;
- (void)setAccepted:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSupportsRestart:(BOOL)arg1;
- (void)setSupportsRollback:(BOOL)arg1;
- (BOOL)supportsRestart;
- (BOOL)supportsRollback;
- (void)writeTo:(id)arg1;

@end