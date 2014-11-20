//
//  FSObjectInspectorViewController.h
//  FScript
//
//  Created by Anthony Dervish on 17/11/2014.
//
//

#import <Cocoa/Cocoa.h>

@class FSObjectInspectorViewModelItem;
@class FSInterpreter;

@interface FSObjectInspectorViewController : NSViewController <NSOutlineViewDelegate>
@property (assign) IBOutlet NSOutlineView *outlineView;
@property (weak,nonatomic) FSObjectInspectorViewModelItem *rootViewModelItem;
@property (weak,nonatomic) FSObjectInspectorViewModelItem *selectedViewModelItem;
@property (readonly,nonatomic) NSSize desiredSize;
@property (strong,nonatomic) FSInterpreter *interpreter;

-(IBAction)showColorPanel:(id)sender;
@end