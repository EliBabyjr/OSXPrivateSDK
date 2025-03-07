/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSURL;

@interface PRSBaseCardSection : NSObject <NSCoding, NSSecureCoding>
{
    long long _type;
    NSURL *_url;
}

+ (id)sectionWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

