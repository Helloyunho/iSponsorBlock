#import <UIKit/UIKit.h>
#include <RemoteLog.h>
#import <objc/runtime.h>

@interface UIView ()
-(UIViewController *)_viewControllerForAncestor;
@end

@interface UITableViewCell ()
-(UITextField *)editableTextField;
-(id)_indexPath;
@end

@interface UISegment : UIView
@end

@interface SponsorBlockTableCell : UITableViewCell
@property (strong, nonatomic) NSString *category;
@end

@interface SponsorBlockSettingsController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
@property (strong, nonatomic) UITableView *tableView;
@property (strong, nonatomic) NSArray *sectionTitles;
@property (strong, nonatomic) NSMutableDictionary *settings;
@property (strong, nonatomic) NSString *settingsPath;
-(void)enabledSwitchToggled:(UISwitch *)sender;
-(void)switchToggled:(UISwitch *)sender;
-(void)categorySegmentSelected:(UISegmentedControl *)segmentedControl;
-(void)writeSettings:(NSDictionary *)settings;
@end
