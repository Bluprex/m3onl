#import <UIKit/UIKit.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#include "UnityAppController.h"
#include "UnityInterface.h"

@interface Metin3GuildArtworkPicker : NSObject <UIDocumentPickerDelegate>
@property(nonatomic,copy) NSString *receiver;
@property(nonatomic,strong) UIDocumentPickerViewController *picker;
@end
static Metin3GuildArtworkPicker *activeGuildPicker;

@implementation Metin3GuildArtworkPicker
- (void)finish:(NSDictionary *)result {
    NSData *json=[NSJSONSerialization dataWithJSONObject:result options:0 error:nil];
    NSString *message=[[NSString alloc] initWithData:json encoding:NSUTF8StringEncoding];
    UnitySendMessage(self.receiver.UTF8String,"OnNativeResult",message.UTF8String);
    self.picker.delegate=nil;
    self.picker=nil;
    activeGuildPicker=nil;
}
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)controller {
    [self finish:@{@"error":@"cancelled"}];
}
- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    NSURL *url=urls.firstObject;
    if(!url){[self finish:@{@"error":@"unreadable"}];return;}
    BOOL scoped=[url startAccessingSecurityScopedResource];
    NSString *ext=url.pathExtension.lowercaseString;
    BOOL supported=[@[@"png",@"jpg",@"jpeg",@"bmp",@"tga"] containsObject:ext];
    NSInputStream *stream=supported?[NSInputStream inputStreamWithURL:url]:nil;
    NSMutableData *data=[NSMutableData data];
    [stream open];
    uint8_t buffer[4096];NSInteger read=0;
    if(stream)while((read=[stream read:buffer maxLength:sizeof(buffer)])>0){
        [data appendBytes:buffer length:(NSUInteger)read];
        if(data.length>65536)break;
    }
    [stream close];
    if(scoped)[url stopAccessingSecurityScopedResource];
    if(!stream || read<0 || data.length<18 || data.length>65536){[self finish:@{@"error":@"invalid_file"}];return;}
    [self finish:@{@"extension":[@"." stringByAppendingString:ext],@"pixels":[data base64EncodedStringWithOptions:0]}];
}
@end

extern "C" int Metin3PickGuildArtwork(const char *receiver) {
    if(!receiver || activeGuildPicker || ![NSThread isMainThread])return 0;
    UIViewController *presenter=UnityGetGLViewController();
    if(!presenter || presenter.presentedViewController)return 0;
    Metin3GuildArtworkPicker *bridge=[Metin3GuildArtworkPicker new];
    bridge.receiver=[NSString stringWithUTF8String:receiver];
    UIDocumentPickerViewController *picker;
    if(@available(iOS 14.0,*))picker=[[UIDocumentPickerViewController alloc] initForOpeningContentTypes:@[UTTypeImage] asCopy:YES];
    else picker=[[UIDocumentPickerViewController alloc] initWithDocumentTypes:@[@"public.image"] inMode:UIDocumentPickerModeImport];
    picker.allowsMultipleSelection=NO;picker.delegate=bridge;
    bridge.picker=picker;activeGuildPicker=bridge;
    [presenter presentViewController:picker animated:YES completion:nil];
    return 1;
}
