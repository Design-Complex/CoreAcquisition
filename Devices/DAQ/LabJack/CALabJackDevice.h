/*
 *  CALabJackDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CALabJackDevice_
#define _CALabJackDevice_

#include "CADAQDevice.h"

class CALabJackDevice : public CADAQDevice {
private:
	CAPrivateCopyAndAssign( CALabJackDevice );
public:
	CALabJackDevice();
	virtual ~CALabJackDevice();
};

#endif // _CALabJackDevice_
