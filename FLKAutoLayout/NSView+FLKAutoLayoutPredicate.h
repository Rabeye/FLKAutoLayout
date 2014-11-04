//
// Created by florian on 26.03.13.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>


typedef struct {
    NSLayoutRelation relation;
    CGFloat multiplier;
    CGFloat constant;
    UILayoutPriority priority;
} FLKAutoLayoutPredicate;

extern FLKAutoLayoutPredicate FLKAutoLayoutPredicateMake(NSLayoutRelation relation, CGFloat multiplier, CGFloat constant, UILayoutPriority priority);


@interface NSView (FLKAutoLayoutPredicate)

- (NSLayoutConstraint*)applyPredicate:(FLKAutoLayoutPredicate)predicate toView:(NSView*)toView attribute:(NSLayoutAttribute)attribute;
- (NSLayoutConstraint*)applyPredicate:(FLKAutoLayoutPredicate)predicate toView:(NSView*)view fromAttribute:(NSLayoutAttribute)fromAttribute toAttribute:(NSLayoutAttribute)toAttribute;

@end