/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (nonatomic) int column;
@property (nonatomic) int level;
@property (nonatomic) int line;
@property (nonatomic, copy) NSString *networkRequestId;
@property (nonatomic, copy) NSArray *parameters;
@property (nonatomic) int repeatCount;
@property (nonatomic) int source;
@property (nonatomic, copy) NSArray *stackTrace;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *url;

- (int)column;
- (id)initWithSource:(int)arg1 level:(int)arg2 text:(id)arg3;
- (int)level;
- (int)line;
- (id)networkRequestId;
- (id)parameters;
- (int)repeatCount;
- (void)setColumn:(int)arg1;
- (void)setLevel:(int)arg1;
- (void)setLine:(int)arg1;
- (void)setNetworkRequestId:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRepeatCount:(int)arg1;
- (void)setSource:(int)arg1;
- (void)setStackTrace:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)source;
- (id)stackTrace;
- (id)text;
- (int)type;
- (id)url;

@end
