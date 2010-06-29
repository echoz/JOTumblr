//
//  JOTumblrPost.m
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import "JOTumblrPost.h"

@implementation JOTumblrPost

-(id)init {
	if (self = [super init]) {
		title = nil;
		body = nil;
		data = nil;
		url = nil;
	}
	return self;
}

-(void)dealloc {
	[title release], title = nil;
	[body release], body = nil;
	[data release], data = nil;
	[url release], url = nil;
	[super dealloc];
}

@end
