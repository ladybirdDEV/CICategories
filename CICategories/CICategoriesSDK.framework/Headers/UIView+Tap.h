//
//  UIView+Tap.h
//  Meeting
//
//  Created by 戴健 on 2021/5/26.
//

#import <UIKit/UIKit.h>

typedef void (^TapBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Tap)

@property (nonatomic, copy) TapBlock tapBlock;

- (void)addTapGes:(TapBlock)block;

@end

NS_ASSUME_NONNULL_END
