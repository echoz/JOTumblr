//
//  JOTumblrPost.m
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "JOTumblrPost.h"

@implementation JOTumblrPost
@synthesize title, body, data, url;

// overloaded title properties
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(source,setSource,title,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(name,setName,title,NSString)
							
// overloaded body properties
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(caption,setCaption,body,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(quote,setQuote,body,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(description,setdescription,body,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(conversation,setconversation,body,NSString)

// overloaded url properties
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(clickThroughUrl,setClickThroughUrl,url,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(externallyHostedUrl,setExternallyHostedUrl,url,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(embed,setEmbed,url,NSString)

-(void)dealloc {
	[title release], title = nil;
	[body release], body = nil;
	[data release], data = nil;
	[url release], url = nil;
	[super dealloc];
}

@end
