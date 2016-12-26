//
//  MCPoper.h
//  test
//
//  Created by M.C on 16/12/22.
//  Copyright © 2016年 c. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MCPoper : NSObject

@property (nonatomic, strong, nonnull) UIView *customerView;
@property (nonatomic, strong, nonnull) UIView *fromView;

@property (nonatomic, assign) BOOL isShow;

- (nonnull instancetype)initWithCustomView:(nonnull UIView *)customerView
                                  fromView:(nonnull UIView *)fromView;

- (void)show;
- (void)dissmiss;
@end
