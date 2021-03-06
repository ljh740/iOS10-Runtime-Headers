/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPApplicationDataStorage : TSPDocumentResourceDataStorage {
    bool  _isValidated;
}

- (id)fileURLForInfo:(id)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(bool)arg3;
- (bool)isReadable;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (void)validateIfNeeded;

@end
