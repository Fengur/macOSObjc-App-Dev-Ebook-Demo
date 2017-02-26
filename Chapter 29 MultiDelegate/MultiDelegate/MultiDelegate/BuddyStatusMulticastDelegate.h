//
//  BuddyStatusMulticastDelegate.h
//  MultiDelegate
//
//  Created by zhaojw on 10/4/15.
//  Copyright © 2015 zhaojw. All rights reserved.
//
#import "GCDMulticastDelegate.h"
#import "XXXMultiDelegateModule.h"

@class Buddy;
@interface BuddyStatusMulticastDelegate : XXXMultiDelegateModule
- (void)buddyOfflineRequest:(Buddy *)buddy;
- (void)buddyOnlineRequest:(Buddy *)buddy;

@end

@protocol BuddyStatusDelegate
@optional
- (void)buddyStatus:(BuddyStatusMulticastDelegate *)sender
    didReceiveBuddyOfflineRequest:(Buddy *)buddy;
- (void)buddyStatus:(BuddyStatusMulticastDelegate *)sender
    didReceiveBuddyOnlineRequest:(Buddy *)buddy;

@end
