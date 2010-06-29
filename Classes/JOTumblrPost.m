//
//  JOTumblrPost.m
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import "JOTumblrPost.h"

@implementation JOTumblrPost
@synthesize type, generator, date, private, tags, format, group, slug;
@synthesize state, sendToTwitter;
@synthesize bookmarklet, unixtimestamp, width, height, dateGMT, reblogKey, posturl, urlWithSlug;

-(id)init {
	if (self = [super init]) {
	}
	return self;
}

-(void)dealloc {
	[super dealloc];
}

@end
