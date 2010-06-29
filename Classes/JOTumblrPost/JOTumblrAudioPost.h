//
//  JOTumblrAudioPost.h
//  JOTumblr
//
//  Created by Jeremy Foo on 6/30/10.
//  Copyright 2010 ORNYX. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JOTumblrAudioPost : NSObject {
	NSString *caption;
	NSData *data;
	NSString *externallyHostedURL;
}

@property (nonatomic, retain) NSString *caption;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *externallyHostedURL;

@end
