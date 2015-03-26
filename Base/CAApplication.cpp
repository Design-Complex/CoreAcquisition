/*
 *  CAApplication.cpp
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#include "CAApplication.h"
#include "CAApplicationDelegate.h"
#include "CADeviceController.h"

CAApplication * CAApplication::_sharedApplication = 0;

static void observe( CFRunLoopObserverRef observer, CFRunLoopActivity activity, void *info ) {
	CAApplication & app = CAApplication::sharedApplication();
	
	CFNotificationCenterRef nc = CFNotificationCenterGetLocalCenter();
	
	if( activity == kCFRunLoopEntry ) {
		CFNotificationCenterPostNotification( nc, kCAApplicationDidFinishLaunchingNotification, &app, NULL, true );
	}
	
	if( activity == kCFRunLoopExit ) {
		CFNotificationCenterPostNotification( nc, kCAApplicationWillExitNotification, &app, NULL, true );
	}
}

int CAApplication::CAApplicationMain( int argc, char ** argv ) {
	CAApplication & app = CAApplication::sharedApplication();
	
	app.setName( CFStringCreateWithCString( kCFAllocatorDefault, argv[ 0 ], CFStringGetSystemEncoding() ) );
	
	return app.run();
}

CAApplication & CAApplication::sharedApplication() {
	if( _sharedApplication == 0 ) {
		_sharedApplication = new CAApplication();
	}
	
	return *_sharedApplication;
}

CAApplication::CAApplication() : CAObject::CAObject(), _runLoop( CFRunLoopGetMain() ), _delegate( new CAApplicationDelegate() ) {	
	// Add an observer to notify when the program launches
	CFRunLoopObserverRef observer = CFRunLoopObserverCreate( kCFAllocatorDefault, kCFRunLoopEntry|kCFRunLoopExit, true, 0, ( CFRunLoopObserverCallBack )&observe, NULL );
	
	// Register the observer
	CFRunLoopAddObserver( _runLoop, observer, kCFRunLoopDefaultMode );
	
	// Get a reference to the device controller
	CADeviceController & dc = CADeviceController::sharedController();
}

CAApplication::~CAApplication() {
	
}

int CAApplication::run() {
	// Start the runloop
	CFRunLoopRun();
	
	//CFRunLoopRunInMode( kCFRunLoopDefaultMode, 2.0, true );
	
	return EXIT_SUCCESS;
}

CAApplicationDelegate & CAApplication::delegate() const {
	return *_delegate;
}

void CAApplication::setDelegate( CAApplicationDelegate * delegate ) {
	delete _delegate;
	
	_delegate = delegate;
}
