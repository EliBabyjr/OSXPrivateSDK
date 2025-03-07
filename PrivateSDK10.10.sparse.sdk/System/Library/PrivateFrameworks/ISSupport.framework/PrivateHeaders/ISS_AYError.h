/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface ISS_AYError : NSObject <NSCopying, NSCoding>
{
    void *_reserved;
    int _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)localizedDescription;
- (id)_builtInLocalizedDescription;
- (id)userInfo;
- (id)domain;
- (int)code;
- (void)finalize;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

