/*
 *  CADelegate.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Vision Core Grant, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CADelegate_
#define _CADelegate_

#include "CABase.h"

class CADelegate {
private:
	CAPrivateCopyAndAssign( CADelegate );
public:
	CADelegate();
	virtual ~CADelegate();
	
};

#endif // _CADelegate_
