/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionRideSharingRide : NSObject <NSSecureCoding> {
    NSDate * _estimatedPickupDate;
    NSString * _identifier;
    UIImage * _image;
    NSURL * _inAppBookingURL;
    NSString * _name;
    NSString * _price;
    bool  _requiresPartySize;
    NSString * _specialPricing;
    NSString * _vehicleType;
}

@property (nonatomic, retain) NSDate *estimatedPickupDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSURL *inAppBookingURL;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *price;
@property (nonatomic) bool requiresPartySize;
@property (nonatomic, retain) NSString *specialPricing;
@property (nonatomic, retain) NSString *vehicleType;

+ (id)rideFromIntentRide:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedPickupDate;
- (id)identifier;
- (id)image;
- (id)inAppBookingURL;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)price;
- (bool)requiresPartySize;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInAppBookingURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setRequiresPartySize:(bool)arg1;
- (void)setSpecialPricing:(id)arg1;
- (void)setVehicleType:(id)arg1;
- (id)specialPricing;
- (id)vehicleType;

@end