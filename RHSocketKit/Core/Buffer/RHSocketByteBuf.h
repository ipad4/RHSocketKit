//
//  RHSocketByteBuf.h
//  Example
//
//  Created by zhuruhong on 16/8/19.
//  Copyright © 2016年 zhuruhong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RHSocketByteBuf : NSObject

@property (nonatomic, strong, readonly) NSMutableData *buffer;

- (instancetype)initWithData:(NSData *)data;
- (NSData *)data;
- (NSUInteger)length;
- (void)clear;

@end

@interface RHSocketByteBuf (NSData)

- (void)writeData:(NSData *)param;

- (NSData *)readData:(NSUInteger)index length:(NSUInteger)length;

@end

@interface RHSocketByteBuf (NSNumber)

- (void)writeInt8:(int8_t)param;
- (void)writeInt16:(int16_t)param;
- (void)writeInt16:(int16_t)param endianSwap:(BOOL)swap;
- (void)writeInt32:(int32_t)param;
- (void)writeInt32:(int32_t)param endianSwap:(BOOL)swap;
- (void)writeInt64:(int64_t)param;
- (void)writeInt64:(int64_t)param endianSwap:(BOOL)swap;

- (void)writeFloat32:(float)param;
- (void)writeFloat32:(float)param endianSwap:(BOOL)swap;

- (void)writeDouble64:(double)param;
- (void)writeDouble64:(double)param endianSwap:(BOOL)swap;

- (int8_t)readInt8:(NSUInteger)index;
- (int16_t)readInt16:(NSUInteger)index;
- (int16_t)readInt16:(NSUInteger)index endianSwap:(BOOL)swap;
- (int32_t)readInt32:(NSUInteger)index;
- (int32_t)readInt32:(NSUInteger)index endianSwap:(BOOL)swap;
- (int64_t)readInt64:(NSUInteger)index;
- (int64_t)readInt64:(NSUInteger)index endianSwap:(BOOL)swap;

- (float)readFloat32:(NSUInteger)index;
- (float)readFloat32:(NSUInteger)index endianSwap:(BOOL)swap;

- (double)readDouble64:(NSUInteger)index;
- (double)readDouble64:(NSUInteger)index endianSwap:(BOOL)swap;

@end

@interface RHSocketByteBuf (NSString)

- (void)writeString:(NSString *)param;

- (NSString *)readString:(NSUInteger)index length:(NSUInteger)length;

@end
