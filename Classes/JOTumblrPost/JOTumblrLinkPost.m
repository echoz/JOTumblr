//
//  JOTumblrLinkPost.m
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import "JOTumblrLinkPost.h"


@implementation JOTumblrLinkPost
@synthesize name, description, url;

-(void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict {	
	currentElement = [elementName retain];		
}

-(void)parser:(NSXMLParser *)parser foundCharacters:(NSString *)string {
	if (!currentString) {
		currentString = [[NSMutableString alloc] initWithCapacity:50];
	}
	[currentString appendString:string];
}


-(void)parser:(NSXMLParser *)parser didEndElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName {
	if ([currentElement isEqualToString:@"link-text"]) {
		self.name = currentString;
	}
	
	if ([currentElement isEqualToString:@"link-url"]) {
		self.url = currentString;
	}
	
	if ([currentElement isEqualToString:@"link-description"]) {
		self.description = currentString;
	}
	
	[currentElement release], currentElement = nil;
	[currentString release], currentString = nil;
}

-(void)dealloc {
	[name release], name = nil;
	[description release], description = nil;
	[url release], url = nil;
	[super dealloc];
}

@end
