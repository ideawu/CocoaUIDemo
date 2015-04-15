//
//  ThreeColumnController.m
//  CocoaUIDemo
//
//  Created by ideawu on 15-4-15.
//  Copyright (c) 2015年 ideawu. All rights reserved.
//

#import "ThreeColumnController.h"

@interface ThreeColumnController ()

@end

@implementation ThreeColumnController

- (void)viewDidLoad {
    [super viewDidLoad];
	self.navigationItem.title = @"Three Column";
	
	IView *view = [IView namedView:@"three-cols"];
	[self addIViewRow:view];
	[self reload];
}

/*
 func pan() {
 if panGesture.state == UIGestureRecognizerState.Ended {
 UIView.animateWithDuration(0.4, delay: 0, options: UIViewAnimationOptions.CurveEaseInOut, animations: { () -> Void in
 self.middleView.frame.origin.y = self.middleViewOriginY
 }, completion: { (success) -> Void in
 if success {
 self.middleViewTopSpaceLayout.constant = self.middleViewTopSpaceLayoutConstant
 }
 })
 return
 }
 let y = panGesture.translationInView(self.view).y
 middleViewTopSpaceLayout.constant = middleViewTopSpaceLayoutConstant + y
 }
*/

@end
