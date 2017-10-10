#import <UIKit/UIKit.h>
#import <Google/SignIn.h>
#import <GTLRSheets.h>

@interface ViewController : UIViewController <GIDSignInDelegate, GIDSignInUIDelegate>

@property (nonatomic, strong) IBOutlet GIDSignInButton *signInButton;
@property (nonatomic, strong) UITextView *output;
@property (nonatomic, strong) GTLRSheetsService *service;


@end
