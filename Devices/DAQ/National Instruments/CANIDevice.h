/*
 *  CANIDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CANIDevice_
#define _CANIDevice_

#include "CADAQDevice.h"

class CANIDevice : public CADAQDevice {
private:
	CAPrivateCopyAndAssign( CANIDevice );
public:
	CANIDevice();
	virtual ~CANIDevice();
};

#endif // _CANIDevice_
