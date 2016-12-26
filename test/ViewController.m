//
//  ViewController.m
//  test
//
//  Created by M.C on 16/12/9.
//  Copyright © 2016年 c. All rights reserved.
//

#import "ViewController.h"
#import "UIView+JZGAdd.h"
#import "MCPoper.h"

@interface ViewController ()
@property (retain, nonatomic) IBOutlet UIView *customView;


@property (nonatomic, strong) UIView *myView;
@property (nonatomic, strong) UIView *maskView;

@property (nonatomic, strong) MCPoper *pop;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    self.myView = [[UIView alloc] init];
    self.myView.backgroundColor = [UIColor redColor];
    self.myView.frame = CGRectMake(0, -50, self.view.bounds.size.width, 100);
   
    self.pop = [[MCPoper alloc] initWithCustomView:self.myView fromView:self.customView];
    
}

- (IBAction)button:(id)sender {
    if (self.pop.isShow) {
        [self.pop dissmiss];
    }else{
        [self.pop show];
    }
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)dealloc {
    [_customView release];
    [super dealloc];
}
@end
