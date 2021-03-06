//
//  HttpActionEnum.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_HTTPACTIONENUMHELPER
#define APIMATIC_HTTPACTIONENUMHELPER

#include "HttpActionEnum.h"

/**
* Helper class interface for HttpActionEnum to NSString conversion
*/
@interface HttpActionEnumHelper : NSObject

+(id) stringFromHttpActionEnum:(enum HttpActionEnum) httpActionEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromHttpActionEnumArray:(NSArray<NSNumber*>*) array;


+(enum HttpActionEnum) httpActionEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) httpActionEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif