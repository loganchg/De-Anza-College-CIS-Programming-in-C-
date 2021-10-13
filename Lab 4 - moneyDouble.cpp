// CIS 22A 
// Lab 4 part a program that calculates the daily cumulative total of the doubling the amount (starting with a penny) for 30 days.
// LokKan Cheng


#include <iostream> 
#include <iomanip>
#include<string>
#include <cstdlib>

using namespace std;
//functioin orototype.
void moneyDouble(double&bal, int& day);

int main()
{

	// declare the variables
	double bal = 0.01;
	int day = 1;

	while (day < 31)
	{
		moneyDouble(bal, day);
		day++;
	}
	system("pause");
	return 0;

} //main

void moneyDouble(double&bal, int&day)
{
	bal = 2 * bal;

	cout << "Day" << day << "= $" << setprecision(10) << bal << endl;

	return;

}
