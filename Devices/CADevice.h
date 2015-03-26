/*
 *  CADevice.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CADevice_
#define _CADevice_

#include "CAObject.h"

class CADevice : public CAObject {
private:
	CAPrivateCopyAndAssign( CADevice );
	
	CFMutableDictionaryRef		_matchingDictionary;
	CFMutableDictionaryRef		_configDictionary;
	
public:
	CADevice();
	virtual ~CADevice();
};

#endif // _CADevice_
