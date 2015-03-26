/*
 *  CAApplication.h
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Center for Neural Science, New York University. All rights reserved.
 *
 */

#ifndef _CAApplication_
#define _CAApplication_

#include "CAObject.h"

#define kCAApplicationDidFinishLaunchingNotification	CFSTR( "kCAApplicationDidFinishLaunching" )
#define kCAApplicationWillExitNotification				CFSTR( "kCAApplicationWillExit" )

class CAApplicationDelegate;

class CAApplication : public CAObject {
	CAPrivateConstructors( CAApplication );
	
	static CAApplication *	_sharedApplication;
	
	CFRunLoopRef			_runLoop;
	
	CAApplicationDelegate *	_delegate;

public:
	static CAApplication & sharedApplication();
	static int CAApplicationMain( int argc, char ** argv );
	
	virtual ~CAApplication();
	
	int run();
	
	// Delegate Methods
	CAApplicationDelegate & delegate() const;
	void setDelegate( CAApplicationDelegate * delegate );
};

#endif // _CAApplication_
