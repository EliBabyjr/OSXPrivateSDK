/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

@class CIMPreferences;

@interface CIMPreferencesModule : NSPreferencesModule
{
    id <CIMPreferencesModuleDelegate> _delegate;
}

@property(nonatomic) id <CIMPreferencesModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CIMPreferences *preferences;
- (void)dealloc;
- (id)init;

@end

