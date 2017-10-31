//
//  ViewConferenceInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_VIEWCONFERENCEINPUT
#define APIMATIC_VIEWCONFERENCEINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol ViewConferenceInput
@end

@interface ViewConferenceInput : NSObject

/**
* The unique identifier of each conference resource
*/
@property NSString* conferencesid;

/**
* Response type format xml or json
*/
@property NSString* responseType;

@end
#endif