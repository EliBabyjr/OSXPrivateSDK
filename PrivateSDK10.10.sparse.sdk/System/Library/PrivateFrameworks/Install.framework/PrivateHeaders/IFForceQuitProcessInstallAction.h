/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFInstallAction.h>

@class NSString;

@interface IFForceQuitProcessInstallAction : IFInstallAction
{
    NSString *_title;
}

- (BOOL)runWithQueueElement:(id)arg1;
- (id)actionSpecificMetadata;
- (BOOL)loadFromXMLElement:(id)arg1 scripts:(id)arg2;
- (id)errorDictionary;
- (id)title;
- (void)dealloc;
- (id)init;

@end

