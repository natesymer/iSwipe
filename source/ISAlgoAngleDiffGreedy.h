//
//  ISAlgoAngleDiffGreedy.h
//  iSwipe
//
//  Created by Andrew Liu on 6/5/12.
//  Copyright (c) 2012 Wynd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ISData.h"
#import "ISKey.h"
#import "ISWord.h"

//matches first possible char it can match
@interface ISAlgoAngleDiffGreedy : NSObject
+ (NSMutableArray *)findMatch:(ISData *)data dict:(NSArray *)dictionary;
@end
