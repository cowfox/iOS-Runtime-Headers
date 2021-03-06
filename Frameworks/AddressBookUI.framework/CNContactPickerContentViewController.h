/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerContentViewController : UIViewController <CNContactPickerContentViewController> {
    BOOL _clientWantsPersons;
    BOOL _clientWantsProperties;
    <CNContactPickerContentDelegate> *_delegate;
    NSArray *_displayedKeys;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
}

@property void*addressBook;
@property BOOL clientWantsPersons;
@property BOOL clientWantsProperties;
@property (readonly, copy) NSString *debugDescription;
@property <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedKeys;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSPredicate *predicateForEnablingContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)clientWantsPersons;
- (BOOL)clientWantsProperties;
- (id)delegate;
- (id)displayedKeys;
- (void)invalidate;
- (id)predicateForEnablingContact;
- (id)predicateForSelectionOfContact;
- (id)predicateForSelectionOfProperty;
- (void)setClientWantsPersons:(BOOL)arg1;
- (void)setClientWantsProperties:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedKeys:(id)arg1;
- (void)setPredicateForEnablingContact:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end
