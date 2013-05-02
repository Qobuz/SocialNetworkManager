//
//  SocialNetworkManagerDelegate.h
//  SocialNetwork
//
//  Created by Raphael Pinto on 25/04/13.
//  Copyright (c) 2013 Raphael Pinto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FacebookSDK/FacebookSDK.h>


@class SNMTweet;


@protocol SocialNetworkManagerDelegate <NSObject>
- (UIViewController*)viewControllerToPresentSocialNetwork;

@optional


- (void)facebookSessionDidSuccessfullyLogin;
- (void)facebookSessionOpenDidCancel;
- (void)facebookOSIntegratedDisabledWithStatus:(FBSessionState)_Status andError:(NSError*)_Error;
- (void)facebookSessionDidFailLoginWithStatus:(FBSessionState)_Status andError:(NSError*)_Error;


- (void)facebookDidSuccessfullyShare;
- (void)facebookDidFailShareWithStatus:(FBSessionState)_Status andError:(NSError*)_Error;

- (void)facebookFriendPickerCancelled;
- (void)facebookFriendPickerDidFinishPicking:(NSMutableArray*)_Selection;


- (void)NoEmailConfigured;
- (void)EmailSent;
- (void)EmailSaved;
- (void)EmailCancelled;
- (void)EmailFail;


- (void)twitterSessionDidSuccessfullyLogin;
- (void)twitterSessionDidFailLoginWithError:(NSError*)_Error;

- (void)twitterDidSuccessfullyShare;
- (void)twitterDidCancelShare;

- (void)didGetTweet:(SNMTweet*)_Tweet;
- (void)didFailGettingTweet:(NSError*)_Error;


- (void)googlePlusDidSuccessfullyShare;
- (void)googlePlusDidCancelShare;

@end
