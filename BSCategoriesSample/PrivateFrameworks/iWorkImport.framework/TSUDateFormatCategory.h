/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateFormatCategory : NSObject {
    NSMutableArray * mEntries;
    struct __CFDateFormatter { } * mInitialFormatter;
}

- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(struct __CFLocale { }*)arg3;
- (void)dealloc;
- (id)entryForSeparator:(unsigned short)arg1;
- (id)formatStringsDictionary;
- (id)initWithInitialPattern:(id)arg1 locale:(struct __CFLocale { }*)arg2;
- (id)initialPattern;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const struct __CFString {}**)arg3 perfect:(BOOL*)arg4;

@end
