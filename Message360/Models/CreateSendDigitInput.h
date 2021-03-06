//
//  CreateSendDigitInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATESENDDIGITINPUT
#define APIMATIC_CREATESENDDIGITINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "DirectionEnum.h"
#import "DirectionEnumHelper.h"


//protocol defined for deserialization of JSON
@protocol CreateSendDigitInput
@end

@interface CreateSendDigitInput : NSObject

/**
* The unique identifier of each call resource
*/
@property NSString* callSid;

/**
* DTMF digits to play to the call. 0-9, #, *, W, or w
*/
@property NSString* playDtmf;

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* The leg of the call DTMF digits should be sent to
*/
@property enum DirectionEnum playDtmfDirection;

@end
#endif