/*
 *  CAFireWireDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAFireWireDevice_
#define _CAFireWireDevice_

#include "CADevice.h"

class CAFireWireDevice : public CADevice {
private:
	CAPrivateCopyAndAssign( CAFireWireDevice );
public:
	CAFireWireDevice();
	virtual ~CAFireWireDevice();
};

#endif // _CAFireWireDevice_
