#import <Foundation/Foundation.h>

@class ISKey, UIKBTree;

@interface ISData : NSObject

@property (nonatomic, strong) ISKey *cur;
@property (nonatomic, strong) NSMutableArray *keys;

- (void)addPoint:(CGPoint)p forKeyTree:(UIKBTree *)t;
- (void)addData:(CGPoint)p forKey:(NSString *)k;
- (void)end;

- (NSArray *)findMatches;

@end
