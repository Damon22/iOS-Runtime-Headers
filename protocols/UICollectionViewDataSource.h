/* Generated by RuntimeBrowser.
 */

@protocol UICollectionViewDataSource <NSObject>

@required

- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (int)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(int)arg2;

@optional

- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (int)numberOfSectionsInCollectionView:(UICollectionView *)arg1;

@end