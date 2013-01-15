/*
 * functions.h
 *
 *  Created on: Jan 14, 2013
 *      Author: Mindofbeholder & Bollinger
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <windows.h> // for resizing the window
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <sstream>
#include <vector>

using namespace std;

extern int iSPEED; // used to set speed for the text crawl

void pause(); // creates in-game pause
void clear(); // clears console screen
int twoChoice(string descript, string opOne, string opTwo); // used for giving players choices
void noEffect(string descript, string opOne, string opTwo, string answerOne, string answerTwo); // used for choices that have no effects
void resize (int Width, int Height); // used for resizing the game window
void title(); // prints the title
void credits(); // prints developer credits
int randomNum(); // generates a random number
string printWrap(std::string s); // word wrap
int GetBufferWidth(); // used to find the width of the window for printWrap
void slowPrint(string hello); // slowly prints the words on screen character by character
void print(string text); // feeds text through printWrap then slowPrint
void gameOver(); // prints Game Over
void fin(); // prints Fin
