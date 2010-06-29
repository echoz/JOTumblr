//
//  JOTumblrPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SYNTHESIZE_GETTERSETTER_FOR_PROPERTY(__GETTERNAME__,__SETTERNAME__,__SOURCEPROPERTY__,__OBJTYPE__) \
\
-(__OBJTYPE__ *)__GETTERNAME__ {		\
return self.__SOURCEPROPERTY__;		\
}	\
-(void)__SETTERNAME__:(__OBJTYPE__ *)temp {			\
if (![self.__SOURCEPROPERTY__ isEqual:temp]) {	\
[self.__SOURCEPROPERTY__ release];			\
self.__SOURCEPROPERTY__ = [temp retain];	\
}												\
}

#define SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(__GETTERNAME__,__SETTERNAME__,__SOURCEPROPERTY__,__OBJTYPE__)	\
-(__OBJTYPE__ *)__GETTERNAME__;																						\
-(void)__SETTERNAME__:(__OBJTYPE__ *)temp;

@interface JOTumblrPost : NSObject {
	
	/*
	 * global api
	 */
	
	NSString *type;
	NSString *generator;
	NSDate *date;
	BOOL private;
	NSArray *tags;
	NSString *format;
	NSString *group;
	NSString *slug;

	NSString *state;					// the state the post is in
	BOOL sendToTwitter;					// only for new posts

	/*
	 * Post Specific API ivars
	 * 
	 * These ivars are shared between the various post types
	 *
	 */
	
	NSString *title; 
	NSString *body;
	NSData *data;
	NSString *url;
	
}
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *url;

SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(source,setSource,title,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(name,setName,title,NSString)

SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(caption,setCaption,body,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(quote,setQuote,body,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(description,setdescription,body,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(conversation,setconversation,body,NSString)

SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(clickThroughUrl,setClickThroughUrl,url,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(externallyHostedUrl,setExternallyHostedUrl,url,NSString)
SYNTHESIZE_GETTERSETTER_FOR_PROPERTY_HEADER(embed,setEmbed,url,NSString)
@end
