//
//  AppDelegate.h
//  AirTube
//
//  Created by Diogo Carneiro on 27/05/13.
//  Copyright (c) 2013 Diogo Carneiro. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSString+RegularExpressionSearch.h"
#import "LBYouTubeExtractor.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>{
	BOOL stopRunning;
}

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, strong) LBYouTubeExtractor* extractor;

- (IBAction)stopRunning:(id)sender;

@end