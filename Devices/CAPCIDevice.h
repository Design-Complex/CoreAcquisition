/*
 *  CAPCIDevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAPCIDevice_
#define _CAPCIDevice_

#include "CADevice.h"

class CAPCIDevice : public CADevice {
private:
	CAPrivateCopyAndAssign( CAPCIDevice );
public:
	CAPCIDevice();
	virtual ~CAPCIDevice();
};

#endif // _CAPCIDevice_
