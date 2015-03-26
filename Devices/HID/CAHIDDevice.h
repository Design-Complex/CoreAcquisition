/*
 *  CAHIDDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAHIDDevice_
#define _CAHIDDevice_

#include "CAUSBDevice.h"

class CAHIDDevice : public CAUSBDevice {
private:
	CAPrivateCopyAndAssign( CAHIDDevice );
public:
	CAHIDDevice();
	virtual ~CAHIDDevice();
};

#endif // _CAHIDDevice_
