//
//  DeleteSpamInput.m
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#import "DeleteSpamInput.h"

@implementation DeleteSpamInput

/**
* Response type format xml or json
*/
@synthesize responseType;

/**
* Email address
*/
@synthesize email;

-(id)init
{
    if (self = [super init])
    {
        self.responseType = @"json";
    }
    return self;
}

@end