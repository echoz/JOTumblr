//
//  JOTumblrVideoPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JOTumblrPost.h"

@interface JOTumblrVideoPost : JOTumblrPost {
	NSString *title;
	NSString *caption;
	NSData *data;
	NSString *embed;
}

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) NSString *embed;
@property (nonatomic, retain) NSData *data;

@end
