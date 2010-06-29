//
//  JOTumblrConversationPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JOTumblrPost.h"

@interface JOTumblrConversationPost : JOTumblrPost {
	NSString *title;
	NSString *conversation;
}

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *conversation;

@end
