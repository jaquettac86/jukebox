//
//  ViewController.h
//  Jukebox
//
//  Created by Kasra Kyanzadeh on 2012-12-24.
//  Copyright (c) 2012 Kasra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UILabel *ipLabel;
    IBOutlet UIButton *playButton;

    MPMusicPlayerController *player;
}

@property (retain, nonatomic) IBOutlet UILabel *ipLabel;
@property (retain, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)playTapped:(id)sender;
- (void)playbackStateChanged:(id)sender;

@end
