//
//  JOTumblrRegularPost.m
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import "JOTumblrRegularPost.h"


@implementation JOTumblrRegularPost
@synthesize title, body;


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
	if ([currentElement isEqualToString:@"regular-title"]) {
		self.title = currentString;
	}
	
	if ([currentElement isEqualToString:@"regular-body"]) {
		self.body = currentString;
	}
	
	[currentElement release], currentElement = nil;
	[currentString release], currentString = nil;
}


-(void)dealloc {
	[title release], title = nil;
	[body release], body = nil;
	[super dealloc];
}

@end
