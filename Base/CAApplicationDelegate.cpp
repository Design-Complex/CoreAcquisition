/*
 *  CAApplicationDelegate.cpp
 *  CoreAcquisition
 *
 *  Created by Rob Dotson on 1/31/10.
 *  Copyright 2010 Rob Dotson, Vision Core Grant, Center for Neural Science, New York University. All rights reserved.
 *
 */

#include "CAApplicationDelegate.h"
#include "CAApplication.h"

void CAApplicationDelegate::applicationDidFinishLaunching( CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo ) {
	CAApplication *app = ( CAApplication * )object;
	
	CFStringRef notice = CFStringCreateWithFormat( kCFAllocatorDefault, NULL, CFSTR( "CAApplication (%@) Launched!" ), app->name() );
	
	CFUserNotificationDisplayNotice( 1.0, 0, NULL, NULL, NULL, CFSTR( "NOTICE!" ), notice, CFSTR( "OK" ) );
}

void CAApplicationDelegate::applicationWillExit( CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo ) {
	CAApplication *app = ( CAApplication * )object;
	
	CFStringRef notice = CFStringCreateWithFormat( kCFAllocatorDefault, NULL, CFSTR( "CAApplication (%@) Will Exit!" ), app->name() );
	
	CFUserNotificationDisplayNotice( 1.0, 0, NULL, NULL, NULL, CFSTR( "NOTICE!" ), notice, CFSTR( "OK" ) );
}

CAApplicationDelegate::CAApplicationDelegate() {
	CFNotificationCenterRef nc = CFNotificationCenterGetLocalCenter();
	
	CFNotificationCenterAddObserver( nc, this, &CAApplicationDelegate::applicationDidFinishLaunching, kCAApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately );
	CFNotificationCenterAddObserver( nc, this, &CAApplicationDelegate::applicationWillExit, kCAApplicationWillExitNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately );
}

CAApplicationDelegate::~CAApplicationDelegate() {
	
}