//
//  CreateViewNumberDetailsInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATEVIEWNUMBERDETAILSINPUT
#define APIMATIC_CREATEVIEWNUMBERDETAILSINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol CreateViewNumberDetailsInput
@end

@interface CreateViewNumberDetailsInput : NSObject

/**
* Get Phone number Detail
*/
@property NSString* phoneNumber;

/**
* Response type format xml or json
*/
@property NSString* responseType;

@end
#endif