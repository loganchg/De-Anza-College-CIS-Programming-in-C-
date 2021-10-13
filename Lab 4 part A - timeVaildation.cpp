// CIS 22A
// Lab 4 part A this program will read a value for hour and minute from the test file "timeData.txt"
// LokKan Cheng

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile;

	int validateHour, validateMinutes, validateHour1, validateMinutes1, validateHour2, validateMinutes2, validateHour3, validateMinutes3;


	inputFile.open("timedata.txt");

		//Reading data from the file
		inputFile >> validateHour >> validateMinutes >> validateHour1 >> validateMinutes1 >> validateHour2 >> validateMinutes2 >> validateHour3 >> validateMinutes3 ;

	ofstream outputFile;
	outputFile.open(" timeValidation.txt ");

	inputFile >> validateHour >> validateMinutes;
	if (validateHour <= 24 && validateMinutes <= 60)
		outputFile << validateHour << " : " << validateMinutes << " hours and minutes are valid\n";
	    cout << validateHour << " : " << validateMinutes << " hours and minutes are valid\n";

	inputFile >> validateHour2 >> validateMinutes2;
	if (validateHour1 > 24 && validateMinutes1 <= 60)
		outputFile << validateHour1 << " : " << validateMinutes1 << "hour is invalid minutes are valid\n";
	     cout << validateHour1 << " : " << validateMinutes1 << "hour is invalid minutes are valid\n";

	inputFile >> validateHour3>> validateMinutes3;
	if (validateHour2 <= 24 && validateMinutes2 <= 60)
		outputFile << validateHour2 << " : " << validateMinutes2 << " hour is valid and minutes are valid\n";
	cout << validateHour2 << " : " << validateMinutes2 << "hour is valid and minutes are valid\n";

	inputFile >> validateHour3 >> validateMinutes3;
	if (validateHour3 > 24 && validateMinutes3 > 60)
		outputFile << validateHour3 << " : " << validateMinutes3 << " hour and minutes are both invalid\n";
	cout << validateHour3 << " : " << validateMinutes3 << "hour and minutes are both invalid\n";

	outputFile.close();

	system("pause");
	return 0;
}