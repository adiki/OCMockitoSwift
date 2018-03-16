//
//  Copyright © 2018 Aleksander Zubala. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, TestClassOptions) {
    TestClassOptionFoo = 0x1,
    TestClassOptionBar = 0x2,
};


@interface TestClass : NSObject

- (void)doSomethingNoArguments;

- (void)doSomethingWithString:(NSString *)string;

- (void)doSomethingWithInt:(NSUInteger)integer;

- (NSString *)returnObjectMethodNoArguments;

- (NSInteger)returnIntegerMethodNoArguments;

- (TestClassOptions)returnOptionMethodNoArguments;

@end
