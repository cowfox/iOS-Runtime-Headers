/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost> {
    id /* block */ _contentEditingOutputCommitHandler;
}

@property (copy) id /* block */ contentEditingOutputCommitHandler;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id /* block */)contentEditingOutputCommitHandler;
- (void)setContentEditingOutputCommitHandler:(id /* block */)arg1;

@end
