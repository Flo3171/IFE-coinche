#ifndef DISPLAYMAIN_H
#define DISPLAYMAIN_H
#include "core.h"

/** 
 * \fn void displayFrame(void)
 * 
 * Displays the empty frame needed for every other display (and replaces whatever was there before)
*/
void displayFrame(void);

/** 
 * \fn void clearInfoMsg(void)
 * 
 * Clears the info box. The cursor is set to the middle of the first line
*/
void clearInfoMsg(void);

/** 
 * \fn void displayInfoMsg(char messageLine1[], char messageLine2[])
 * @param messageLine2[]: the second line of the message to display
 * @param messageLine1[]: the first line of the message to display
 * 
 * Displays a centered message in the info box. The cursor is left to the end of the message
*/
void displayInfoMsg(char messageLine1[], char messageLine2[]);

/** 
 * \fn void resizeCmdWindow(int nbOfLines, int nbOfColumns)
 * @param nbOfLines: the number of lines that should be displayed
 * @param nbOfColumns: the number of lines that should be displayed. Microsoft docs recommands a value between 40 and 135
 * 
 * Resizes the command prompt window to a given number of lines and columns
*/
void resizeCmdWindow(int nbOfLines, int nbOfColumns);

/** 
 * \fn void displayMenu(void)
 * 
 * Displays the menu
*/
void displayMenu(void);

/** 
 * \fn void displayLeaderboard(void)
 * 
 * Displays the leaderboard of the top ten in number of wins
*/
void displayLeaderboard(void);

/** 
 * \fn void displayCredits(void)
 * 
 * Displays the credits of this project
*/
void displayCredits(void);

#endif // DISPLAYMAIN_H