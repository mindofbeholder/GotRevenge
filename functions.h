/*
 * functions.h
 *
 *  Created on: Jan 14, 2013
 *      Author: Mindofbeholder & Bollinger
 */


#include <iostream>
#include <cstdlib>
using namespace std;


void pause();
void clear();
int twoChoice(string descript, string opOne, string opTwo);
void noEffect(string descript, string opOne, string opTwo, string answerOne, string answerTwo);
void resize (int Width, int Height);
void title();
void credits();
int randomNum();
int GetBufferWidth();
string printWrap(std::string s);
void slowPrint(string hello);
void print(string text);
