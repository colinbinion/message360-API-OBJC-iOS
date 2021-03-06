//
//  IfMachineEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#include "IfMachineEnumHelper.h"

/**
* Helper class implementation for IfMachineEnum to NSString conversion
*/
@implementation IfMachineEnumHelper

+(id) stringFromIfMachineEnum:(enum IfMachineEnum) ifMachineEnum withDefault: (id) defaultValue
{
    switch(ifMachineEnum)
    {
        case IfMachineCONTINUE:
            return @"continue";

        case IfMachineHANGUP:
            return @"hangup";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromIfMachineEnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [IfMachineEnumHelper stringFromIfMachineEnum:(enum IfMachineEnum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum IfMachineEnum) ifMachineEnumFromString:(NSString*) strValue
{
    NSArray* IfMachineEnumArray = [NSArray arrayWithObjects:
                                        @"continue",
                                        @"hangup",
                                        nil];

    return (enum IfMachineEnum) [IfMachineEnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) ifMachineEnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ IfMachineEnumHelper ifMachineEnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end