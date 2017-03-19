//
//  GoToProgressHUD.h
//  GoSkinCare
//
//  Created by luck32 on 12/18/15.
//  Copyright © 2015 luck32. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GoToProgressHUD : NSObject

+ (GoToProgressHUD*)progressHUD;

+ (void)showWithStatus:(NSString*)status;
+ (void)dismiss;

@end
