//
//  JOTumblrPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 5/12/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JOTumblrPost : NSObject {
	
	// global api
	
	NSString *type;
	NSString *generator;
	NSDate *date;
	BOOL private;
	NSMutableArray *tags;
	NSString *format;
	NSString *group;
	NSString *slug;

	// misc api
	
	NSString *state;
	BOOL sendToTwitter;
	
	// xml specific extras
	
	BOOL bookmarklet;
	NSDate *dateGMT;
	NSUInteger unixtimestamp;
	NSString *reblogKey;
	NSString *posturl;
	NSString *urlWithSlug;
	NSUInteger width;
	NSUInteger height;
}

@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *generator;
@property (nonatomic, retain) NSDate *date;
@property (readwrite) BOOL private;
@property (nonatomic, retain) NSMutableArray *tags;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSString *group;
@property (nonatomic, retain) NSString *slug;

@property (nonatomic, retain) NSString *state;
@property (readwrite) BOOL sendToTwitter;

@property (readonly) BOOL bookmarklet;
@property (readonly) NSUInteger unixtimestamp;
@property (readonly) NSUInteger width;
@property (readonly) NSUInteger height;
@property (nonatomic, retain, readonly) NSDate *dateGMT;
@property (nonatomic, retain, readonly) NSString *reblogKey;
@property (nonatomic, retain, readonly) NSString *posturl;
@property (nonatomic, retain, readonly) NSString *urlWithSlug;

@end
