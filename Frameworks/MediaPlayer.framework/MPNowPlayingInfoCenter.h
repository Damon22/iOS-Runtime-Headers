/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoCenter : NSObject {
    NSDictionary * _convertedNowPlayingInfo;
    NSDictionary * _nowPlayingInfo;
    MPNowPlayingPlaybackQueueCache * _playbackQueueCache;
    <MPNowPlayingPlaybackQueueDataSource> * _playbackQueueDataSource;
    unsigned int  _playbackState;
    NSDate * _pushDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _queuedNowPlayingInfo;
}

@property (copy) NSDictionary *nowPlayingInfo;
@property unsigned int playbackState;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_init;
- (void)_pushNowPlayingInfoAndRetry:(BOOL)arg1;
- (void)_registerCallbacks;
- (id)init;
- (void)invalidatePlaybackQueue;
- (id)nowPlayingInfo;
- (id)playbackQueueDataSource;
- (unsigned int)playbackState;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueueDataSource:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;

@end
