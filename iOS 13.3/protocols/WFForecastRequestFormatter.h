/* Generated by RuntimeBrowser.
 */

@protocol WFForecastRequestFormatter <NSObject>

@required

+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDateComponents *)arg4;
+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDateComponents *)arg4 rules:(WFRequestFormattingRules *)arg5;
+ (NSURL *)hostURLForService;

@end
