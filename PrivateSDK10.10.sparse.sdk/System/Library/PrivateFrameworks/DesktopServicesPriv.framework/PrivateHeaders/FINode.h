/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface FINode : NSObject <NSCopying>
{
}

+ (id)nodeFromNodeRef:(struct OpaqueNodeRef *)arg1;
- (id)original;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (void *)asTNode;
- (struct OpaqueNodeRef *)nodeRef;

@end

