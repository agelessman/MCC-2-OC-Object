//
//  MCPoper.m
//  test
//
//  Created by M.C on 16/12/22.
//  Copyright © 2016年 c. All rights reserved.
//

#import "MCPoper.h"

@interface MCPoper ()
@property (nonatomic, strong) UIView *maskView;
@property (nonatomic, assign) BOOL clipsStatus;
@property (nonatomic, assign) CGRect originalFrame;
@property (nonatomic, copy) UIColor *originalBackgroundColor;


@end
@implementation MCPoper

- (instancetype)initWithCustomView:(UIView *)customerView fromView:(UIView *)fromView {
    self = [super init];
    if (self) {
        _customerView = customerView;
        _fromView = fromView;
        
        _clipsStatus = fromView.clipsToBounds;
        _originalFrame = fromView.frame;
        _originalBackgroundColor = fromView.backgroundColor;
   
        self.maskView = [[UIView alloc] init];
        self.maskView.backgroundColor = [UIColor blackColor];
        self.maskView.alpha = 0.0;
        [self.maskView addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(dissmiss)]];
        
        self.fromView.backgroundColor = [UIColor clearColor];
        
        if (self.fromView.clipsToBounds == NO) {
            self.fromView.clipsToBounds = YES;
        }
        
        CGFloat fromViewHeight = self.fromView.bounds.size.height;
        CGFloat fromViewWidth = self.fromView.bounds.size.width;
        UIView *superView = self.fromView.superview;
        CGFloat maxHeight = superView.bounds.size.height - CGRectGetMaxY(self.fromView.frame);
        CGFloat customViewDiff = self.customerView.bounds.size.height - fromViewHeight;
        
        self.maskView.frame = CGRectMake(0, fromViewHeight, fromViewWidth, maxHeight);
        self.customerView.frame = CGRectMake(0, -customViewDiff, fromViewWidth, self.customerView.bounds.size.height);
        
        [self.fromView insertSubview:self.customerView atIndex:0];
        [self.fromView insertSubview:self.maskView atIndex:0];
        
        self.customerView.hidden = YES;
        self.maskView.hidden = YES;
    }
    return self;
}

- (void)show {
    
    if (self.isShow) {
        [self dissmiss];
    }
    
    if (self.fromView.clipsToBounds == NO) {
        self.fromView.clipsToBounds = YES;
    }
    
    self.customerView.hidden = NO;
    self.maskView.hidden = NO;
    
    CGFloat fromViewWidth = self.fromView.bounds.size.width;
    UIView *superView = self.fromView.superview;
    CGFloat maxHeight = superView.bounds.size.height - CGRectGetMaxY(self.fromView.frame);

    
    self.fromView.frame = CGRectMake(self.fromView.frame.origin.x, self.fromView.frame.origin.y, fromViewWidth, maxHeight);
    
    [UIView animateWithDuration:0.5 delay:0 options:UIViewAnimationOptionCurveEaseInOut animations:^{
        self.customerView.transform = CGAffineTransformMakeTranslation(0, self.customerView.bounds.size.height);
        self.maskView.alpha = 0.15;
        self.isShow = YES;
    } completion:nil];
   
}

- (void)dissmiss {
    
    [UIView animateWithDuration:0.5 delay:0 options:UIViewAnimationOptionCurveEaseInOut animations:^{
        self.customerView.transform = CGAffineTransformIdentity;
        self.maskView.alpha = 0.0;
    } completion:^(BOOL finished) {
        
        self.customerView.hidden = YES;
        self.maskView.hidden = YES;
        self.fromView.frame = self.originalFrame;
        self.fromView.clipsToBounds = self.clipsStatus;
        self.isShow = NO;
    }];
}
@end
