/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WMWeatherStoreProtocol <NSObject>
- (void)currentConditionsForCoordinate:(CDStruct_2c43369c)arg1 result:(id)arg2;
- (void)currentHourlyForecastForCoordinate:(CDStruct_2c43369c)arg1 result:(id)arg2;
- (void)currentDailyForecastForCoordinate:(CDStruct_2c43369c)arg1 result:(id)arg2;
- (void)forecastForCoordinate:(CDStruct_2c43369c)arg1 atDate:(id)arg2 result:(id)arg3;
- (void)historicalWeatherForCoordinate:(CDStruct_2c43369c)arg1 atDate:(id)arg2 result:(id)arg3;
- (void)almanacWeatherForCoordinate:(CDStruct_2c43369c)arg1 atDate:(id)arg2 result:(id)arg3;
- (void)weatherForCoordinate:(CDStruct_2c43369c)arg1 atDate:(id)arg2 result:(id)arg3;
@end

