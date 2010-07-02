#import <Foundation/Foundation.h>
#import "JOTumblrRegularPost.h"

int main (int argc, const char * argv[]) {
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

	JOTumblrRegularPost *post = [[[JOTumblrRegularPost alloc] init] autorelease];
	NSMutableDictionary *postvalues = [NSMutableDictionary dictionary];
	[postvalues setObject:@"echoz@thirdly.org" forKey:@"email"];
	[postvalues setObject:@"EchoZr0x" forKey:@"password"];
	[postvalues setObject:@"1" forKey:@"likes"];
	
	NSLog(@"%@", [[[NSString alloc] initWithData:[post sendXHRToURL:@"http://www.tumblr.com/api/dashboard" PostValues:postvalues] encoding:NSASCIIStringEncoding] autorelease]);
	
	
	/*
	NSData *test = [post sendXHRToURL:@"http://www.tumblr.com/api/dashboard" PostValues:postvalues];
	
	NSXMLParser *parser = [[NSXMLParser alloc] initWithData:test];
	[parser setDelegate:post];
	[parser setShouldProcessNamespaces:NO];
	[parser setShouldReportNamespacePrefixes:NO];
	[parser setShouldResolveExternalEntities:NO];
	
	[parser parse];
	[parser release];
	
	NSLog(@"%@: %@",post.title, post.body);
	 */
	
    [pool drain];
    return 0;
}
