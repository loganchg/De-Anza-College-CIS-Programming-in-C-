// CIS 22A
// Lab 4 part B this program will calculate the number of leap years between any two years from 1900 to 2099.  
// LokKan Cheng

#include<iostream>


using namespace std;

int minYear, maxYear;
//MinYear 1900;
//maxYear 2099;

bool leapYeartest(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return true;
	else
		return false;
}
int main()
{
	int firstYear, lastYear;

	const int minYear = 1900;
	const int maxYear = 2099;

	cout << "Here i will calculate the number of leap years between the following two years" << endl;
	cout << "Enter the First Year : ";
	cin >> firstYear;
	cout << "Enter the Last Year : ";
	cin >> lastYear;

	if (firstYear<minYear)
		cout << "Invalid Range. Please enter any years between " << minYear << " and " << maxYear << endl;
	else
		if (lastYear>maxYear)
			cout << "Invalid Range. Please enter between " << minYear << " and " << maxYear << endl;
		else
			if (firstYear>lastYear)
				cout << "Invalid Range. Please enter between " << minYear << " and " << maxYear << endl;
			else
			{
				cout << "The number of leap years between " << firstYear << " - " << lastYear << " : " << endl;

				int count = 0;
				for (int i = firstYear; i <= lastYear; i++)
				{
					bool condition;
					condition = leapYeartest(i);
					if (condition == true)
					{
						count = count + 1;
					}
				}
				cout << "The number of leap years : " << count << endl;
			}
	system("pause");
	return 0;
}
