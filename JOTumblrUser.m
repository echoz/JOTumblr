//
//  JOTumblrUser.m
//  JOTumblr
//
//  Created by Jeremy Foo on 5/19/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "JOTumblrUser.h"

static NSString *auth_endpoint = @"http://www.tumblr.com/api/authenticate";

@implementation JOTumblrUser
@synthesize tumblelogs, capabilities, primary, email;

-(id)initWithEmail:(NSString *)iemail password:(NSString *)ipass {
	if (self = [super init]) {
		self.email = iemail;
	}
	return self;
}



@end
