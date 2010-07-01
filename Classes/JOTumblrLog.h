//
//  JOTumblrLog.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/19/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface JOTumblrLog : NSObject {
	
	// api specific
	NSString *title;
	NSString *name;
	NSURL *url;
	NSURL *avatarURL;
	BOOL primary;
	
	NSString *description;
	NSString *customCSS;
	NSString *themeSource;
	
	// xml specific
	NSTimeZone *timezone;
	NSString *cname;
}

@property (readonly) NSString *title;
@property (readonly) NSString *name;
@property (readonly) NSURL *url;
@property (readonly) NSURL *avatarURL;
@property (readonly, getter=isPrimary) BOOL primary;

@property (readonly) NSString *description;
@property (readonly) NSString *customCSS;
@property (readonly) NSString *themeSource;

// xml specific
@property (readonly) NSTimeZone *timezone;
@property (readonly) NSString *cname;

@end
