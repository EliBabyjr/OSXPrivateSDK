/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IFPackageController, NSString;

@interface IFPackageRequirementsError : NSObject
{
    IFPackageController *_packageController;
    id _reference;
    BOOL _shouldContinue;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

- (id)description;
- (id)errorMessage;
- (id)errorTitle;
- (BOOL)shouldContinue;
- (id)reference;
- (id)packageController;

@end

