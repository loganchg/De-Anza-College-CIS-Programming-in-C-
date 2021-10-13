// This program prompt the user to enter the names of two primary colors to mix

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string red, blue, yellow;
	string color1, color2;
	
	//Get the two color
	cout << "Please choose 2 primary colors." << endl;
	cout << "Enter the first color: ";
	getline(cin, color1);

	//enter the second color
	cout << "Enter the second color: ";
	getline(cin, color2);
	
// If user enter red and blue

	if (color1 == "red" && color2 == "blue")
	{
		cout << "Purple";
	}
	
	else if (color1 == "blue" && color2 == "red")
	{
		cout << "Purple";
	}

	else if (color1 == "red" && color2 == "yellow")
	{
		cout << "Orange";
	}
	
	else if (color1 == "yellow" && color2 == "red")
	{
		cout << "Orange";
	}
	
	else if (color1 == "yellow" && color2 == "blue")
	{
		cout << "Green";
	}

	else if (color1 == "blue" && color2 == "yellow")
	{
		cout << "Green";
	}

	else if (color1 != red || color1 !=blue || color1 != yellow)
	{
		cout << "invalid color";
	}
	cin.get();

	return 0;
}

