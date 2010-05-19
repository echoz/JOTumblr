//
//  JOTumblrUser.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/19/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "JOTumblrLog.h"


@interface JOTumblrUser : NSObject <NSCoding> {
	NSString *email;
	NSDictionary *capabilities;
	NSArray *tumblelogs;
	JOTumblrLog *primary;
}
@property (readonly, retain) NSDictionary *capabilities;
@property (readonly, retain) NSArray *tumblelogs;
@property (readonly, retain) JOTumblrLog *primary;
@property (nonatomic, retain) NSString *email;

-(id)initWithEmail:(NSString *)email password:(NSString *)pass;
-(BOOL)isValid;

@end
