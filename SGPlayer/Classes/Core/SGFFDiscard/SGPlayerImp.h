//
//  SGPlayer.h
//  SGPlayer
//
//  Created by Single on 16/6/28.
//  Copyright © 2016年 single. All rights reserved.
//

#import "SGPlatform.h"
#import "SGPlayerTrack.h"
#import "SGPlayerDecoder.h"
#import "SGDefines.h"

// video type
typedef NS_ENUM(NSUInteger, SGVideoType) {
    SGVideoTypeNormal,  // normal
    SGVideoTypeVR,      // virtual reality
};

// player state
typedef NS_ENUM(NSUInteger, SGPlayerState) {
    SGPlayerStateNone = 0,          // none
    SGPlayerStateBuffering = 1,     // buffering
    SGPlayerStateReadyToPlay = 2,   // ready to play
    SGPlayerStatePlaying = 3,       // playing
    SGPlayerStateSuspend = 4,       // pause
    SGPlayerStateFinished = 5,      // finished
    SGPlayerStateFailed = 6,        // failed
};

// video content mode
typedef NS_ENUM(NSUInteger, SGGravityMode) {
    SGGravityModeResize,
    SGGravityModeResizeAspect,
    SGGravityModeResizeAspectFill,
};


#pragma mark - SGPlayer

@class SGError;

NS_ASSUME_NONNULL_BEGIN

@interface SGPlayer2 : NSObject

//+ (instancetype)new NS_UNAVAILABLE;
//- (instancetype)init NS_UNAVAILABLE;
//
//+ (instancetype)player;

//@property (nonatomic, strong) SGPlayerDecoder * decoder;      // default is [SGPlayerDecoder defaultDecoder]
//
//@property (nonatomic, copy, readonly) NSURL * contentURL;
//@property (nonatomic, assign, readonly) SGVideoType videoType;
//
//@property (nonatomic, strong, readonly, nullable) SGError * error;
//
//- (void)replaceVideoWithURL:(nullable NSURL *)contentURL;
//- (void)replaceVideoWithURL:(nullable NSURL *)contentURL videoType:(SGVideoType)videoType;
//
//// preview
//@property (nonatomic, assign) SGDisplayMode displayMode;
//@property (nonatomic, strong, readonly) SGPLFView * view;      // graphics view
//@property (nonatomic, assign) BOOL viewAnimationHidden;     // default is YES;
//@property (nonatomic, assign) SGGravityMode viewGravityMode;       // default is SGGravityModeResizeAspect;
//@property (nonatomic, copy) void (^viewTapAction)(SGPlayer2 * player, SGPLFView * view);
//- (SGPLFImage *)snapshot;
//
//// control
//@property (nonatomic, assign, readonly) SGPlayerState state;
//@property (nonatomic, assign, readonly) CGSize presentationSize;
//@property (nonatomic, assign, readonly) NSTimeInterval bitrate;
//@property (nonatomic, assign, readonly) NSTimeInterval progress;
//@property (nonatomic, assign, readonly) NSTimeInterval duration;
//@property (nonatomic, assign, readonly) NSTimeInterval playableTime;
//
////@property (nonatomic, assign) SGPlayerBackgroundMode backgroundMode;    // background mode
//@property (nonatomic, assign) NSTimeInterval playableBufferInterval;    // default is 2s
//@property (nonatomic, assign) CGFloat volume;       // default is 1
//
//- (void)play;
//- (void)pause;
//- (void)stop;
//
//@property (nonatomic, assign, readonly) BOOL seekEnable;
//@property (nonatomic, assign, readonly) BOOL seeking;
//- (void)seekToTime:(NSTimeInterval)time;
//- (void)seekToTime:(NSTimeInterval)time completeHandler:(nullable void(^)(BOOL finished))completeHandler;

@end


NS_ASSUME_NONNULL_END
