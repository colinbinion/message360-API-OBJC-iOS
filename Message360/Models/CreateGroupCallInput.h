//
//  CreateGroupCallInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATEGROUPCALLINPUT
#define APIMATIC_CREATEGROUPCALLINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "HttpActionEnum.h"
#import "HttpActionEnumHelper.h"


//protocol defined for deserialization of JSON
@protocol CreateGroupCallInput
@end

@interface CreateGroupCallInput : NSObject

/**
* TODO: Write general description for this field
*/
@property NSString* fromCountryCode;

/**
* TODO: Write general description for this field
*/
@property NSString* from;

/**
* TODO: Write general description for this field
*/
@property NSString* toCountryCode;

/**
* TODO: Write general description for this field
*/
@property NSString* to;

/**
* TODO: Write general description for this field
*/
@property NSString* url;

/**
* TODO: Write general description for this field
*/
@property NSString* responseType;

/**
* TODO: Write general description for this field
*/
@property enum HttpActionEnum method;

/**
* TODO: Write general description for this field
*/
@property NSString* statusCallBackUrl;

/**
* TODO: Write general description for this field
*/
@property enum HttpActionEnum statusCallBackMethod;

/**
* TODO: Write general description for this field
*/
@property NSString* fallBackUrl;

/**
* TODO: Write general description for this field
*/
@property enum HttpActionEnum fallBackMethod;

/**
* TODO: Write general description for this field
*/
@property NSString* heartBeatUrl;

/**
* TODO: Write general description for this field
*/
@property enum HttpActionEnum heartBeatMethod;

/**
* TODO: Write general description for this field
*/
@property NSNumber* timeout;

/**
* TODO: Write general description for this field
*/
@property NSString* playDtmf;

/**
* TODO: Write general description for this field
*/
@property NSString* hideCallerId;

/**
* TODO: Write general description for this field
*/
@property NSNumber* record;

/**
* TODO: Write general description for this field
*/
@property NSString* recordCallBackUrl;

/**
* TODO: Write general description for this field
*/
@property enum HttpActionEnum recordCallBackMethod;

/**
* TODO: Write general description for this field
*/
@property NSNumber* transcribe;

/**
* TODO: Write general description for this field
*/
@property NSString* transcribeCallBackUrl;

@end
#endif