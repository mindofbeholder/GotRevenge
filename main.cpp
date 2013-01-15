/*
 * main.cpp
 *
 *  Created on: Jan 14, 2013
 *      Author: Tech Wizards
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

using namespace std;

int main(){

	clear();
	system("COLOR 0C");
	system("TITLE Got Revenge?");
	title();
	credits();
	pause();
	clear();

	print("You awaken on a dreary Spring morning.  The weather outside is overcast, cool and morbid. A good day for...Vengeance. You slowly rise out of bed.  You take your time.  Savoring this tranquil period. The calm before the storm.. With a smile and a yawn you throw on jeans and a t-shirt. Revenge clothes..Because you're out for blood.");
	cout << endl << endl;
	print("You hear the faint sounds of a tv set.  It must be your sibling watching cartoons in the living room.  You exit your bedroom and walk to the living room.  Your sibling is unaware of your presence.");
	cout << endl << endl;
	switch (twoChoice("What do you do?", "Confront with a cheesy one-liner", "SUPER AMBUSH ATTACK")){
		case 1:
			clear();
			print("'So we meet again.' Your sibling stares at you, wide-eyed.  The memory of the great milk jug beating of the previous day is still fresh in mind. You knew this time would come.  Now be prepared... Revenge is a dish best served cold...'");
			break;

		case 2:
			clear();
			print("You burst into a sprint.  You let out a battlecry that would shame Conan as you dive over the rear of the couch.  You tackle your sibling to the floor. Revenge time is go. Your sibling slips free of your grasp.");
			break;
	}
	cout << endl << endl;
	print("Your sibling darts out of the front door.\nDo you chase after?\nOr let this vendetta go?\n");
	pause();
}
