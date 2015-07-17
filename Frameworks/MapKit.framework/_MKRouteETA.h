/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKRouteETA : NSObject {
    double  _distance;
    double  _responseTime;
    unsigned int  _transportType;
    double  _travelTime;
}

@property (nonatomic) double distance;
@property (nonatomic, readonly) double responseTime;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) double travelTime;

+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned int)arg3;

- (double)distance;
- (double)responseTime;
- (void)setDistance:(double)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setTravelTime:(double)arg1;
- (unsigned int)transportType;
- (double)travelTime;

@end