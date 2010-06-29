//
//  JOTumblrPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JOTumblrPost : NSObject {
	
	/*
	 * global api
	 */
	
	NSString *type;
	NSString *generator;
	NSDate *date;
	BOOL private;
	NSArray *tags;
	NSString *format;
	NSString *group;
	NSString *slug;

	NSString *state;					// the state the post is in
	BOOL sendToTwitter;					// only for new posts

	/*
	 * Post Specific API ivars
	 * 
	 * These ivars are shared between the various post types
	 *
	 */
	
	NSString *title; 
	NSString *body;
	NSData *data;
	NSString *url;
	
}

@end
