//
//  AppDelegate.m
//  Localization
//
//  Created by zhaojw on 15/9/13.
//  Copyright (c) 2015年 zhaojw. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
    
    NSString *filePath = @"/Users/zhaojw/Desktop/iOSAppIcon/iOSAppIcon.xcodeproj";
    NSMutableDictionary *dataStore = [[NSMutableDictionary alloc] initWithContentsOfFile:[filePath stringByAppendingPathComponent:@"project.pbxproj"]];
    
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

@end
