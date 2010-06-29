//
//  JOTumblrPhotoPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JOTumblrPost.h"

@interface JOTumblrPhotoPost : JOTumblrPost {
	NSString *source;
	NSString *caption;
	NSString *clickThroughURL;
	NSData *data;
}
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *clickThroughURL;
@end
