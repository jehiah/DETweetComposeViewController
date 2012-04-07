//
//  DEViewController.h
//  DETweeter
//
//  Copyright (c) 2011-2012 Double Encore, Inc. All rights reserved.
//

@interface DEViewController : UIViewController

@property ( nonatomic) IBOutlet UIButton *deTweetButton;
@property ( nonatomic) IBOutlet UIButton *twTweetButton;
@property ( nonatomic) IBOutlet UIImageView *backgroundView;
@property ( nonatomic) IBOutlet UIView *buttonView;

- (IBAction)tweetUs:(id)sender;
- (IBAction)tweetThem:(id)sender;

@end
