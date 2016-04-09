//
//  RestApi.h
//  iOSBlogReader
//
//  Created by everettjf on 16/4/7.
//  Copyright © 2016年 everettjf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestDomainListModel.h"
#import "RestLinkListModel.h"

@interface RestApi : NSObject

+ (RestApi*)api;

- (void)queryDomainList:(void(^)(RestDomainListModel* model, NSError *error))complete;
- (void)queryFeedList:(void(^)(RestLinkListModel * model, NSError *error))complete url:(NSString*)url;
- (void)queryLinkList:(NSUInteger)aspectID complete:(void(^)(RestLinkListModel* model, NSError *error))complete url:(NSString*)url;

@end