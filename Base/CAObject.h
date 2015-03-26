/*
 *  CAObject.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAObject_
#define _CAObject_

#include "CABase.h"

class CAObject {
private:
	CAPrivateCopyAndAssign( CAObject );
	
	CFStringRef		_name;
	
public:
	CAObject();
	virtual ~CAObject();
	
	CFStringRef		name() const;
	void			setName( const CFStringRef & str );
};

#endif // _CAObject_
