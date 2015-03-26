/*
 *  CADAQDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CADAQDevice_
#define _CADAQDevice_

#include "CADevice.h"

class CADAQDevice : public CADevice {
private:
	CAPrivateCopyAndAssign( CADAQDevice );
public:
	CADAQDevice();
	virtual ~CADAQDevice();
};

#endif // _CADAQDevice_
