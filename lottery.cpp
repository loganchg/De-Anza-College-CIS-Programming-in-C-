/* CIS 22A
Lab 7 part B 
 a program that initializes an array or vector with these numbers 
and lets the player enter this weeks winning 5-digit number.
Lokkan Cheng
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{

	int number{};
	int test{};

	int List[] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	
	cout << " Welcome to our Lottery system !!\n ";
	cout << " \t\t I will tell you if you are a lucky winner of this week\n";
	cout << " ---------------------------------------------------------------------------------------------------" << endl;

	while (number == 0, test == 0)
	{
	do
	{
		cout << "Please enter 5 digits into this system" << endl;
			cin >> number;
		} 
	while (number <10000 && number>99999); 
		
		for (int i = 0; i<10; i++) {
			if (number == List[i]) {
				cout << "\n\n Congratulation!! You are the lucky winner of this week." << endl;
				test++;
			}
		}
		if (test != List[i])
						cout << "\n\nThis is not a winning number."<< endl;
	}
	system("pause");
	return 0;
}