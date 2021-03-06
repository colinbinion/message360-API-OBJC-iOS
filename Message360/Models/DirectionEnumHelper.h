//
//  DirectionEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_DIRECTIONENUMHELPER
#define APIMATIC_DIRECTIONENUMHELPER

#include "DirectionEnum.h"

/**
* Helper class interface for DirectionEnum to NSString conversion
*/
@interface DirectionEnumHelper : NSObject

+(id) stringFromDirectionEnum:(enum DirectionEnum) directionEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromDirectionEnumArray:(NSArray<NSNumber*>*) array;


+(enum DirectionEnum) directionEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) directionEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif