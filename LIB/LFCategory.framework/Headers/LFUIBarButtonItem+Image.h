//
//  UIBarButtonItem+Image.h
//  LaiFeng
//
//  Created by xinliu on 14-4-25.
//  Copyright (c) 2014年 live Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface UIBarButtonItem (LFCustomImageAdditions)


// 普通item
+ (UIBarButtonItem *)lf_rsBarButtonItemWithTitle:(NSString *)title
                                          target:(id)target
                                          action:(SEL)selector DEPRECATED_MSG_ATTRIBUTE("不建议使用");

// 目前一般作为导航栏rightIem使用
+ (UIBarButtonItem *)lf_rsBarButtonItemWithTitle:(NSString *)title
                                           image:(UIImage *)image
                                heightLightImage:(UIImage *)hlImage
                                    disableImage:(UIImage *)disImage
                                          target:(id)target
                                          action:(SEL)selector DEPRECATED_MSG_ATTRIBUTE("不建议使用");

// 主要作为导航栏leftItem
+ (UIBarButtonItem *)lf_rsLeftBarButtonItemWithTitle:(NSString *)title
                                               image:(UIImage *)image
                                    heightLightImage:(UIImage *)hlImage
                                        disableImage:(UIImage *)disImage
                                                font:(UIFont *)font
                                              offset:(CGFloat)offset//调整tite左边距
                                            leftEdge:(CGFloat)edge//调整按钮左边距
                                              target:(id)target
                                              action:(SEL)selector DEPRECATED_MSG_ATTRIBUTE("不建议使用");

// 自定义一个button
+ (UIButton*)lf_rsCustomBarButtonWithTitle:(NSString*)title
                                     image:(UIImage *)image
                          heightLightImage:(UIImage *)hlImage
                              disableImage:(UIImage *)disImage
                                      font:(UIFont *)font
                                    target:(id)target
                                    action:(SEL)selector DEPRECATED_MSG_ATTRIBUTE("不建议使用");



// 兼容以前代码 再加回去 （不要删库方法 只添加就好了！）

+ (UIBarButtonItem *)lf_rsLeftBarButtonItemWithTitle:(NSString *)title
                                               image:(UIImage *)image
                                    heightLightImage:(UIImage *)hlImage
                                        disableImage:(UIImage *)disImage
                                              target:(id)target
                                              action:(SEL)selector DEPRECATED_MSG_ATTRIBUTE("不建议使用");

+ (UIButton*)lf_rsCustomBarButtonWithTitle:(NSString*)title
                                     image:(UIImage *)image
                          heightLightImage:(UIImage *)hlImage
                              disableImage:(UIImage *)disImage
                                    target:(id)target
                                    action:(SEL)selector DEPRECATED_MSG_ATTRIBUTE("不建议使用");


@end



