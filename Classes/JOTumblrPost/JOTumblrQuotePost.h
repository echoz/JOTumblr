//
//  JOTumblrQuotePost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JOTumblrPost.h"

@interface JOTumblrQuotePost : JOTumblrPost <NSXMLParserDelegate> {
	NSString *source;
	NSString *quote;
}
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *quote;

@end
