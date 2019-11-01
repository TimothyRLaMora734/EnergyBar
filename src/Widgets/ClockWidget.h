/**
 * @file ClockWidget.h
 *
 * @copyright 2018-2019 Bill Zissimopoulos
 */
/*
 * This file is part of EnergyBar.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 */

#import <Cocoa/Cocoa.h>
#import "CustomWidget.h"

@interface ClockWidget : CustomMultiWidget
- (void)resetClock;
- (void)resetWeather;
- (void)setPressTarget:(id)target action:(SEL)action;
@property (retain, getter=formatter, setter=setFormatter:) NSDateFormatter *formatter;
@property (getter=showsBatteryStatus, setter=setShowsBatteryStatus:) BOOL showsBatteryStatus;
@property (getter=showsBatteryTimeRemaining, setter=setShowsBatteryTimeRemaining:)
    BOOL showsBatteryTimeRemaining;
@property (assign, getter=temperatureUnit, setter=setTemperatureUnit:) NSUInteger temperatureUnit;
@property (getter=showsWeather, setter=setShowsWeather:) BOOL showsWeather;
@end
