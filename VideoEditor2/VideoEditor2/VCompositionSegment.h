//
//  VideoCompositionSegment.h
//  VideoEditor2
//
//  Created by Alexander on 9/23/15.
//  Copyright © 2015 Onix-Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

#import "VAsset.h"

@interface VCompositionSegment : NSObject

@property (nonatomic, readonly) CMTime duration;

@end
