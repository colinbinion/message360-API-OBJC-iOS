//
//  ActivateStatusEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_ACTIVATESTATUSENUMHELPER
#define APIMATIC_ACTIVATESTATUSENUMHELPER

#include "ActivateStatusEnum.h"

/**
* Helper class interface for ActivateStatusEnum to NSString conversion
*/
@interface ActivateStatusEnumHelper : NSObject

+(id) stringFromActivateStatusEnum:(enum ActivateStatusEnum) activateStatusEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromActivateStatusEnumArray:(NSArray<NSNumber*>*) array;


+(enum ActivateStatusEnum) activateStatusEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) activateStatusEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif