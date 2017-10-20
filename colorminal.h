using namespace std;

void setForeground(string fcol);
void setBackground(string bcol);
void setBothColors(string fcol, string bcol);
void resetColors();


string black = "0";
string red = "1";
string green = "2";
string yellow = "3";
string blue = "4";
string magenta = "5";
string cyan = "6";
string white = "7";

void setForeground(string fcol)
{
	cout << "\x1b[3" + fcol + "m";
}

void setBackground(string bcol)
{
	cout << "\x1b[4" + bcol + "m";
}

void setBothColors(string fcol, string bcol)
{
	cout << "\x1b[3" + fcol + ";4" + bcol + "m";
}

void resetColors()
{
	cout << "\x1b[0m";
}





