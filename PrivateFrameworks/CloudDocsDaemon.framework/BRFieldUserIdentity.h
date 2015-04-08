/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString;

@interface BRFieldUserIdentity : PBCodable <NSCopying> {
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
}

@property(retain) NSString * displayName;
@property(retain) NSString * firstName;
@property(readonly) BOOL hasDisplayName;
@property(readonly) BOOL hasFirstName;
@property(readonly) BOOL hasLastName;
@property(retain) NSString * lastName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)firstName;
- (BOOL)hasDisplayName;
- (BOOL)hasFirstName;
- (BOOL)hasLastName;
- (unsigned int)hash;
- (id)initWithCKUserIdentity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (id)userFormattedName;
- (void)writeTo:(id)arg1;

@end