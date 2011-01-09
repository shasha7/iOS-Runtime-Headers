/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKVoiceChatService : NSObject 
{
    id _voiceChatService;
}

@property <GKVoiceChatClient> *client;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property float remoteParticipantVolume;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;

+ (void)initialize;
+ (id)defaultVoiceChatService;

- (void)dealloc;
- (id)client;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)acceptCallID:(NSInteger)arg1 error:(id*)arg2;
- (void)denyCallID:(NSInteger)arg1;
- (void)setClient:(id)arg1;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (float)remoteParticipantVolume;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (BOOL)isOutputMeteringEnabled;
- (BOOL)isInputMeteringEnabled;
- (BOOL)isMicrophoneMuted;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;

@end