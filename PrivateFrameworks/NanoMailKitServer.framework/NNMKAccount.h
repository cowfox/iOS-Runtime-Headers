/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAccount : NSObject <NSSecureCoding> {
    NSString *_accountId;
    NSString *_displayName;
    BOOL _shouldArchive;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) BOOL shouldArchive;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setShouldArchive:(BOOL)arg1;
- (BOOL)shouldArchive;

@end
