/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKGetProfilesRequest : GKDataRequest {
    NSArray *_playerIDs;
    unsigned int _profilePieces;
}

@property(retain) NSArray * playerIDs;
@property unsigned int profilePieces;

- (void)dealloc;
- (id)key;
- (id)playerIDs;
- (unsigned int)profilePieces;
- (id)request;
- (void)setPlayerIDs:(id)arg1;
- (void)setProfilePieces:(unsigned int)arg1;

@end