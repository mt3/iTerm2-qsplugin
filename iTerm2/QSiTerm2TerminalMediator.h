//
//  QSiTerm2TerminalMediator.h
//  QSiTerm2
//
//  Created by Andreas Johansson on 2012-03-20.
//  Copyright (c) 2012 stdin.se. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "QSiTerm2Definitions.h"
#import "iTerm.h"

// Quicksilver terminal mediator interface
@protocol QSTerminalMediator
// Executes a command in a new terminal window
- (void) performCommandInTerminal: (NSString *)command;
@end

@interface QSiTerm2TerminalMediator : NSObject <QSTerminalMediator>

// Executes a command in a new tab in the current terminal
- (void) performCommandInTerminalTab: (NSString *)command;

// Open a named session in a new terminal window
- (void) openSession:(NSString *)sessionName inTab:(BOOL)inTab;

@end
