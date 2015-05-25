//
//  MyView.h
//  Puzzle
//
//  Created by Friedrich on 17.05.15.
//  Copyright (c) 2015 Friedrich. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define DIM 4

typedef struct
{
   int index;
   int color;
   
}element;

@interface MyView : NSView
{
   element board[DIM][DIM];
   int blankX, blankY;
   BOOL scrambled;
}

- (void)initial;

@end