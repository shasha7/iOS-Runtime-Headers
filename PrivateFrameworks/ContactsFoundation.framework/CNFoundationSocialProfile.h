/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFoundationSocialProfile : NSObject <NSCopying> {
    NSString *_displayName;
    NSString *_service;
    NSString *_urlString;
    NSString *_userIdentifier;
    NSString *_username;
}

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *service;
@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSString *userIdentifier;
@property (readonly, copy) NSString *username;

+ (id)emptySocialProfile;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned int)hash;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)service;
- (id)urlString;
- (id)userIdentifier;
- (id)username;

@end