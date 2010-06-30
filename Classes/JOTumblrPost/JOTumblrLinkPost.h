//
//  JOTumblrLinkPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JOTumblrPost.h"

@interface JOTumblrLinkPost : JOTumblrPost <NSXMLParserDelegate> {
	NSString *name;
	NSString *description;
	NSString *url;
}
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *description;
@property (nonatomic, retain) NSString *url;

@end
