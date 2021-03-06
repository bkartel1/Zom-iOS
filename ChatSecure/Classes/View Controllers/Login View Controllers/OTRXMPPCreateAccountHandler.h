//
//  OTRXMPPCreateAccountHandler.h
//  ChatSecure
//
//  Created by David Chiles on 5/13/15.
//  Copyright (c) 2015 Chris Ballinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTRXMPPLoginHandler.h"

@interface OTRXMPPCreateAccountHandler : OTRXMPPLoginHandler

@property (nonatomic) BOOL disableCertPinning;
@property (nonatomic, strong) NSString *password;

@end
