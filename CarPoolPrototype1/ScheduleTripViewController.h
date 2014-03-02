//
//  ScheduleTripViewController.h
//  CarPoolPrototype1
//
//  Created by Anoop Balakrishnan Rema on 3/1/14.
//  Copyright (c) 2014 Anoop Balakrishnan Rema. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScheduleTripViewController : UIViewController <UIPickerViewDataSource , UIPickerViewDelegate>

@property (nonatomic, strong) NSArray *models;

@property (weak, nonatomic) IBOutlet UIPickerView *modelPicker;
@property (weak, nonatomic) IBOutlet UILabel *passengers;
@property (retain, nonatomic) IBOutlet UISlider *noOfPassengers;

- (IBAction)passengerSlider:(id)sender;

@end
