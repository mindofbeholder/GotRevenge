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

int iSPEED = 50;
int main(){
	clear();
	system("COLOR 0C");
	system("TITLE Got Revenge?");
	title();
	credits();
	pause();
	gameStart:
	clear();
	print("Would you like to play the game with the slow text crawl?");
	cout << endl << endl;
	cout << "Or would you prefer the text to simply appear on screen, all at once?";
	cout << endl << endl;
	Sleep(1000);
	int option = 0;
	print("1. Crawling text.");
	cout << endl << endl;
	cout << "2. Text magically appear all at once.";
	cout << endl;
	cin >> option;
	switch(option){
		case 1:
			iSPEED = 50;
			break;
		case 2:
			iSPEED = 0;
			break;
	}

	clear();
	print("You awaken on a dreary Spring morning.  The weather outside is overcast, cool and morbid. A good day for...Vengeance. You slowly rise out of bed.  You take your time.  Savoring this tranquil period. The calm before the storm.. With a smile and a yawn you throw on jeans and a t-shirt. Revenge clothes..Because you're out for blood.");
	cout << endl << endl;
	print("You hear the faint sounds of a tv set.  It must be your sibling watching cartoons in the living room.  You exit your bedroom and walk to the living room.  Your sibling is unaware of your presence.");
	cout << endl << endl;
	switch (twoChoice("What do you do?", "Confront with a cheesy one-liner", "SUPER AMBUSH ATTACK")){
		case 1:
			clear();
			print("'So we meet again.' Your sibling stares at you, wide-eyed.  The memory of the great milk jug beating of the previous day is still fresh in mind. You knew this time would come.  Now be prepared... 'Revenge is a dish best served cold...'");
			break;

		case 2:
			clear();
			print("You burst into a sprint.  You let out a battlecry that would shame Conan as you dive over the rear of the couch.  You tackle your sibling to the floor. Revenge time is go. Your sibling slips free of your grasp.");
			break;
	}
	cout << endl << endl;
	print("Your sibling darts out of the front door.\nDo you chase after?\nOr let this vendetta go?\n");
	start:
	switch(twoChoice("","Begin your pursuit","Honestly, it was just cereal. I'm over it, really.")){
		case 2:
			clear();
			print("Just cereal? Honestly? don't be a pansy!");
			goto start;
			break;
		case 1:
			clear();
			print("You bolt out the door.\nThe chase begins.\n");
			break;
	}
	cout << endl << endl;
	pause();
	clear();
	print("As you exit the house, you notice the sky becoming darker and more cloudy.  Really sets the mood, doesn't it?\nYou notice your sibling on a bicycle riding off into the distance.  Escape is unacceptable.  Your burning wrath of pain and hunger must be felt.  There is a small group of kids playing in the road...\n");
	switch(twoChoice("One has a bicycle.","Take his bike","Prius")){
		case 1:
			clear();
			print("You run up to the kid and shove him off the bike.  He scrapes his knee and cries out.  No room for apologies here! You grab the bike and chase after your sibling.\n");
			break;
		case 2:
			clear();
			print("You run to the Prius.  Your sibling is no match for you.  You approach and scream in anger.  You have a flat tire.  Ever heard of car maintenance?  Look into it.  You don't have time for this. Sweating with desperation you try to think of something.  You begin to pursue your sibling on foot when all of the sudden:\nYou hear a crash and yell.  The kid on the bicycle fell of and scraped his knee.  You run up and grab the bike.  You ride off in pursuit of your sibling.\n");
			break;
	}
	cout << endl << endl;
	pause();
	clear();
	print("Your sibling is far off in the distance.  However, with your enhanced elder sibling skills, catching up will be no problem.  You begin to catch up.  Your sibling cuts onto the main road.  You follow after.  You bob and weave through oncoming traffic.  (Your sibling must really be afraid of you).  You are so close.  Reaching out to yank your sibling off the bike.  Never mind the danger of traffic.  REMEMBER THE CEREAL!  Just then, your ears are filled with the blaring of a car horn..  A car is coming right at you both!\n\nYou both swerve out of the way. You've lost your advantage!  You spot your sibling on the other side of the road. 'Where are you going?' Then you see it.  Off in the distance, surrounded by black clouds.  The clouds are swirling overhead.  Your sibling is heading to... Walmart.\n\nIf Walmart is breached, your siblings escape will be easy.  You begin to catch up.  But you are too late.  Your sibling runs into the looming dark Fortress of Walmart.\nDo you risk the dangerous halls of Walmart?\n");
	switch(twoChoice("Or do you end this chase here and now?","REVENGE","End the chase...")){
		case 2:
			switch(twoChoice("Are you sure?","I can't go on any longer...","Nevermind. I can't conquer this bloodlust.")){
				case 1:
					clear();
					print("Well, you've come so far. You're a pansy for giving up now. Goodbye.");
					cout << endl << endl;
					gameOver();
					pause();
					exit(1);
					break;
				case 2:
					clear();
					goto case2;
					break;
			break;}
		case 1:
			case2:
			clear();
			print("Forget the danger. You must have your revenge. You rush into Walmart in pursuit of your sibling.");
		break;
	}
	cout << endl << endl;
	pause();
	clear();
	switch(twoChoice("You look left and right.  There is no sign of your sibling amidst the swarm of people.  Rushing to get out and home before the oncoming storm reaches.","Go left","Go right")){
		case 1:
			clear();
			print("You run towards the grocery section.  Quickly running along the aisles you angrily search for your sibling.  You reach the cereal aisle.  Your sibling is standing there waiting.  A foam sword in each hand.  Your sibling then tosses you one of the swords...");
			break;
		case 2:
			clear();
			int trash;
			print("You run towards the toy section.  You run down the aisles but with no sign of your sibling.  However, you do see a foam sword.");
			cout << endl << endl;
			print("1. Take foam sword\n");
			cin >> trash;
			cout << endl;
			print("Your sibling is not on this side of the store.  You reach the back of the store and run towards the grocery section.  You reach the cereal aisle.  Your sibling is standing there waiting.  Foam sword in hand.");
			break;
	}
	cout << endl << endl;
	pause();
	clear();
	print("This is the moment you've been waiting for.. The moment you have been fighting for.  You now will get your revenge.  You charge your sibling.  Swords clashing as bits of foam scrape off and fly through the air.  You continuously go at each other.  Slashing at each other with all of your might.  Your strength is evenly matched regardless of the age difference.  Your swords clash relentlessly.  With no regard to people or items around you.  The battle rages on.  Cereal is spilt all over the floor.  You swing at your sibling and hit arm.  Your sibling runs from the aisle.  You chase after, swords clashing as your sibling fights during the retreat.  Your sibling reaches the front doors, drops the sword, and runs out.");
	cout << endl;
	switch(twoChoice("Rain is pouring. Thunder is booming above.  You stand staring at each other.  Soaked from the rain.  Your sibling then grabs the bike and tries to escape.","Yank sibling off bike","Allow escape")){
		case 1:
			clear();
			print("You yank your sibling off the bike.  You assail your sibling with the foam sword.  You swing and swing.  Red anger is in your eyes as you exact your revenge.  This is the most pleasure you have felt in a long time.  Your cereal has been avenged... You look down at your sibling and speak...'Got Revenge?' You grab your bike and take the scenic route home.  It was a good day for... vengeance.");
			break;
		case 2:
			clear();
			print("Your sibling rides off in the rain.  Your bloodthirst has been quenched.  You walk back into the store and buy cereal and milk.  You get on your bike and go home.  Your sibling is not home.  You sit down and enjoy your nice bowl of cereal.  You let go of your anger.  And all is well.  Your sibling returns home and you offer a bowl of cereal.  The rain stops and the clouds depart.  A warm bright sun fills the sky.");
			break;
	}

	cout << endl << endl;
	fin();
	pause();
	clear();
	cout << endl << endl;
	switch(twoChoice("Play again?","Yes","No")){
		case 1:
			clear();
			title();
			cout << endl << endl;
			pause();
			goto gameStart;
			break;
		case 2:
			exit(1);
			break;
	}
}
