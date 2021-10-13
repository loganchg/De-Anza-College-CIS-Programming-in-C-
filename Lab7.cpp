// CIS 22A 
//Lab 7 part A  
// Write a program the displays the contents of Teams.txt on the screen and prompts the user to enter the name of one of the teams.
// LokKan Cheng

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream listOfteam; //open the Teams.txt
	listOfteam.open("Teams.txt");

	ifstream winnersFile; // open the WorldSeriesWinners.txt
	winnersFile.open("WorldSeriesWinners.txt");

	int count = 0, i; 
	string team, teamName;
	vector<string> vec;
	
	while (getline(listOfteam, team))
	{
		//print out all the team names for user to enter
		cout << team << endl; 
	}
	// ask the user to key in a team name
	cout << "------------------------------------------------------------------------" << endl;
	cout << endl << "Please enter one of the team names that you found above.\n";
	cout << "This system will tell you how many time did this team won.\n";
	getline(cin, teamName);

	while (getline(winnersFile, team))
	{
		vec.push_back(team);
	}
	for (i = 0; i < vec.size(); i++)
	{
		if (vec[i] == teamName)
		{
			count++; 
		}
	}

	cout << endl << "The team " << teamName << " has won the World Cup " << count << " times." << endl;

	system("PAUSE");

	//closing files
	listOfteam.close();
	winnersFile.close();
	return 0;
}