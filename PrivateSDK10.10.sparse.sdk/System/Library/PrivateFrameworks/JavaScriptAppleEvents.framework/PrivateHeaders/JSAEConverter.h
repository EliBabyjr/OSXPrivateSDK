/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface JSAEConverter : NSObject
{
}

+ (id)valueFromDesc:(id)arg1 withClassCode:(unsigned int)arg2 forScriptableEntity:(id)arg3 container:(id)arg4 inContext:(id)arg5 exception:(id *)arg6;
+ (id)stringFromDesc:(id)arg1 forScriptableEntity:(id)arg2 inContext:(id)arg3;
+ (id)descFromArray:(id)arg1 forTypes:(id)arg2 forScriptableEntity:(id)arg3;
+ (id)paramDescFromValue:(id)arg1 forParameter:(id)arg2 forScriptableEntity:(id)arg3 error:(id *)arg4;
+ (id)descFromValue:(id)arg1 forType:(unsigned int)arg2 forScriptableEntity:(id)arg3;
+ (id)descFromValue:(id)arg1 forScriptableEntity:(id)arg2;

@end

