//
//  TagListView.h
//  TagObjc
//
//  Created by Javi Pulido on 16/7/15.
//  Copyright (c) 2015 Javi Pulido. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TagView;

IB_DESIGNABLE

@interface TagListView : UIView

@property (nonatomic) IBInspectable UIColor *textColor;
@property (nonatomic) IBInspectable UIColor *tagBackgroundColor;
@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic) IBInspectable UIColor *borderColor;
@property (nonatomic) IBInspectable CGFloat paddingY;
@property (nonatomic) IBInspectable CGFloat paddingX;
@property (nonatomic) IBInspectable CGFloat marginY;
@property (nonatomic) IBInspectable CGFloat marginX;
@property (nonatomic) UIFont *textFont;


// Delegate variables
@property (nonatomic) CGFloat tagViewHeight;
@property (nonatomic) NSMutableArray *tagViews;
@property (nonatomic) int rows;

- (void)addTagsAccordingToDataSourceArray:(NSArray<NSString *> *)dataSourceArray withOnTapForEach:(void(^)(TagView *tagView))onTapBlock;
- (TagView *)addTag:(NSString *)title;
- (TagView *)addTag:(NSString *)title withImage:(UIImage *)image;
- (TagView *)addTag:(NSString *)title withImage:(UIImage *)image andMaximumWidth:(CGFloat)width;
- (void)removeTag:(NSString *)title;
- (void)removeAllTags;

@end
