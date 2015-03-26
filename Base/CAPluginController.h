/*
 *  CAPluginController.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAPluginController_
#define _CAPluginController_

#include "CAObject.h"

class CAPlugin;

class CAPluginController : public CAObject {
private:
	CAPrivateConstructors( CAPluginController );
	
public:
	virtual ~CAPluginController();
};

#endif // _CAPluginController_
