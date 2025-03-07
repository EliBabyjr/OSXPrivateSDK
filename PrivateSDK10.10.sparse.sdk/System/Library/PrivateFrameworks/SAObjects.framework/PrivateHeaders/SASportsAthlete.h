/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSNumber, NSString, SASportsTeam;

@interface SASportsAthlete : SASportsEntity
{
}

+ (id)athleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)athlete;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSArray *statistics;
@property(copy, nonatomic) NSArray *previousTeams;
@property(copy, nonatomic) NSString *position;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSArray *lastGameStatistics;
@property(copy, nonatomic) NSNumber *injured;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSArray *formattedMetadata;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSArray *careerStatistics;
@property(copy, nonatomic) NSArray *athleteMetadata;
@property(retain, nonatomic) SASportsTeam *activeTeam;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

