//
//  UIColor+GRJColor.h
//  GRJTolCayFrwk
//
//  Created by apple on 2017/2/28.
//  Copyright © 2017年 Global Barter. All rights reserved.
//

#import <UIKit/UIKit.h>

//#ff353e
#define GRJMainColor [UIColor colorWithRed: (255) / 255.0 green:(45) / 255.0 blue:(54) / 255.0 alpha:1]


#define GRJColor(r , g, b) [UIColor colorWithRed: (r) / 255.0 green:(g) / 255.0 blue:(b) / 255.0 alpha:1]

@interface UIColor (GRJColor)


// 默认alpha位1
+ (UIColor *)colorWithHexString:(NSString *)color;

//从十六进制字符串获取颜色，
//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

//随机颜色
+(UIColor *) randomColor;









//FlatColors

+ (UIColor *)flatTurquoiseColor;

+ (UIColor *)flatGreenSeaColor;

+ (UIColor *)flatEmeraldColor;

+ (UIColor *)flatNephritisColor;

+ (UIColor *)flatPeterRiverColor;

+ (UIColor *)flatBelizeHoleColor;

+ (UIColor *)flatAmethystColor;

+ (UIColor *)flatWisteriaColor;

+ (UIColor *)flatWetAsphaltColor;

+ (UIColor *)flatMidnightBlueColor;

+ (UIColor *)flatSunFlowerColor;

+ (UIColor *)flatOrangeColor;

+ (UIColor *)flatCarrotColor;

+ (UIColor *)flatPumpkinColor;

+ (UIColor *)flatAlizarinColor;

+ (UIColor *)flatPomegranateColor;

+ (UIColor *)flatCloudsColor;

+ (UIColor *)flatSilverColor;

+ (UIColor *)flatConcreteColor;

+ (UIColor *)flatAsbestosColor;
@end
