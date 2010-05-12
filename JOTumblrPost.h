//
//  JOTumblrPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JOTumblrAuthenticate.h"

@interface JOTumblrPost : NSObject {
	JOTumblrAuthenticate *auth;
	NSString *type;
	NSDate *date;
	BOOL private;
	NSString *tags;
	BOOL markdown;
	NSString *group;
	NSString *slug;

}

@end
