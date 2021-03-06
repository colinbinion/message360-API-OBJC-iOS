//
//  IfMachineEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_IFMACHINEENUMHELPER
#define APIMATIC_IFMACHINEENUMHELPER

#include "IfMachineEnum.h"

/**
* Helper class interface for IfMachineEnum to NSString conversion
*/
@interface IfMachineEnumHelper : NSObject

+(id) stringFromIfMachineEnum:(enum IfMachineEnum) ifMachineEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromIfMachineEnumArray:(NSArray<NSNumber*>*) array;


+(enum IfMachineEnum) ifMachineEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) ifMachineEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif