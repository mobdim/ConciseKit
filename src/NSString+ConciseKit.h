#import <Foundation/Foundation.h>

@interface NSString (ConciseKit)

- (NSString *)$append:(NSString *)aString;
- (NSString *)$prepend:(NSString *)aString;
- (NSArray *)$split:(NSString *)aString;
- (NSArray *)$split;
- (NSString *)$chop;
- (NSString *)$capitalize;
- (NSString *)$downcase;
- (NSString *)$upcase;
- (NSString *)$mult:(NSUInteger)times;
- (NSString *)$center:(NSUInteger)width;
- (NSString *)$center:(NSUInteger)width str:(NSString *)aString;
- (BOOL)$includes:(NSString *)aString;
- (NSString *)appendPath:(NSString *)aString;
- (NSString *)$trim;
- (BOOL)equals:(NSString*)string;
- (BOOL)notEquals:(NSString*)string;
- (NSArray *)$chars;

@end

@interface NSMutableString (ConciseKit)

- (NSMutableString *)append_:(NSString *)aString;
- (NSMutableString *)prepend_:(NSString *)aString;
- (NSMutableString *)insert:(NSString *)aString at:(NSUInteger)anIndex;
- (NSMutableString *)set:(NSString *)aString;

@end
