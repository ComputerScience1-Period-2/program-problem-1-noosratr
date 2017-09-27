/*
Noosrat Rahman - 9/21/2017 2nd

Assignment Name: Display Text

Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/

//
#include <iostream> 
#include <conio.h>


using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() { 
	char text_l = 'l';
	cout << 'H' << 'e' << 'l' << 'l' << 'o' << " World!" << endl;
	pause();
	return;
}

