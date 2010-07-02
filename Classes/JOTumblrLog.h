//
//  JOTumblrLog.h
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

@interface JOTumblrLog : NSObject {
	
	// api specific
	NSString *title;
	NSString *name;
	NSURL *url;
	NSURL *avatarURL;
	BOOL primary;
	
	NSString *description;
	NSString *customCSS;
	NSString *themeSource;

	NSMutableArray *posts;
	
	// xml specific
	NSTimeZone *timezone;
	NSString *cname;
}

@property (readonly) NSString *title;
@property (readonly) NSString *name;
@property (readonly) NSURL *url;
@property (readonly) NSURL *avatarURL;
@property (readonly, getter=isPrimary) BOOL primary;

@property (readonly) NSString *description;
@property (readonly) NSString *customCSS;
@property (readonly) NSString *themeSource;

@property (readonly) NSMutableArray *posts;

// xml specific
@property (readonly) NSTimeZone *timezone;
@property (readonly) NSString *cname;

@end
