/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceEventServerFormattedString : NSObject <GEOServerFormattedString> {
    NSArray * _formatStrings;
    NSArray * _formatTokens;
    NSArray * _separators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *separators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)formatStrings;
- (id)formatTokens;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatStrings:(id)arg1 formatTokens:(id)arg2 separators:(id)arg3;
- (id)separators;

@end
