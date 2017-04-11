/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol> {
    TUAutocompleteResultPartitioner * _autocompleteResultPartitioner;
    CNAutocompleteStore * _autocompleteStore;
    BOOL  _cancelled;
    id /* block */  _completion;
    <CNCancelable> * _fetchRequest;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _searchComplete;
    TUSearchController * _searchController;
}

@property (nonatomic, retain) TUAutocompleteResultPartitioner *autocompleteResultPartitioner;
@property (nonatomic, retain) CNAutocompleteStore *autocompleteStore;
@property (getter=isCancelled, nonatomic) BOOL cancelled;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNCancelable> *fetchRequest;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isSearchComplete, nonatomic) BOOL searchComplete;
@property TUSearchController *searchController;
@property (readonly) TUSearchResults *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)autocompleteResultPartitioner;
- (id)autocompleteStore;
- (void)cancelSearch;
- (id /* block */)completion;
- (id)fetchRequest;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isSearchComplete;
- (id)queue;
- (id)searchController;
- (void)searchForString:(id)arg1 completion:(id /* block */)arg2;
- (id)searchResults;
- (void)setAutocompleteResultPartitioner:(id)arg1;
- (void)setAutocompleteStore:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSearchComplete:(BOOL)arg1;
- (void)setSearchController:(id)arg1;

@end
