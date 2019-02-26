//
//  LNCaptureSessionOptions.h
//  Screen Capture
//
//  Created by Levi Nunnink on 2/26/19.
//  Copyright © 2019 Levi Nunnink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LNCaptureSessionOptions : NSObject

+(LNCaptureSessionOptions*)currentSession;

@property (strong, nullable) AVCaptureDevice *mic;
@property (assign) BOOL showMouseClicks;
@property (assign) int startDelay;

@end

NS_ASSUME_NONNULL_END
