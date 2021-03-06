//
//  HubViewController.h
//  SmartHub
//
//  Created by Daher Alfawares on 10/3/13.
//  Copyright (c) 2013 Daher Alfawares. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FastServerSocket.h"
#import "FastSocket.h"

@interface HubViewController : UIViewController
{
    IBOutlet UIButton *serverAddress;
    
    FastServerSocket *server;
    
    NSTimer *timer;
}

- (IBAction)toggleServerAddressHidden:(id)sender;

@end