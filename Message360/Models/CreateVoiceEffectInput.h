//
//  CreateVoiceEffectInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATEVOICEEFFECTINPUT
#define APIMATIC_CREATEVOICEEFFECTINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "AudioDirectionEnum.h"
#import "AudioDirectionEnumHelper.h"


//protocol defined for deserialization of JSON
@protocol CreateVoiceEffectInput
@end

@interface CreateVoiceEffectInput : NSObject

/**
* TODO: Write general description for this field
*/
@property NSString* callSid;

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* TODO: Write general description for this field
*/
@property enum AudioDirectionEnum audioDirection;

/**
* value between -14 and 14
*/
@property NSNumber* pitchSemiTones;

/**
* value between -1 and 1
*/
@property NSNumber* pitchOctaves;

/**
* value greater than 0
*/
@property NSNumber* pitch;

/**
* value greater than 0
*/
@property NSNumber* rate;

/**
* value greater than 0
*/
@property NSNumber* tempo;

@end
#endif