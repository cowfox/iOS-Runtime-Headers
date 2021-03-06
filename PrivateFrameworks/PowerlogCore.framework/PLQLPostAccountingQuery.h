/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLPostAccountingQuery : PLQLAccountingQuery {
    NSArray *_additionalAccountingGroups;
    NSString *_daemonToBreak;
    NSString *_parentAccountingQueryToRunOn;
    NSMutableArray *_postpostAccountingQueries;
    NSDictionary *_skipProcess;
}

@property (readonly, retain) NSArray *additionalAccountingGroups;
@property (readonly, retain) NSString *daemonToBreak;
@property (readonly, retain) NSString *parentAccountingQueryToRunOn;
@property (retain) NSMutableArray *postpostAccountingQueries;
@property (readonly, retain) NSDictionary *skipProcess;

- (void).cxx_destruct;
- (void)addPostPostAccountingChildren:(id)arg1;
- (id)additionalAccountingGroups;
- (id)daemonToBreak;
- (id)filteredAccountingEvents:(id)arg1;
- (id)getAllAccountingEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)parentAccountingQueryToRunOn;
- (id)postpostAccountingQueries;
- (id)runQueryForTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withEnergy:(double)arg2;
- (void)setPostAccountingQueryAttributes:(id)arg1 withSkipProcessList:(id)arg2 withParentQuery:(id)arg3 withAdditionalAGs:(id)arg4;
- (void)setPostAccountingQueryAttributes:(id)arg1 withSkipProcessList:(id)arg2 withParentQueryID:(id)arg3 withAdditionalAGs:(id)arg4;
- (void)setPostpostAccountingQueries:(id)arg1;
- (id)skipProcess;

@end
