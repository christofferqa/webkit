/*
    WebUIDelegate.h
    Copyright (C) 2003 Apple Computer, Inc. All rights reserved.    
    
    Public header file.
*/

#import <Cocoa/Cocoa.h>
#import <Foundation/NSURLRequest.h>

/*!
    @enum WebMenuItemTag
    @discussion Each menu item in the default menu items array passed in
    contextMenuItemsForElement:defaultMenuItems: has its tag set to one of the WebMenuItemTags.
    When iterating through the default menu items array, use the tag to differentiate between them.
*/

enum {
    WebMenuItemTagOpenLinkInNewWindow=1,
    WebMenuItemTagDownloadLinkToDisk,
    WebMenuItemTagCopyLinkToClipboard,
    WebMenuItemTagOpenImageInNewWindow,
    WebMenuItemTagDownloadImageToDisk,
    WebMenuItemTagCopyImageToClipboard,
    WebMenuItemTagOpenFrameInNewWindow,
    WebMenuItemTagCopy,
    WebMenuItemTagGoBack,
    WebMenuItemTagGoForward,
    WebMenuItemTagStop,
    WebMenuItemTagReload
};

/*!
    @protocol WebOpenPanelResultListener
    @discussion This protocol is used to call back with the results of
    the file open panel requested by runOpenPanelForFileButtonWithResultListener:
*/
@protocol WebOpenPanelResultListener <NSObject>

/*!
    @method chooseFilename:
    @abstract Call this method to return a filename from the file open panel.
    @param fileName
*/
- (void)chooseFilename:(NSString *)fileName;

/*!
    @method cancel
    @abstract Call this method to indicate that the file open panel was cancelled.
*/
- (void)cancel;

@end

@class WebView;

/*!
    @category WebUIDelegate
    @discussion A class that implements WebUIDelegate provides
    window-related methods that may be used by Javascript, plugins and
    other aspects of web pages. These methods are used to open new
    windows and control aspects of existing windows.
*/
@interface NSObject (WebUIDelegate)

/*!
    @method webView:createWebViewWithRequest:
    @abstract Create a new window and begin to load the specified request.
    @discussion The newly created window is hidden, and the window operations delegate on the
    new WebViews will get a webViewShow: call.
    @param sender The WebView sending the delegate method.
    @param request The request to load.
    @result The WebView for the new window.
*/
- (WebView *)webView:(WebView *)sender createWebViewWithRequest:(NSURLRequest *)request;

/*!
    @method webViewShow:
    @param sender The WebView sending the delegate method.
    @abstract Show the window that contains the top level view of the WebView,
    ordering it frontmost.
    @discussion This will only be called just after createWindowWithRequest:
    is used to create a new window.
*/
- (void)webViewShow:(WebView *)sender;

/*!
    @method webViewClose:
    @abstract Close the current window. 
    @param sender The WebView sending the delegate method.
    @discussion Clients showing multiple views in one window may
    choose to close only the one corresponding to this
    WebView. Other clients may choose to ignore this method
    entirely.
*/
- (void)webViewClose:(WebView *)sender;

/*!
    @method webViewFocus:
    @abstract Focus the current window (i.e. makeKeyAndOrderFront:).
    @param The WebView sending the delegate method.
    @discussion Clients showing multiple views in one window may want to
    also do something to focus the one corresponding to this WebView.
*/
- (void)webViewFocus:(WebView *)sender;

/*!
    @method webViewUnfocus:
    @abstract Unfocus the current window.
    @param sender The WebView sending the delegate method.
    @discussion Clients showing multiple views in one window may want to
    also do something to unfocus the one corresponding to this WebView.
*/
- (void)webViewUnfocus:(WebView *)sender;

/*!
    @method webViewFirstResponder:
    @abstract Get the first responder for this window.
    @param sender The WebView sending the delegate method.
    @discussion This method should return the focused control in the
    WebView's view, if any. If the view is out of the window
    hierarchy, this might return something than calling firstResponder
    on the real NSWindow would. It's OK to return either nil or the
    real first responder if some control not in the window has focus.
*/
- (NSResponder *)webViewFirstResponder:(WebView *)sender;

/*!
    @method webView:makeFirstResponder:
    @abstract Set the first responder for this window.
    @param sender The WebView sending the delegate method.
    @param responder The responder to make first (will always be a view)
    @discussion responder will always be a view that is in the view
    subhierarchy of the top-level web view for this WebView. If the
    WebView's top level view is currently out of the view
    hierarchy, it may be desirable to save the first responder
    elsewhere, or possibly ignore this call.
*/
- (void)webView:(WebView *)sender makeFirstResponder:(NSResponder *)responder;

/*!
    @method webView:setStatusText:
    @abstract Set the window's status display, if any, to the specified string.
    @param sender The WebView sending the delegate method.
    @param text The status text to set
*/
- (void)webView:(WebView *)sender setStatusText:(NSString *)text;

/*!
    @method webViewStatusText:
    @abstract Get the currently displayed status text.
    @param sender The WebView sending the delegate method.
    @result The status text
*/
- (NSString *)webViewStatusText:(WebView *)sender;

