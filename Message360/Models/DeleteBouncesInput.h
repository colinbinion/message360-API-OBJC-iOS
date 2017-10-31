//
//  DeleteBouncesInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_DELETEBOUNCESINPUT
#define APIMATIC_DELETEBOUNCESINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol DeleteBouncesInput
@end

@interface DeleteBouncesInput : NSObject

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* The email address to remove from the bounce list
*/
@property NSString* email;

@end
#endif