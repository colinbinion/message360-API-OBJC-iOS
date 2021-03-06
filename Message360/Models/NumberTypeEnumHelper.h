//
//  NumberTypeEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_NUMBERTYPEENUMHELPER
#define APIMATIC_NUMBERTYPEENUMHELPER

#include "NumberTypeEnum.h"

/**
* Helper class interface for NumberTypeEnum to NSString conversion
*/
@interface NumberTypeEnumHelper : NSObject

+(id) stringFromNumberTypeEnum:(enum NumberTypeEnum) numberTypeEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromNumberTypeEnumArray:(NSArray<NSNumber*>*) array;


+(enum NumberTypeEnum) numberTypeEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) numberTypeEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif