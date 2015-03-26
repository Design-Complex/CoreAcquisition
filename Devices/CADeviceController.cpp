/*
 *  CADeviceController.cpp
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#include "CADeviceController.h"
#include <mach/mach.h>

CADeviceController * CADeviceController::_sharedController = 0;

CADeviceController & CADeviceController::sharedController() {
	try {
		if( CADeviceController::_sharedController == 0 )
			CADeviceController::_sharedController = new CADeviceController();
		
		return *CADeviceController::_sharedController;
	}
	catch (...) {
		throw;
	}
}

CADeviceController::CADeviceController() : CAObject::CAObject(), _ioKitPort( 0 ), _matchingDictionary( 0 ) {
	kern_return_t err = 0;
	CFStringRef errString = 0;
	
	// Create a master port for communication with the IO Kit
	err = IOMasterPort( MACH_PORT_NULL, &_ioKitPort );
	if( err != kIOReturnSuccess ) {
		errString = CFSTR( "CADeviceController::CADeviceController(): Couldn't open device master port!" );
		
		goto error;
	}
	
	_matchingDictionary = CFDictionaryCreateMutable( kCFAllocatorDefault, 1, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks );
	if( _matchingDictionary == 0 ) {
		err = kIOReturnError;
		errString = CFSTR( "CADeviceController::CADeviceController(): Couldn't create device matching dictionary!" );
		
		goto error;
	}
	
	return; // OK!
	
error:
	if( _ioKitPort )
		mach_port_deallocate( mach_task_self(), _ioKitPort );
	
	CFShow( errString );
	
	throw err;
	
	return;
}

CADeviceController::~CADeviceController() {
	if( _matchingDictionary )
		CFRelease( _matchingDictionary );
	
	if( _ioKitPort )
		mach_port_deallocate( mach_task_self(), _ioKitPort );
}