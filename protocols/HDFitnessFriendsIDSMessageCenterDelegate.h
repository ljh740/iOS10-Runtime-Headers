/* Generated by RuntimeBrowser.
 */

@protocol HDFitnessFriendsIDSMessageCenterDelegate <NSObject>

@required

- (void)messageCenter:(void *)arg1 didReceiveFinalizeHandshake:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: HDFitnessFriendsIDSMessageCenter *, HDFitnessFriendsMessageFinalizeHandshake *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)messageCenter:(void *)arg1 didReceiveInviteRequest:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: HDFitnessFriendsIDSMessageCenter *, HDFitnessFriendsMessageInviteRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)messageCenter:(void *)arg1 didReceiveInviteResponse:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: HDFitnessFriendsIDSMessageCenter *, HDFitnessFriendsMessageInviteResponse *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)messageCenter:(void *)arg1 didReceiveWithdrawInviteRequest:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: HDFitnessFriendsIDSMessageCenter *, HDFitnessFriendsMessageWithdrawInviteRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (void)messageCenter:(HDFitnessFriendsIDSMessageCenter *)arg1 errorSendingFinalizeHandshake:(HDFitnessFriendsMessageFinalizeHandshake *)arg2;
- (void)messageCenter:(HDFitnessFriendsIDSMessageCenter *)arg1 errorSendingInviteRequest:(HDFitnessFriendsMessageInviteRequest *)arg2;
- (void)messageCenter:(HDFitnessFriendsIDSMessageCenter *)arg1 errorSendingInviteResponse:(HDFitnessFriendsMessageInviteResponse *)arg2;
- (void)messageCenter:(HDFitnessFriendsIDSMessageCenter *)arg1 errorSendingWithdrawInviteRequest:(HDFitnessFriendsMessageWithdrawInviteRequest *)arg2;

@end
