/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKUIInviteeAlternativeTimeSearcher, NSArray, NSDate, NSMutableSet, NSString;

@interface EKUIInviteesViewOriginalConflictSection : NSObject <EKUIInviteesViewConflictResolutionSection> {
    EKUIInviteeAlternativeTimeSearcher *_availabilitySearcher;
    NSArray *_busyParticipants;
    NSString *_cachedCellReuseIdentifier;
    NSDate *_endDate;
    id _newTimeChosen;
    unsigned long long _reuseIdentifierVersion;
    NSMutableSet *_rowsShowingAllParticipants;
    id _showPreviewOfEventAtTime;
    NSDate *_startDate;
    id _tableViewCellHook;
    bool_checked;
    bool_conflictFound;
}

@property(retain) EKUIInviteeAlternativeTimeSearcher * availabilitySearcher;
@property(retain) NSArray * busyParticipants;
@property(retain) NSString * cachedCellReuseIdentifier;
@property bool checked;
@property bool conflictFound;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSDate * endDate;
@property(readonly) unsigned long long hash;
@property(copy) id newTimeChosen;
@property unsigned long long reuseIdentifierVersion;
@property(retain) NSMutableSet * rowsShowingAllParticipants;
@property(copy) id showPreviewOfEventAtTime;
@property(retain) NSDate * startDate;
@property(readonly) Class superclass;
@property(copy) id tableViewCellHook;

- (void).cxx_destruct;
- (bool)_isValidRow:(long long)arg1;
- (id)availabilitySearcher;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (id)busyParticipants;
- (id)cachedCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (bool)checked;
- (void)clearCheckmark;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (bool)conflictFound;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (id)endDate;
- (double)estimatedHeightForRow:(id)arg1;
- (id)headerTitle;
- (id)init;
- (bool)injectNewRowsBeforeLastExistingRow;
- (id)newTimeChosen;
- (unsigned long long)numberOfRows;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (id)rowsShowingAllParticipants;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setBusyParticipants:(id)arg1;
- (void)setCachedCellReuseIdentifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setConflictFound:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setNewTimeChosen:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setRowsShowingAllParticipants:(id)arg1;
- (void)setShowPreviewOfEventAtTime:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTableViewCellHook:(id)arg1;
- (id)showPreviewOfEventAtTime;
- (id)startDate;
- (id)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;

@end