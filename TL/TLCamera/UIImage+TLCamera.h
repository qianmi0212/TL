//
//  UIImage+TLCamera.h
//  TLCamera
//
//  Created by lichun on 2021/10/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (TLCamera)

+ (UIImage *)tl_imageWithNamed:(NSString *)name;

- (UIImage *)tl_fixOrientation;

@end

NS_ASSUME_NONNULL_END
