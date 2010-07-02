//
//  JOTumblrPost.m
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

#import "JOTumblrPost.h"

#define HTTP_USER_AGENT @"JOTumblr"

@implementation JOTumblrPost
@synthesize postid, apiendpoint;
@synthesize type, generator, date, private, tags, format, group, slug;
@synthesize state, sendToTwitter;
@synthesize bookmarklet, unixtimestamp, width, height, dateGMT, reblogKey, posturl, urlWithSlug;
@synthesize liked, noteCount, tumblelog, rebloggedFromURL, rebloggedFromName, rebloggedFromTitle, rebloggedRootURL, rebloggedRootName, rebloggedRootTitle;

-(id)initWithEndPoint:(NSString *)api {
	if (self = [super init]) {
		apiendpoint = [api retain];
		self.state = @"draft";
	}
	return self;
}

-(id)initWithBasePost:(JOTumblrPost *)post {
	if (self = [super init]) {
		apiendpoint = [post.apiendpoint retain];
		self.postid = post.postid;
		posturl = [post.posturl retain];
		urlWithSlug = [post.urlWithSlug retain];
		self.type = post.type;
		self.slug = post.slug;
		reblogKey = [post.reblogKey retain];
		self.format = post.format;
		width = post.width;
		height = post.height;
		bookmarklet = post.bookmarklet;
		self.private = post.private;
		unixtimestamp = post.unixtimestamp;
		
		liked = post.liked;
		noteCount = post.noteCount;
		
		dateGMT = [post.dateGMT retain];
		self.date = post.date;
	}
	return self;
}

-(void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict {	
	if ([elementName isEqualToString:@"post"]) {
		self.postid = [attributeDict objectForKey:@"id"];
		posturl = [[NSURL URLWithString:[attributeDict objectForKey:@"url"]] retain];
		urlWithSlug = [[NSURL URLWithString:[attributeDict objectForKey:@"url-with-slug"]] retain];
		self.type = [attributeDict objectForKey:@"type"];
		self.slug = [attributeDict objectForKey:@"slug"];
		reblogKey = [[attributeDict objectForKey:@"reblog-key"] retain];
		self.format = [attributeDict objectForKey:@"format"];
		width = [[attributeDict objectForKey:@"width"] intValue];
		height = [[attributeDict objectForKey:@"height"] intValue];
		bookmarklet = [[attributeDict objectForKey:@"bookmarklet"] boolValue];
		self.private = [[attributeDict objectForKey:@"private"] boolValue];
		unixtimestamp = [[attributeDict objectForKey:@"unix-timestamp"] intValue];
		
		liked = [[attributeDict objectForKey:@"liked"] boolValue];
		noteCount = [[attributeDict objectForKey:@"note-count"] intValue];
		
		NSDateFormatter *inputFormatter = [[NSDateFormatter alloc] init];
		
		//for date-gmt
		[inputFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss zzz"];
		dateGMT = [[inputFormatter dateFromString:[attributeDict objectForKey:@"date-gmt"]] retain];
		
		//for date
		[inputFormatter setDateFormat:@"EEE, dd MMM yyyy HH:mm:ss"];
		self.date = [inputFormatter dateFromString:[attributeDict objectForKey:@"date"]];
		
		[inputFormatter release];
	}
}


-(void)parser:(NSXMLParser *)parser didEndElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName {
}


-(NSData *) sendXHRToURL:(NSString *)url PostValues:(NSDictionary *)postValues {
	
	NSMutableURLRequest *request = [[NSMutableURLRequest alloc] init];
	
	if (postValues != nil) {
		
		NSMutableString *post = [NSMutableString string];
		for (NSString *key in postValues) {
			if ([post length] > 0) {
				[post appendString:@"&"];
			}
			[post appendFormat:@"%@=%@",key,[postValues objectForKey:key]];
		}
		
		NSLog(@"Post String: %@", post);
		NSData *postData = [post dataUsingEncoding:NSASCIIStringEncoding allowLossyConversion:YES];
		NSString *postLength = [NSString stringWithFormat:@"%d", [postData length]];
		[request setHTTPMethod:@"POST"];
		[request setValue:postLength forHTTPHeaderField:@"Content-Length"];
		[request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
		[request setValue:HTTP_USER_AGENT forHTTPHeaderField:@"User-Agent"];
		[request setHTTPBody:postData];
		
	}
	
	[request setURL:[NSURL URLWithString:url]];
	
	NSData *recvData = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
	
	[request release];
	
	return recvData;
}


-(void)dealloc {	
	[currentElement release], currentElement = nil;
	[currentString release], currentString = nil;
	
	[apiendpoint release], apiendpoint = nil;
	[postid release], postid = nil;
	[type release], type = nil;
	[generator release], generator = nil;
	[date release], date = nil;
	[tags release], tags = nil;
	[format release], format = nil;
	[group release], group = nil;
	[slug release], slug = nil;
	[state release], state = nil;
	[dateGMT release], dateGMT = nil;
	[reblogKey release], reblogKey = nil;
	[posturl release], posturl = nil;
	[urlWithSlug release], urlWithSlug = nil;
	[super dealloc];
}

@end
