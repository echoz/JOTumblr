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
	NSString *email;
	NSDictionary *capabilities;
	NSArray *tumblelogs;
	JOTumblrLog *primary;
}
@property (readonly, retain) NSDictionary *capabilities;
@property (readonly, retain) NSArray *tumblelogs;
@property (readonly, retain) JOTumblrLog *primary;
@property (nonatomic, retain) NSString *email;

-(id)initWithEmail:(NSString *)iemail password:(NSString *)ipass;
-(BOOL)isValid;

@end
