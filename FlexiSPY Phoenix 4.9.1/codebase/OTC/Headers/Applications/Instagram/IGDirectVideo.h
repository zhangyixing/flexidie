//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGDirectContent.h"

@class IGDirectContentUploadInfo, IGDirectItemIdBasedImageURLProcessor, IGPhoto, IGUploadModel, IGVideo, IGVideoComposition, NSArray, NSData, NSString, NSURL, NSValue;

@interface IGDirectVideo : IGDirectContent
{
    _Bool _isFirstAppearance;
    _Bool _reactionsNeedsReRender;
    _Bool _useMainCameraUploadFlow;
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_uploadComment;
    IGUploadModel *_uploadModel;
    NSData *_imageData;
    NSArray *_reactions;
    unsigned long long _likeCount;
    unsigned long long _lastReactionType;
    IGDirectItemIdBasedImageURLProcessor *_previewImageURLProcessor;
    IGVideo *_video;
    NSData *_videoData;
    NSData *_renderedVideoData;
    NSValue *_renderedVideoSizeValue;
    IGVideoComposition *_videoComposition;
    NSString *_videoResult;
    long long _numberOfFailedUploads;
    IGPhoto *_photo;
    struct CGSize _aspectRatio;
    struct CGRect _cropRect;
}

@property(nonatomic) _Bool useMainCameraUploadFlow; // @synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow;
@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(nonatomic) long long numberOfFailedUploads; // @synthesize numberOfFailedUploads=_numberOfFailedUploads;
@property(readonly, copy, nonatomic) NSString *videoResult; // @synthesize videoResult=_videoResult;
@property(retain, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSValue *renderedVideoSizeValue; // @synthesize renderedVideoSizeValue=_renderedVideoSizeValue;
@property(retain, nonatomic) NSData *renderedVideoData; // @synthesize renderedVideoData=_renderedVideoData;
@property(retain, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(nonatomic) unsigned long long lastReactionType; // @synthesize lastReactionType=_lastReactionType;
@property(nonatomic) _Bool reactionsNeedsReRender; // @synthesize reactionsNeedsReRender=_reactionsNeedsReRender;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(nonatomic) _Bool isFirstAppearance; // @synthesize isFirstAppearance=_isFirstAppearance;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) IGUploadModel *uploadModel; // @synthesize uploadModel=_uploadModel;
@property(retain, nonatomic) NSString *uploadComment; // @synthesize uploadComment=_uploadComment;
@property(copy, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;

- (id)preloadedImage;
- (id)thumbnailURLForAspectFillSize:(struct CGSize)arg1 option:(long long)arg2;
- (id)imageURLOfAtLeastWidth:(double)arg1 scale:(double)arg2;
- (id)imageURLForWidth:(double)arg1 option:(long long)arg2 scale:(double)arg3;
- (id)imageURLForWidth:(double)arg1 option:(long long)arg2;
- (id)imageURLForWidth:(double)arg1;
@property(readonly, nonatomic) IGDirectItemIdBasedImageURLProcessor *previewImageURLProcessor; // @synthesize previewImageURLProcessor=_previewImageURLProcessor;
- (id)copyOfContentWithReactionFilter:(id)arg1;

@property(readonly, copy) NSString *description;
- (id)digestDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSURL *cacheKeyURL;
- (_Bool)isUploading;
- (id)contentTypeString;
- (id)initAsUploadWithComment:(id)arg1 recipient:(id)arg2 aspectRatio:(struct CGSize)arg3 useMainCameraUploadFlow:(_Bool)arg4;
- (id)initWithDictionary:(id)arg1;

@end
