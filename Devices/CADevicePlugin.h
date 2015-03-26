/*
 *  CADevicePlugin.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CADevicePlugin_
#define _CADevicePlugin_

#include "CAPlugin.h"

class CADevice;

class CADevicePlugin : public CAPlugin {
private:
	CAPrivateCopyAndAssign( CADevicePlugin );
public:
	CADevicePlugin();
	virtual ~CADevicePlugin();
};

#endif // _CADevicePlugin_
