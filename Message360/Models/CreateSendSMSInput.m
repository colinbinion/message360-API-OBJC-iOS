//
//  CreateSendSMSInput.m
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#import "CreateSendSMSInput.h"

@implementation CreateSendSMSInput

/**
* From Country Code
*/
@synthesize fromcountrycode;

/**
* SMS enabled Message360 number to send this message from
*/
@synthesize from;

/**
* To country code
*/
@synthesize tocountrycode;

/**
* Number to send the SMS to
*/
@synthesize to;

/**
* Text Message To Send
*/
@synthesize body;

/**
* Response type format xml or json
*/
@synthesize responseType;

/**
* Specifies the HTTP method used to request the required URL once SMS sent.
*/
@synthesize method;

/**
* URL that can be requested to receive notification when SMS has Sent. A set of default parameters will be sent here once the SMS is finished.
*/
@synthesize messagestatuscallback;

-(id)init
{
    if (self = [super init])
    {
        self.fromcountrycode = 1;
        self.tocountrycode = 1;
        self.responseType = @"json";
    }
    return self;
}

 /**
 * For serialization of enum HttpActionEnum type property as NSString*
 */
-(id) JSONObjectForMethod
{
     
    return [HttpActionEnumHelper stringFromHttpActionEnum:(enum HttpActionEnum) method withDefault: nil];

}

/**
 * For deserialization of enum HttpActionEnum type property from NSString*
 */
 
-(void)setMethodWithNSString:(NSString*) strValue
{
    method = [HttpActionEnumHelper httpActionEnumFromString:(NSString*) strValue];
}


@end