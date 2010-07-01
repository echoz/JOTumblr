//
//  JOTumblrUser.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/19/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "JOTumblrLog.h"


@interface JOTumblrUser : NSObject {
	NSDictionary *capabilities;
	NSArray *tumblelogs;
	NSUInteger maxVideoBytesUploaded;
}
@property (readonly) NSDictionary *capabilities;
@property (readonly) NSArray *tumblelogs;
@property (readonly) NSUInteger maxVideoBytesUploaded;


@end
