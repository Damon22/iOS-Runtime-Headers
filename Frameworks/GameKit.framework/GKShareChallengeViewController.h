/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKShareChallengeViewController : GKTableViewControllerV2 {
}

- (float)_heightForFooterRowWithText:(id)arg1 width:(float)arg2;
- (int)_numberOfButtonRowsForPopoverContentSize;
- (int)_numberOfContentRowsForPopoverContentSize;
- (BOOL)_useTallerPopoverContentSize;
- (void)challengePressed:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (Class)dataSourceClass;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (float)heightForContentRow;
- (float)heightForHeaderRow;
- (void)loadView;
- (void)prepareDataSource;
- (void)sendFriendRequestPressed:(id)arg1;
- (void)sendFriendRequestToPlayer:(id)arg1;
- (void)sharePressed:(id)arg1;
- (id)textForFooterRow;
- (BOOL)usesCrossfade;
- (void)viewWillAppear:(BOOL)arg1;

@end