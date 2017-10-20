#include <iostream>
#include "colorminal.h"


using namespace std;

/*
setForeground(string fcol);
setBackground(string bcol);
setBothColors(string fcol, string bcol);
resetColors();

black, red, green, yellow, blue, magenta, cyan, white
*/

int main()
{
	setForeground(cyan);
	setBackground(yellow);
	cout << endl << "TEST";
	setBothColors(red, green);
	cout << endl << "TEST";
	resetColors();
	cout << endl << "TEST";

}

