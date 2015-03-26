/*
 *  CAUSBDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAUSBDevice_
#define _CAUSBDevice_

#include "CADevice.h"

class CAUSBDevice : public CADevice {
private:
	CAPrivateCopyAndAssign( CAUSBDevice );
public:
	CAUSBDevice();
	virtual ~CAUSBDevice();
};

#endif // _CAUSBDevice_
