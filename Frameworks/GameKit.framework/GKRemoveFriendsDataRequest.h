/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer;



@interface GKRemoveFriendsDataRequest : GKDataRequest 
{
    GKPlayer *_player;
}

@property(retain) GKPlayer *player;


- (id)invalidateCacheKeys;
- (NSInteger)cacheType;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)key;
- (id)request;
- (void)dealloc;

@end