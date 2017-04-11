/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUStepTime : NSObject <NSSecureCoding> {
    NSDate * _date;
    unsigned int  _type;
}

@property (retain) NSDate *date;
@property unsigned int type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 date:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
