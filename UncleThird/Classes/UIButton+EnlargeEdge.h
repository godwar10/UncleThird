//
//  UIButton+EnlargeEdge.h
//  eShop
//
//  Created by xyzq on 15/6/16.
//  Copyright (c) 2015年 xyzq. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (EnlargeEdge)
- (void)setEnlargeEdge:(CGFloat)size;
- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;
@end
