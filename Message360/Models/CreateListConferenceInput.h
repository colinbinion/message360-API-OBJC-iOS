//
//  CreateListConferenceInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATELISTCONFERENCEINPUT
#define APIMATIC_CREATELISTCONFERENCEINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "InterruptedCallStatusEnum.h"
#import "InterruptedCallStatusEnumHelper.h"


//protocol defined for deserialization of JSON
@protocol CreateListConferenceInput
@end

@interface CreateListConferenceInput : NSObject

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* Which page of the overall response will be returned. Zero indexed
*/
@property NSNumber* page;

/**
* Number of individual resources listed in the response per page
*/
@property NSNumber* pageSize;

/**
* Only return conferences with the specified FriendlyName
*/
@property NSString* friendlyName;

/**
* TODO: Write general description for this field
*/
@property enum InterruptedCallStatusEnum status;

/**
* TODO: Write general description for this field
*/
@property NSString* dateCreated;

/**
* TODO: Write general description for this field
*/
@property NSString* dateUpdated;

@end
#endif