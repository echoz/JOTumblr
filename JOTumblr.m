#import <Foundation/Foundation.h>
#import "JOTumblrPhotoPost.h"

int main (int argc, const char * argv[]) {
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

	JOTumblrPhotoPost *photo = [[JOTumblrPhotoPost alloc] init];
	
	photo.title = @"asdsaa";
	NSLog(@"%@", photo.source);

    [pool drain];
    return 0;
}
