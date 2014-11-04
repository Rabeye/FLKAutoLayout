//
// Created by florian on 25.03.13.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface NSView (FLKAutoLayout)

- (NSArray*)alignAttribute:(NSLayoutAttribute)attribute toAttribute:(NSLayoutAttribute)toAttribute ofView:(NSView*)view predicate:(NSString*)predicate;


- (NSArray*)alignToView:(NSView*)view;
- (NSArray*)alignTop:(NSString*)top leading:(NSString*)leading bottom:(NSString*)bottom trailing:(NSString*)trailing toView:(NSView*)view;
- (NSArray*)alignTop:(NSString*)top leading:(NSString*)leading toView:(NSView*)view;
- (NSArray*)alignBottom:(NSString*)bottom trailing:(NSString*)trailing toView:(NSView*)view;
- (NSArray*)alignTop:(NSString*)top bottom:(NSString*)bottom toView:(NSView*)view;
- (NSArray*)alignLeading:(NSString*)leading trailing:(NSString*)trailing toView:(NSView*)view;


- (NSArray*)alignLeadingEdgeWithView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)alignTrailingEdgeWithView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)alignTopEdgeWithView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)alignBottomEdgeWithView:(NSView*)view predicate:(NSString*)predicate;

- (NSArray*)alignBaselineWithView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)alignCenterXWithView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)alignCenterYWithView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)alignCenterWithView:(NSView*)view;


- (NSArray*)constrainWidth:(NSString*)widthPredicate height:(NSString*)heightPredicate;
- (NSArray*)constrainWidth:(NSString*)widthPredicate;
- (NSArray*)constrainHeight:(NSString*)heightPredicate;

- (NSArray*)constrainWidthToView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)constrainHeightToView:(NSView*)view predicate:(NSString*)predicate;


- (NSArray*)constrainTopSpaceToView:(NSView*)view predicate:(NSString*)predicate;
- (NSArray*)constrainLeadingSpaceToView:(NSView*)view predicate:(NSString*)predicate;



+ (NSArray*)alignAttribute:(NSLayoutAttribute)attribute ofViews:(NSArray*)ofViews toViews:(NSArray*)toViews predicate:(NSString*)predicate;
+ (NSArray*)alignAttribute:(NSLayoutAttribute)attribute ofViews:(NSArray*)views toAttribute:(NSLayoutAttribute)toAttribute ofViews:(NSArray*)toViews predicate:(NSString*)predicate;


+ (NSArray*)equalWidthForViews:(NSArray*)views;
+ (NSArray*)equalHeightForViews:(NSArray*)views;


+ (NSArray*)alignLeadingEdgesOfViews:(NSArray*)views;
+ (NSArray*)alignTrailingEdgesOfViews:(NSArray*)views;
+ (NSArray*)alignTopEdgesOfViews:(NSArray*)views;
+ (NSArray*)alignBottomEdgesOfViews:(NSArray*)views;
+ (NSArray*)alignLeadingAndTrailingEdgesOfViews:(NSArray*)views;
+ (NSArray*)alignTopAndBottomEdgesOfViews:(NSArray*)views;


+ (NSArray*)spaceOutViewsHorizontally:(NSArray*)views predicate:(NSString*)predicate;
+ (NSArray*)spaceOutViewsVertically:(NSArray*)views predicate:(NSString*)predicate;

+ (NSArray*)distributeCenterXOfViews:(NSArray*)views inView:(NSView*)view;
+ (NSArray*)distributeCenterYOfViews:(NSArray*)views inView:(NSView*)inView;

@end