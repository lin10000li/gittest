//
//  DetailViewController.h
//  ControllingSource
//
//  Created by lin on 14-2-27.
//  Copyright (c) 2014年 lin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
