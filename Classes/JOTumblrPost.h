//
//  JOTumblrPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 3/24/10.
//  Copyright 2010 THIRDLY. All rights reserved.
//
//  The MIT License
//  
//  Copyright (c) 2010 Jeremy Foo
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <Foundation/Foundation.h>


@interface JOTumblrPost : NSObject <NSXMLParserDelegate> {
	
	// post specific
	
	NSString *postid;
	NSString *apiendpoint;
	
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

	//xml dashboard read
	BOOL liked;
	NSUInteger noteCount;
	NSString *tumblelog;
	NSURL *rebloggedFromURL;		// where the content was from
	NSString *rebloggedFromName;
	NSString *rebloggedFromTitle;
	NSURL *rebloggedRootURL;		// where the user's primary blog is
	NSString *rebloggedRootName;
	NSString *rebloggedRootTitle;
	
	// xml specific extras
	BOOL bookmarklet;
	NSDate *dateGMT;
	NSUInteger unixtimestamp;
	NSString *reblogKey;
	NSURL *posturl;
	NSURL *urlWithSlug;
	NSUInteger width;
	NSUInteger height;
	
	@protected
	NSString *currentElement;
	NSMutableString *currentString;
}

@property (readonly) NSString *apiendpoint;

@property (nonatomic, retain) NSString *postid;
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

@property (readonly) BOOL liked;
@property (readonly) NSUInteger noteCount;
@property (readonly) NSString *tumblelog;
@property (readonly) NSURL *rebloggedFromURL;
@property (readonly) NSString *rebloggedFromName;
@property (readonly) NSString *rebloggedFromTitle;
@property (readonly) NSURL *rebloggedRootURL;
@property (readonly) NSString *rebloggedRootName;
@property (readonly) NSString *rebloggedRootTitle;

@property (readonly) BOOL bookmarklet;
@property (readonly) NSUInteger unixtimestamp;
@property (readonly) NSUInteger width;
@property (readonly) NSUInteger height;
@property (readonly) NSDate *dateGMT;
@property (readonly) NSString *reblogKey;
@property (readonly) NSURL *posturl;
@property (readonly) NSURL *urlWithSlug;

-(NSData *) sendXHRToURL:(NSString *)url PostValues:(NSDictionary *)postValues;
-(id)initWithEndPoint:(NSString *)api;
-(id)initWithBasePost:(JOTumblrPost *)post;
@end