/*!
    @method webViewAreToolbarsVisible:
    @abstract Determine whether the window's toolbars are currently visible
    @param sender The WebView sending the delegate method.
    @discussion This method should return YES if the window has any
    toolbars that are currently on, besides the status bar. If the app
    has more than one toolbar per window, for example a regular
    command toolbar and a favorites bar, it should return YES from
    this method if at least one is on.
    @result YES if at least one toolbar is visible, otherwise NO.
*/
- (BOOL)webViewAreToolbarsVisible:(WebView *)sender;

/*!
    @method webView:setToolbarsVisible:
    @param sender The WebView sending the delegate method.
    @abstract Set whether the window's toolbars are currently visible.
    @param visible New value for toolbar visibility
    @discussion Setting this to YES should turn on all toolbars
    (except for a possible status bar). Setting it to NO should turn
    off all toolbars (with the same exception).
*/
- (void)webView:(WebView *)sender setToolbarsVisible:(BOOL)visible;

/*!
    @method webViewIsStatusBarVisible:
    @abstract Determine whether the status bar is visible.
    @param sender The WebView sending the delegate method.
    @result YES if the status bar is visible, otherwise NO.
*/
- (BOOL)webViewIsStatusBarVisible:(WebView *)sender;

/*!
    @method webView:setStatusBarVisible:
    @abstract Set whether the status bar is currently visible.
    @param visible The new visibility value
    @discussion Setting this to YES should show the status bar,
    setting it to NO should hide it.
*/
- (void)webView:(WebView *)sender setStatusBarVisible:(BOOL)visible;

/*!
    @method webViewIsResizable:
    @abstract Determine whether the window is resizable or not.
    @param sender The WebView sending the delegate method.
    @result YES if resizable, NO if not.
    @discussion If there are multiple views in the same window, they
    have have their own separate resize controls and this may need to
    be handled specially.
*/
- (BOOL)webViewIsResizable:(WebView *)sender;

/*!
    @method webView:setResizable:
    @abstract Set the window to resizable or not
    @param sender The WebView sending the delegate method.
    @param resizable YES if the window should be made resizable, NO if not.
    @discussion If there are multiple views in the same window, they
    have have their own separate resize controls and this may need to
    be handled specially.
*/
- (void)webView:(WebView *)sender setResizable:(BOOL)resizable;

/*!
    @method webView:setFrame:
    @abstract Set the window's frame rect
    @param sender The WebView sending the delegate method.
    @param frame The new window frame size
    @discussion Even though a caller could set the frame directly using the NSWindow,
    this method is provided so implementors of this protocol can do special
    things on programmatic move/resize, like avoiding autosaving of the size.
*/
- (void)webView:(WebView *)sender setFrame:(NSRect)frame;

/*!
    @method webViewFrame:
    @param sender The WebView sending the delegate method.
    @abstract REturn the window's frame rect
    @discussion 
*/
- (NSRect)webViewFrame:(WebView *)sender;

/*!
    @method webView:setContentRect:
    @abstract Set the window's content rect
    @param sender The WebView sending the delegate method.
    @param frame The new window content rect
    @discussion Even though a caller could set the content rect
    directly using the NSWindow, this method is provided so
    implementors of this protocol can do special things on
    programmatic move/resize, like avoiding autosaving of the size.
*/
- (void)webView:(WebView *)sender setContentRect:(NSRect)contentRect;

/*!
    @method webViewContentRect:
    @abstract Return the window's content rect
    @discussion 
*/
- (NSRect)webViewContentRect:(WebView *)sender;

/*!
    @method webView:runJavaScriptAlertPanelWithMessage:
    @abstract Display a JavaScript alert panel
    @param sender The WebView sending the delegate method.
    @param message The message to display
    @discussion Clients should visually indicate that this panel comes
    from JavaScript. The panel should have a single OK button.
*/
- (void)webView:(WebView *)sender runJavaScriptAlertPanelWithMessage:(NSString *)message;

/*!
    @method webView:runJavaScriptAlertPanelWithMessage:
    @abstract Display a JavaScript confirm panel
    @param sender The WebView sending the delegate method.
    @param message The message to display
    @result YES if the user hit OK, no if the user chose Cancel.
    @discussion Clients should visually indicate that this panel comes
    from JavaScript. The panel should have two buttons, e.g. "OK" and
    "Cancel".
*/
- (BOOL)webView:(WebView *)sender runJavaScriptConfirmPanelWithMessage:(NSString *)message;

/*!
    @method webView:runJavaScriptTextInputPanelWithPrompt:defaultText:
    @abstract Display a JavaScript text input panel
    @param sender The WebView sending the delegate method.
    @param message The message to display
    @param defaultText The initial text for the text entry area.
    @result The typed text if the user hit OK, otherwise nil.
    @discussion Clients should visually indicate that this panel comes
    from JavaScript. The panel should have two buttons, e.g. "OK" and
    "Cancel", and an area to type text.
*/
- (NSString *)webView:(WebView *)sender runJavaScriptTextInputPanelWithPrompt:(NSString *)prompt defaultText:(NSString *)defaultText;

