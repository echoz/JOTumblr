//
//  JOTumblrQuotePost.m
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "JOTumblrQuotePost.h"


@implementation JOTumblrQuotePost
@synthesize quote, source;

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
	if ([currentElement isEqualToString:@"quote-text"]) {
		self.quote = currentString;
	}
	
	if ([currentElement isEqualToString:@"quote-source"]) {
		self.source = currentString;
	}
	
	[currentElement release], currentElement = nil;
	[currentString release], currentString = nil;
}


-(void)dealloc {
	[quote release], quote = nil;
	[source release], source = nil;
	[super dealloc];
}

@end
