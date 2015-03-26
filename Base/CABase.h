/*
 *  CABase.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CABase_
#define _CABase_

#include <CoreFoundation/CoreFoundation.h>

#define kCAPluginPath			CFSTR("/Library/Application Support/CoreAcquisition/")
#define kCAPreferencesPath		CFSTR("/Library/Preferences/")

#define CAPrivateCopyAndAssign( className ) \
	private: \
		className( const className & obj ); \
		className & operator=( const className & obj );

#define CAPrivateConstructors( className ) \
	CAPrivateCopyAndAssign( className ); \
		className(); \
		

#endif // _CABase_
