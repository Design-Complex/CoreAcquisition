/*
 *  CAApplicationDelegate.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Vision Core Grant, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAApplicationDelegate_
#define _CAApplicationDelegate_

#include "CADelegate.h"

class CAApplicationDelegate : public CADelegate {
private:
	CAPrivateCopyAndAssign( CAApplicationDelegate );
	
public:
	CAApplicationDelegate();
	virtual ~CAApplicationDelegate();
	
	static void applicationDidFinishLaunching( CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo );
	static void applicationWillExit( CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo );
};

#endif // _CAApplicationDelegate_