/*!
    @method webView:runOpenPanelForFileButtonWithResultListener:
    @abstract Display a file open panel for a file input control.
    @param sender The WebView sending the delegate method.
    @param resultListener The object to call back with the results.
    @discussion This method is passed a callback object instead of giving a return
    value so that it can be handled with a sheet.
*/
- (void)webView:(WebView *)sender runOpenPanelForFileButtonWithResultListener:(id<WebOpenPanelResultListener>)resultListener;

/*!
    @method webView:mouseDidMoveOverElement:modifierFlags:
    @abstract Update the window's feedback for mousing over links to reflect a new item the mouse is over
    or new modifier flags.
    @param sender The WebView sending the delegate method.
    @param elementInformation Dictionary that describes the element that the mouse is over, or nil.
    @param modifierFlags The modifier flags as in NSEvent.
*/
- (void)webView:(WebView *)sender mouseDidMoveOverElement:(NSDictionary *)elementInformation modifierFlags:(unsigned int)modifierFlags;

/*!
    @method webView:contextMenuItemsForElement:defaultMenuItems:
    @abstract Returns the menu items to display in an element's contextual menu.
    @param sender The WebView sending the delegate method.
    @param element A dictionary representation of the clicked element.
    @param defaultMenuItems An array of default NSMenuItems to include in all contextual menus.
    @result An array of NSMenuItems to include in the contextual menu.
*/
- (NSArray *)webView:(WebView *)sender contextMenuItemsForElement:(NSDictionary *)element defaultMenuItems:(NSArray *)defaultMenuItems;

/*!
    @method webView:validateUserInterfaceItem:defaultValidation:
    @abstract Controls UI validation
    @param webView The WebView sending the delegate method
    @param item The user interface item being validated
    @pararm defaultValidation Whether or not the WebView thinks the item is valid
    @discussion This method allows the UI delegate to control WebView's validation of user interface items.
    See WebView.h to see the methods to that WebView can currently validate. See NSUserInterfaceValidations and
    NSValidatedUserInterfaceItem for information about UI validation.
*/
- (BOOL)webView:(WebView *)webView validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)item defaultValidation:(BOOL)defaultValidation;

/*!
    @method webView:shouldPerformAction:fromSender:
    @abstract Controls actions
    @param webView The WebView sending the delegate method
    @param action The action being sent
    @param sender The sender of the action
    @discussion This method allows the UI delegate to control WebView's behavior when an action is being sent.
    For example, if the action is copy:, the delegate can return YES to allow WebView to perform its default
    copy behavior or return NO and perform copy: in some other way. See WebView.h to see the actions that
    WebView can perform.
*/
- (BOOL)webView:(WebView *)webView shouldPerformAction:(SEL)action fromSender:(id)sender;

/*!
    @method webView:shouldBeginDragForElement:dragImage:mouseDownEvent:mouseDraggedEvent:
    @abstract Controls behavior when dragging from a WebView
    @param webView The WebView sending the delegate method
    @param element The element being dragged
    @param dragImage The drag image representing the element being dragged
    @param mouseDownEvent The mouse down event that started the drag
    @param mouseDraggedEvent The mouse dragged event that started the drag
    @discussion This method allows the UI delegate to control WebView's behavior when a drag has begun. The delegate
    can return YES to allow WebView to start the drag or return NO to disallow the drag or customize the drag in some
    other way.
*/
- (BOOL)webView:(WebView *)webView shouldBeginDragForElement:(NSDictionary *)element dragImage:(NSImage *)dragImage mouseDownEvent:(NSEvent *)mouseDownEvent mouseDraggedEvent:(NSEvent *)mouseDraggedEvent;

/*!
    @method webView:dragOperationForDraggingInfo:overElement:
    @abstract Controls behavior when dragging to a WebView
    @param webView The WebView sending the delegate method
    @param draggingInfo The dragging info of the drag
    @param element The element that is under the drag
    @discussion This method allows the UI delegate to control WebView's behavior when something is being dragged to
    the WebView. The delegate can return the value returned by WebView's dragOperationForDraggingInfo: method,
    NSDragOperationNone to invalidate the drag or another drag operation.
*/
- (NSDragOperation)webView:(WebView *)webView dragOperationForDraggingInfo:(id <NSDraggingInfo>)draggingInfo overElement:(NSDictionary *)element;

/*!
    @method webView:shouldProcessDragWithDraggingInfo:overElement:
    @abstract Controls behavior when something is dropped on a WebView
    @param webView The WebView sending the delegate method
    @param draggingInfo The dragging info of the drag
    @param element The element that is under the drag
    @discussion This method allows the UI delegate to control WebView's behavior when something is dropped on a WebView.
    The delegate can return YES to allow WebView to process the drag or return NO and process the drag in some other way.
*/
- (BOOL)webView:(WebView *)webView shouldProcessDragWithDraggingInfo:(id <NSDraggingInfo>)draggingInfo overElement:(NSDictionary *)element;

@end
