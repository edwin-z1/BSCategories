/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {
    SKUIClientContext * _clientContext;
    SKUIContentRatingArtworkResourceLoader * _contentRatingArtworkLoader;
    SKUIProductInformationView * _informationView;
    SKUIProductPageItem * _item;
    NSOperationQueue * _operationQueue;
    SKUIProductPageProductInfo * _productInfo;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIProductPageItem *item;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentRatingResourceLoader;
- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)clientContext;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)dealloc;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)item;
- (void)loadView;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
