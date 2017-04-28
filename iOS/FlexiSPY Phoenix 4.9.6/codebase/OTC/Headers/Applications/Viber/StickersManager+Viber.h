/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "NSCacheDelegate.h"
//#import "Viber-Structs.h"
//#import <XXUnknownSuperclass.h> // Unknown library

@class NSCache, NSArray, NSMutableDictionary, StickerImage, ResumableDownload;

__attribute__((visibility("hidden")))
@interface StickersManager : NSObject {//: XXUnknownSuperclass <NSCacheDelegate> {
	BOOL downloadProcessStarted;
	StickerImage* defaultSticker;
	ResumableDownload* stickersPackageDownload;
	NSArray* stickersLayout;
	NSMutableDictionary* embeddedStickers;
	NSMutableDictionary* singleStickersDownloads;
	NSMutableDictionary* stickerDataCache;
	NSCache* stickersCache;
	NSMutableDictionary* stickersSizes;
}
@property(retain, nonatomic) NSMutableDictionary* stickersSizes;
@property(retain, nonatomic) NSCache* stickersCache;
@property(retain, nonatomic) NSMutableDictionary* stickerDataCache;
@property(retain, nonatomic) NSMutableDictionary* singleStickersDownloads;
@property(retain, nonatomic) NSArray* stickersLayout;
@property(retain, nonatomic) NSMutableDictionary* embeddedStickers;
@property(retain, nonatomic) ResumableDownload* stickersPackageDownload;
+(void)finalizePackage:(unsigned)package;
+(void)finalizeDownloadedSticker:(id)sticker;
+(void)finalizeDownloadedStickerWithID:(id)anId sourcePath:(id)path;
+(BOOL)extractStickersPackage:(unsigned)package;
+(id)stickerIDFromFileName:(id)fileName;
+(id)stickersPackageTempDir:(unsigned)dir;
+(id)stickersPackagePath:(unsigned)path;
+(id)singleStickerUrlWithID:(id)anId;
+(id)stickersPackageUrl:(unsigned)url;
+(id)resolutionQualifier;
+(id)pathForStickerWithID:(id)anId;
+(id)stickerDir:(id)dir;
+(id)tempPathForSingleStickerWithID:(id)anId;
+(id)packageFileNameWithID:(unsigned)anId;
+(id)packageNameWithID:(unsigned)anId;
+(unsigned)packageIDForSticker:(id)sticker;
+(id)fileNameForOutlineWithID:(id)anId;
+(id)fileNameForStickerWithID:(id)anId;
+(id)resourceNameForOutlineWithID:(id)anId;
+(id)resourceNameForStickerWithID:(id)anId;
+(id)nameForOutlineWithID:(id)anId;
+(id)nameForStickerWithID:(id)anId;
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedStickersManager;
//-(void).cxx_destruct;
-(id)stickersBundle;
-(void)clearCache;
-(id)stickersInGroup:(unsigned)group;
-(unsigned)groupsCount;
-(void)loadOutlines;
-(BOOL)isStickerDownloadFailed:(id)failed;
-(BOOL)isStickerDownloading:(id)downloading;
-(CGSize)getStickerSize:(id)size;
-(id)getDefaultOutline;
-(id)getDefaultSticker;
-(id)getOutlineWithID:(id)anId;
-(id)getStickerWithID:(id)anId;
-(BOOL)isEmbeddedSticker:(id)sticker;
-(id)stickerData:(id)data;
-(void)downloadStickerWithID:(id)anId;
-(void)stickerDownloadDidFail:(id)stickerDownload;
-(void)finalizeSingleStickerDownload:(id)download;
-(void)resumeDownload;
-(void)suspendDownload;
-(void)downloadStickers;
-(void)startDownload;
-(void)packageWasSuccessfullyDownloaded:(unsigned)downloaded;
-(void)cache:(id)cache willEvictObject:(id)object;
-(void)dealloc;
-(id)init;
-(void)connectedToService;
-(void)buildDefaultLayout;
-(id)copyWithZone:(NSZone*)zone;
@end
