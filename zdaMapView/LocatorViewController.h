/*
 *  $HeadURL$
 *  $Rev$
 *  $Author$
 *  $Date$
 *
 *  Abstract:   The view controller to display/add/remove all the devices we are locating.
 *
 *  ZOS Communications, LLC (“ZOS”) grants you a nonexclusive copyright license
 *  to use all programming code examples from which you can generate similar 
 *  function tailored to your own specific needs.
 *
 *  All sample code is provided by ZOS for illustrative purposes only. These 
 *  examples have not been thoroughly tested under all conditions. ZOS, 
 *  therefore, cannot guarantee or imply reliability, serviceability, or 
 *  function of these *programs.
 *
 *  All programs contained herein are provided to you "AS IS" without any 
 *  warranties of any kind. The implied warranties of non-infringement, 
 *  merchantability and fitness for a particular purpose are expressly 
 *  disclaimed.
 *
 *  Copyright Zos Communications LLC, (c) 2012
 *
 */
#import <Foundation/Foundation.h>
#import "LocatorTableViewController.h"
#import "AddDeviceViewController.h"

/*!
 * UI view controller to display all devices we are locating and allow
 * them to be added, removed, edited (displayed/not displayed).
 *
 * \author  Paul MacBeath
 * \date    08/08/11
 * \version 1.0
 * \brief   UI view controller to display/add/remove all the devices we are locating
 */
@interface LocatorViewController : UIViewController 
{
    UILabel *selectToUpdateLabel;
    LocatorTableViewController *tableViewController;
    AddDeviceViewController *addDeviceController;
}

@property (retain) LocatorTableViewController *tableViewController;
@property (retain) AddDeviceViewController *addDeviceController;
@property (retain) UILabel *selectToUpdateLabel;

-(void) viewMode;
-(void) removeDevice;

@end
