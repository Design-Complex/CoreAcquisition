/*
 *  CADeviceController.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CADeviceController_
#define _CADeviceController_

#include "CADevice.h"
#include <IOKit/IOKitLib.h>

class CADeviceController : public CAObject {
private:
	CAPrivateConstructors( CADeviceController );
	
	static CADeviceController *		_sharedController;
	
	mach_port_t						_ioKitPort;
	
	CFMutableDictionaryRef			_matchingDictionary;
	
public:
	virtual ~CADeviceController();
	
	static CADeviceController & sharedController();
	
};

#endif // _CADeviceController_
