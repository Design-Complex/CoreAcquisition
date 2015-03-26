/*
 *  CAObject.cpp
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#include "CAObject.h"

CAObject::CAObject() {
	_name = NULL;
}

CAObject::~CAObject() {
	if( _name != NULL )
		CFRelease( _name );
}

CFStringRef CAObject::name() const {
	return _name;
}

void CAObject::setName( const CFStringRef & str ) {
	if( _name != NULL )
		CFRelease( _name );
	
	_name = CFStringCreateCopy( kCFAllocatorDefault, str );
}