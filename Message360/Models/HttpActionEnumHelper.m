//
//  HttpActionEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#include "HttpActionEnumHelper.h"

/**
* Helper class implementation for HttpActionEnum to NSString conversion
*/
@implementation HttpActionEnumHelper

+(id) stringFromHttpActionEnum:(enum HttpActionEnum) httpActionEnum withDefault: (id) defaultValue
{
    switch(httpActionEnum)
    {
        case HttpActionGET:
            return @"GET";

        case HttpActionPOST:
            return @"POST";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromHttpActionEnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [HttpActionEnumHelper stringFromHttpActionEnum:(enum HttpActionEnum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum HttpActionEnum) httpActionEnumFromString:(NSString*) strValue
{
    NSArray* HttpActionEnumArray = [NSArray arrayWithObjects:
                                        @"GET",
                                        @"POST",
                                        nil];

    return (enum HttpActionEnum) [HttpActionEnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) httpActionEnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ HttpActionEnumHelper httpActionEnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end