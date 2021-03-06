//
//  User.h
//  twitter
//
//  Created by David Wang on 11/8/15.
//  Copyright © 2015 David Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const UserDidLoginNotification;
extern NSString *const UserDidLogoutNotification;

@interface User : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *screenName;
@property (nonatomic, strong) NSURL *profileImageUrl;
@property (nonatomic, strong) NSString *tagline;
@property (strong, nonatomic) NSURL *bannerUrl;
@property (strong, nonatomic) NSURL *backgroundUrl;
@property (assign, nonatomic) NSInteger followersCount;
@property (assign, nonatomic) NSInteger friendsCount;

- (id)initWithDictionary:(NSDictionary *)dictionary;

+ (User *)currentUser;
+ (void)setCurrentUser:(User *)user;

+ (void)logout;
+ (void)login:(User *)user;
@end
