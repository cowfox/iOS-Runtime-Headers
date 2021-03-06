/* Generated by RuntimeBrowser.
 */

@protocol QLPreviewContentControllerProtocol <NSObject>

@required

- (void)becomeForeground;
- (void)beginScrubbing;
- (void)checkCurrentPreviewItem;
- (void)configureWithParameters:(NSDictionary *)arg1;
- (int)currentPreviewItemIndex;
- (<QLPreviewContentDataSource> *)dataSource;
- (<QLPreviewContentDelegate> *)delegate;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
- (int)previewMode;
- (<QLRemotePrintPageHelper> *)printPageHelper;
- (QLPrintPageRenderer *)printPageRenderer;
- (void)refreshCurrentPreviewItem;
- (void)scrubToValue:(double)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id <QLPreviewContentDataSource>)arg1;
- (void)setDelegate:(id <QLPreviewContentDelegate>)arg1;
- (void)setLoadingTextForMissingFiles:(NSString *)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewMode:(int)arg1;
- (void)setTransitioning:(void *)arg1 synchronizedWithBlock:(void *)arg2; // needs 2 arg types, found 6: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopLoadingCurrentPreviewItem;
- (void)togglePlayState;
- (void)willChangeContentFrame;

@end
