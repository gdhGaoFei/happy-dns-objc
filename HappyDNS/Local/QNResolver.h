//
//  QNResolver.h
//  HappyDNS
//
//  Created by bailong on 15/6/23.
//  Copyright (c) 2015年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QNResolverDelegate.h"

@interface QNResolver : NSObject <QNResolverDelegate>
- (NSArray *)query:(QNDomain *)domain;
- (instancetype)initWithAddres:(NSString *)address;
+ (instancetype)systemResolver;
@end
