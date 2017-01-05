//
//  TagView.h
//  TagObjc
//
//  Created by Javi Pulido on 16/7/15.
//  Copyright (c) 2015 Javi Pulido. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE

@interface TagView : UIButton

- (instancetype) initWithTitle:(NSString *)title;
- (instancetype) initWithTitle:(NSString *)title andImage:(UIImage *)image;

@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic) IBInspectable UIColor *borderColor;
@property (nonatomic) IBInspectable UIColor *textColor;
@property (nonatomic) IBInspectable CGFloat paddingY;
@property (nonatomic) IBInspectable CGFloat paddingX;
@property (nonatomic) UIFont *textFont;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) void (^onTap)(TagView *);

@end
