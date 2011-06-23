@interface LambdaSheet : NSObject {}

- (id) initWithTitle: (NSString*) title cancelBlock: (dispatch_block_t) block;

- (void) addButtonWithTitle: (NSString*) title block: (dispatch_block_t) block;
- (void) addDestructiveButtonWithTitle: (NSString*) title block: (dispatch_block_t) block;
- (void) addCancelButtonWithTitle: (NSString*) title block: (dispatch_block_t) block;
- (void) addCancelButtonWithTitle: (NSString*) title;

- (void) showFromTabBar: (UITabBar*) view;
- (void) showFromToolbar: (UIToolbar*) view;
- (void) showFromBarButtonItem: (UIBarButtonItem*) view;
- (void) showInView: (UIView*) view;

@end
