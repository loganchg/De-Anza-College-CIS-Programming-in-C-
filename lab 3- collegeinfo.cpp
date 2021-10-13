//This program shows the information that the user would like to know about their commnity college.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	double number;

	//Display the information, ask the user to choose a number
	cout << "Hello, Welcome to De anza online information center\n\n";

	cout << "Please enter the number from the following list for more information\n\n";
	cout << "1. Date winter quarter begins\n" << "2. Website address for schedule of classes\n" << "3. Phone number for admissions and records\n";
	cout << "4. Address of the college \n" << "5. List of division offices\n" << "6. Information about US voter requirements\n";
	cout << "7. How to contact a counselor\n" << "8. College health office hours\n";

	cout << "\n Please see the information below for number :";
	cin >> number;
	cin.get();

	//if number is 1
	if (number == 1)
	{
		cout << "Jan 08 ";
	}
	//if (number == 2)
	else if (number == 2)
	{
		cout << "http://deanza.edu/schedule/ ";
	}
	//if (number ==3)
	else if (number == 3)
	{
		cout << "https://www.deanza.edu/admissions/contact.html " << "408.864.5300";
	}
	//if (number ==4)
	else if (number == 4)
	{
		cout << "21250 Stevens Creek Blvd. Cupertino, CA 95014";
	}
	//if (number ==5)
	else if (number == 5)
	{
		cout << "https://www.deanza.edu/directory/dir-depts.html";
	}
	//If (number == 6)
	else if (number == 6)
	{
		cout << "https://www.usa.gov/register-to-vote";
	}
	//if (number == 7)
	else if (number == 7)
	{
		cout << "http://www.deanza.edu/counseling/" << "Phone: 408.864.5400";
	}
	//if (number =8)
	else if (number == 8)
	{
		cout << " Mon. & Wed. : 8 a.m. - 8 : 30 p.m. Tues. & Thurs : 8 a.m. - 7 : 00 p.m. Friday : 8 a.m. - 4 : 30 p.m.";
	}

	else if (number < 1 || number >8)
	{
		cout << "invalid number.";
	}
	
	cin.get();
		return 0;
}