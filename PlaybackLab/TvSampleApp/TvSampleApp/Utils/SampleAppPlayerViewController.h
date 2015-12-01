/**
 * @class      SampleAppPlayerViewController SampleAppPlayerViewController.h "SampleAppPlayerViewController.h"
 * @brief      An abstract ViewController which is used as the outlet for all Player nibs
 * @details    An abstract ViewController which is used as the outlet for all Player nibs.  Subclass this whenever you develop a new player.
 *             When creating a new PlayerViewControler, use this as your superclass.
 *             When creating a new nib, use this class as your owner
 * @date       12/12/14
 * @copyright  Copyright (c) 2014 Ooyala, Inc. All rights reserved.
 */

#import <UIKit/UIKit.h>
#import "PlayerSelectionOption.h"

@interface SampleAppPlayerViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *playerView;
@property (strong, nonatomic) PlayerSelectionOption *playerSelectionOption;

- (id)initWithPlayerSelectionOption:(PlayerSelectionOption *)playerSelectionOption;

- (IBAction)onButtonClick:(id)sender;

@end
