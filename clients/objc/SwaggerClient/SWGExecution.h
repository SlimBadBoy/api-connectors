#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGExecution
@end

@interface SWGExecution : SWGObject


@property(nonatomic) NSString* execID;

@property(nonatomic) NSString* orderID;

@property(nonatomic) NSString* clOrdID;

@property(nonatomic) NSNumber* account;

@property(nonatomic) NSString* symbol;

@property(nonatomic) NSString* side;

@property(nonatomic) NSNumber* lastQty;

@property(nonatomic) NSNumber* lastPx;

@property(nonatomic) NSNumber* underlyingLastPx;

@property(nonatomic) NSString* lastMkt;

@property(nonatomic) NSString* lastLiquidityInd;

@property(nonatomic) NSNumber* simpleOrderQty;

@property(nonatomic) NSNumber* orderQty;

@property(nonatomic) NSNumber* price;

@property(nonatomic) NSNumber* minQty;

@property(nonatomic) NSNumber* stopPx;

@property(nonatomic) NSString* currency;

@property(nonatomic) NSString* settlCurrency;

@property(nonatomic) NSString* execType;

@property(nonatomic) NSString* ordType;

@property(nonatomic) NSString* timeInForce;

@property(nonatomic) NSString* exDestination;

@property(nonatomic) NSString* ordStatus;

@property(nonatomic) NSNumber* workingIndicator;

@property(nonatomic) NSString* ordRejReason;

@property(nonatomic) NSNumber* simpleLeavesQty;

@property(nonatomic) NSNumber* leavesQty;

@property(nonatomic) NSNumber* simpleCumQty;

@property(nonatomic) NSNumber* cumQty;

@property(nonatomic) NSNumber* avgPx;

@property(nonatomic) NSNumber* commission;

@property(nonatomic) NSString* commType;

@property(nonatomic) NSString* tradePublishIndicator;

@property(nonatomic) NSString* multiLegReportingType;

@property(nonatomic) NSString* text;

@property(nonatomic) NSString* trdMatchID;

@property(nonatomic) NSNumber* execCost;

@property(nonatomic) NSNumber* execComm;

@property(nonatomic) NSNumber* homeNotional;

@property(nonatomic) NSNumber* foreignNotional;

@property(nonatomic) NSDate* transactTime;

@property(nonatomic) NSDate* timestamp;

@end