/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadata : NSObject <NSSecureCoding> {
    NSArray *_assistantCharacteristics;
    NSDictionary *_assistantServices;
    NSDictionary *_assistantUnits;
    NSArray *_hapCharacteristics;
    HAPMetadata *_hapMetadata;
    NSArray *_hapProperties;
    NSArray *_hapServices;
    NSArray *_hapSupportsAuthDataTuples;
    NSArray *_hapValueUnits;
    NSArray *_hmRequiresDeviceUnlockTuples;
    NSNumber *_schemaVersion;
    NSNumber *_version;
}

@property (nonatomic, retain) NSArray *assistantCharacteristics;
@property (nonatomic, retain) NSDictionary *assistantServices;
@property (nonatomic, retain) NSDictionary *assistantUnits;
@property (nonatomic, retain) NSArray *hapCharacteristics;
@property (nonatomic, retain) HAPMetadata *hapMetadata;
@property (nonatomic, retain) NSArray *hapProperties;
@property (nonatomic, retain) NSArray *hapServices;
@property (nonatomic, retain) NSArray *hapSupportsAuthDataTuples;
@property (nonatomic, retain) NSArray *hapValueUnits;
@property (nonatomic, retain) NSArray *hmRequiresDeviceUnlockTuples;
@property (nonatomic, retain) NSNumber *schemaVersion;
@property (nonatomic, retain) NSNumber *version;

+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (id)initWithURL:(id)arg1 error:(id*)arg2;
+ (BOOL)setSharedInstance:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantCharacteristics;
- (id)assistantServices;
- (id)assistantUnits;
- (BOOL)checkTuples:(id)arg1 forCharacteristic:(id)arg2 service:(id)arg3;
- (id)createHAPMetadata:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateAssistantDictionary;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)generateHMDictionary;
- (id)hapCharacteristics;
- (id)hapMetadata;
- (id)hapProperties;
- (id)hapServices;
- (id)hapSupportsAuthDataTuples;
- (id)hapValueUnits;
- (id)hmRequiresDeviceUnlockTuples;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id*)arg3;
- (id)parseAssistantCharacteristics:(id)arg1;
- (BOOL)parseAssistantMetadata:(id)arg1;
- (id)parseAssistantUnits:(id)arg1;
- (id)parseHAPAssistantServices:(id)arg1;
- (BOOL)parseHMMetadata:(id)arg1;
- (BOOL)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;
- (id)schemaVersion;
- (void)setAssistantCharacteristics:(id)arg1;
- (void)setAssistantServices:(id)arg1;
- (void)setAssistantUnits:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapMetadata:(id)arg1;
- (void)setHapProperties:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapSupportsAuthDataTuples:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setHmRequiresDeviceUnlockTuples:(id)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (BOOL)supportsAuthorizationData:(id)arg1 forService:(id)arg2;
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;
- (id)version;

@end
