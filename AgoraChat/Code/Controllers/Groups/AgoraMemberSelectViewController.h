/************************************************************
 *  * Hyphenate
 * __________________
 * Copyright (C) 2016 Hyphenate Inc. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Inc.
 */

#import <UIKit/UIKit.h>
#import "ACDGroupMemberSelectViewController.h"

@class AgoraUserModel;
#import "AgoraGroupUIProtocol.h"

//typedef NS_ENUM(NSUInteger, AgoraContactSelectStyle) {
//    AgoraContactSelectStyle_Add      =       0,
//    AgoraContactSelectStyle_Invite
//};

@interface AgoraMemberSelectViewController : AgoraChatBaseViewController

@property (nonatomic, assign) AgoraContactSelectStyle style;

@property (nonatomic, assign) id<AgoraGroupUIProtocol> delegate;

- (instancetype)initWithInvitees:(NSArray *)aHasInvitees
                  maxInviteCount:(NSInteger)aCount;

@end
