/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;



@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *messages;
}


- (id)init;
- (void)dealloc;
- (void)newMessagesAvailable:(id)arg1;
- (BOOL)shouldCancel;
- (id)messages;

@end