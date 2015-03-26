/*
 *  CAPlugin.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAPlugin_
#define _CAPlugin_

#include "CAObject.h"

class CAPlugin : public CAObject {
private:
	CAPrivateCopyAndAssign( CAPlugin );
public:
	CAPlugin();
	virtual ~CAPlugin();
};

#endif // _CAPlugin_
