/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */



@interface VSRecognitionResult : NSObject 
{
}

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;

- (NSUInteger)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (NSUInteger)retainCount;
- (id)description;
- (NSInteger)elementCount;
- (id)modelIdentifier;
- (id)createHandler;
- (void)setRecognitionAction:(id)arg1;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(NSInteger)arg3;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;
- (id)recognitionAction;

@end