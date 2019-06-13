/**
 * @file NSObject+MethodSwizzling.h
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

@interface NSObject (MethodSwizzling)
+ (BOOL)swizzleInstanceMethod:(SEL)oldsel withMethod:(SEL)newsel;
+ (BOOL)swizzleClassMethod:(SEL)oldsel withMethod:(SEL)newsel;
@end
