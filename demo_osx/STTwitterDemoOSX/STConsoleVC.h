//
//  STRequestsVC.h
//  STTwitterDemoOSX
//
//  Created by Nicolas Seriot on 9/22/13.
//  Copyright (c) 2013 Nicolas Seriot. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "STTwitter.h"

@interface STConsoleVC : NSViewController

@property (nonatomic, retain) STTwitterAPI *twitter;

@property (nonatomic, assign) IBOutlet NSArrayController *requestParametersController;

@property (nonatomic, assign) IBOutlet NSPopUpButton *genericHTTPMethodPopUpButton;
@property (nonatomic, assign) IBOutlet NSTextView *genericTextView;

@property (nonatomic, strong) NSString *genericHTTPMethod;
@property (nonatomic, strong) NSString *genericBaseURLString;
@property (nonatomic, strong) NSString *genericAPIEndpoint;
@property (nonatomic, strong) NSAttributedString *genericTextViewAttributedString;
@property (nonatomic, strong) NSMutableArray *genericRequestParameters;

- (IBAction)changeHTTPMethodAction:(id)sender;
- (IBAction)sendRequestAction:(id)sender;

@end