/**
 * @file PowerStatus.h
 *
 * @copyright 2018 Bill Zissimopoulos
 */
/*
 * This file is part of EnergyBar.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 */

#import <Cocoa/Cocoa.h>

@interface PowerStatus : NSObject
+ (PowerStatus *)sharedInstance;
- (NSTimeInterval)remainingTime;
- (NSDictionary *)providingSourceInfoDictionary;
@end

extern NSString *PowerStatusSourceState;
extern NSString *PowerStatusCurrentCapacity;
extern NSString *PowerStatusMaxCapacity;
extern NSString *PowerStatusIsCharging;

extern NSString *PowerStatusNotification;