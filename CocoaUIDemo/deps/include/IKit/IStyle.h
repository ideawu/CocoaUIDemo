//
//  Created by ideawu on 14-12-26.
//  Copyright (c) 2014年 test. All rights reserved.
//
#ifndef IKit_IStyle_h
#define IKit_IStyle_h

#import <UIKit/UIKit.h>

// groupTableViewBackgroundColor: #efeff4

// outerBox: 包含 margin, border, padding, content
// frameBox: 包含 border, padding, content
// innerBox: 包含 content

@interface IStyle : NSObject

/**
 * The width, including border, padding, content
 */
@property (nonatomic, readonly) CGFloat width;
/**
 * The height, including border, padding, content
 */
@property (nonatomic, readonly) CGFloat height;
/**
 * The size, both width and height include border, padding, content
 */
@property (nonatomic, readonly) CGSize size;
/**
 * The content width
 */
@property (nonatomic, readonly) CGFloat innerWidth;
/**
 * The content height
 */
@property (nonatomic, readonly) CGFloat innerHeight;
/**
 * The width, including margin, border, padding, content
 */
@property (nonatomic, readonly) CGFloat outerWidth;
/**
 * The height, including margin, border, padding, content
 */
@property (nonatomic, readonly) CGFloat outerHeight;

/**
 * supported property names: float, clear, width, height, margin
 * float=center will implicitly apply clear=right
 * float=center in a resizeWidth view, the behaviour is undefined
 */
- (void)set:(NSString *)css;

@end

#endif
