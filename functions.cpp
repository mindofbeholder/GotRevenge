/*
 * functions.cpp
 *
 *  Created on: Jan 14, 2013
 *      Author: Mindofbeholder & xBollinger
 */
#include "functions.h"
using namespace std;

/*****************************
 * Used in inserting a pause *
 *****************************/

void pause(){
	system("PAUSE");
}

/*******************************************
 * Used in clearing out the console screen *
 *******************************************/

void clear(){
	system("CLS");
}

/***************************************
 * A function that allows the designer *
 * to create a choice that does have   *
 * an effect on future aspects of the  *
 * story.                              *
 ***************************************/

int twoChoice(string descript, string opOne, string opTwo){
	int choice =0;
	start:
	print(descript);
	cout << "\n";
	cout << "\n";
	cout << "1. ";
	print(opOne);
	cout << "\n";
	cout << "2. ";
	print(opTwo);
	cout << "\n";
	cin >> choice;
	if(choice > 2){
		goto start;
	}
	return choice;


}

/*************************************************
 * A function that allows the designer to create *
 * a choice that has no effect on the story      *
 *************************************************/

void noEffect(string descript, string opOne, string opTwo, string answerOne, string answerTwo){
	int choice =0;
	print(descript);
	cout << "\n";
	cout << "\n";
	cout << "1. ";
	print(opOne);
	cout << "\n";
	cout << "2. ";
	print(opTwo);
	cout << "\n";
	start:
	cin >> choice;
	switch (choice){

		case 1:
			print(answerOne);
			break;
		case 2:
			print(answerTwo);
			break;
		default:
			goto start;
			break;
		}
	clear();


}

/**********************************************
 * Cleans up the code in the main. Feeds text *
 * into wordWrap then slowPrint then prints   *
 **********************************************/

void print(string text){
	slowPrint(printWrap(text));
}

/**********************************************
 * Slowly prints text character by character. *
 * Speed adjusted by global variable iSPEED.  *
 **********************************************/

void slowPrint(string hello){
	int x=0;
	while ( hello[x] != '\0')
	{
		cout << hello[x];
		Sleep(iSPEED);
		x++;
	};
}

/****************************************
 * Wraps text inside the console window *
 ****************************************/

string printWrap(std::string s)
{
	int bufferWidth = GetBufferWidth();

	for (unsigned int i = 1; i <= s.length() ; i++)
	{
		char c = s[i-1];

		int spaceCount = 0;

		// Add whitespace if newline detected.
		if (c == '\n')
		{
			int charNumOnLine = ((i) % bufferWidth);
			spaceCount = bufferWidth - charNumOnLine;
			s.insert((i-1), (spaceCount), ' ');
			i+=(spaceCount);
			continue;
		}

		if ((i % bufferWidth) == 0)
		{
			if (c != ' ')
			{
				for (int j = (i-1); j > -1 ; j--)
				{
					if (s[j] == ' ')
					{
							s.insert(j, spaceCount, ' ');
							break;
					}
					else spaceCount++;
				}
			}
		}
	}

	// Output string to console
	return s;
}

/************************************************************
 * Gets console width automatically. Necessary for wordWrap *
 ************************************************************/

int GetBufferWidth()
{
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	int bufferWidth, result;

	result = GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&bufferInfo);

	if(result)
	{
		bufferWidth = bufferInfo.dwSize.X;
	}

	return bufferWidth;
}

/*************************************
 * Used for resizing the game window *
 *************************************/

void resize(int Width, int Height)
    {
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size
    }

/**************************
 * Displays "GotRevenge?" *
 **************************/

void title(){
cout<<" _____       _    ______                               ___  ";
cout << endl;
cout<<"|  __ \\     | |   | ___ \\                             |__ \\ ";
cout << endl;
cout<<"| |  \\/ ___ | |_  | |_/ /_____   _____ _ __   __ _  ___  ) |";
cout << endl;
cout<<"| | __ / _ \\| __| |    // _ \\ \\ / / _ \\ '_ \\ / _` |/ _ \\/ / ";
cout << endl;
cout<<"| |_\\ \\ (_) | |_  | |\\ \\  __/\\ V /  __/ | | | (_| |  __/_|  ";
cout << endl;
cout<<" \\____/\\___/ \\__| \\_| \\_\\___| \\_/ \\___|_| |_|\\__, |\\___(_)  ";
cout << endl;
cout<<"                                              __/ |         ";
cout << endl;
cout<<"                                             |___/          ";
cout << endl;
cout << endl;

}

/**********************************************************************************
 * Credit Sequence that displays "Coded by: Mindofbeholder Written by: xBollinger *
 **********************************************************************************/

void credits(){
	cout<<" __      .     .  .          .  .      .   ._.     .     .  .      ";
	cout << endl;
	cout<<"/  ` _  _| _  _|  |_   . *   |\\/|*._  _| _ |,|_  _ |_  _ | _| _ ._.";
	cout << endl;
	cout<<"\\__.(_)(_](/,(_]  [_)\\_| *   |  ||[ )(_](_)| [_)(/,[ )(_)|(_](/,[  ";
	cout << endl;
	cout<<"                     ._|                                           ";
	cout << endl;
	cout<<".  .     ,  ,         .             .__    ..             ";
	cout << endl;
	cout<<"|  |._.*-+--+- _ ._   |_   . *   \\./[__) _ ||*._  _  _ ._.";
	cout << endl;
	cout<<"|/\\|[  | |  | (/,[ )  [_)\\_| *   /'\\[__)(_)|||[ )(_](/,[  ";
	cout << endl;
	cout<<"                         ._|                     ._|      ";
	cout << endl;
	cout << endl;
}

/********************
 * Prints Game Over *
 ********************/

void gameOver(){
	cout <<" _____                        _____";
	cout << endl;
	cout <<"|  __ \\                      |  _  |";
	cout << endl;
	cout <<"| |  \\/ __ _ _ __ ___   ___  | | | |_   _____ _ __";
	cout << endl;
	cout <<"| | __ / _` | '_ ` _ \\ / _ \\ | | | \\ \\ / / _ \\ '__|";
	cout << endl;
	cout <<"| |_\\ \\ (_| | | | | | |  __/ \\ \\_/ /\\ V /  __/ |";
	cout << endl;
	cout <<" \\____/\\__,_|_| |_| |_|\\___|  \\___/  \\_/ \\___|_|";
	cout << endl;
	cout << endl;

}

/**************
 * Prints Fin *
 **************/

void fin(){
	cout <<"______ _";
	cout << endl;
	cout <<"|  ___(_)";
	cout << endl;
	cout <<"| |_   _ _ __";
	cout << endl;
	cout <<"|  _| | | '_ \\";
	cout << endl;
	cout <<"| |   | | | | |";
	cout << endl;
	cout <<"\\_|   |_|_| |_|";
	cout << endl;
	cout << endl;

}
