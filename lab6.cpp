// CIS 22A 
// Lab 6
// Write a Grade program
// LokKan Cheng


#include <iostream>
#include <iomanip>
#include<string>
#include<cmath>
#include <fstream>


using namespace std;

void revisedReport(string studentnames[], double scores[][3], ofstream &revisedOpen)
{

	double scoreTotals[3];
	for (int i = 0; i < 3; i++)
		scoreTotals[i] = 0;
	for (int i = 0; i < 4; i++)
	{
		revisedOpen << setw(15) << studentnames[i];
		double sum = 0.0;
		for (int j = 0; j < 3; j++)
		{
			revisedOpen << setw(6) << fixed << setprecision(1) << scores[i][j] ;
			sum = sum + scores[i][j];
			scoreTotals[j] = scoreTotals[j] + scores[i][j];
		}
		revisedOpen << setw(6) << fixed << setprecision(1) << sum;
		revisedOpen << setw(6) << fixed << setprecision(1) << (sum / 3) << endl;
	}
	double sum = 0;
	revisedOpen << setw(15) << "AverageTestScore";
	for (int i = 0; i < 3; i++)
	{
		revisedOpen << setw(6) << fixed << setprecision(1) << (scoreTotals[i] / 4);
		sum = sum + (scoreTotals[i] / 4);
	}
	revisedOpen << setw(6) << fixed << setprecision(1) << sum;
	revisedOpen << setw(6) << fixed << setprecision(1) << (sum / 3) << endl;
}

int main()
{
	string studentnames[4];
	double scores[4][3];

	for (int name = 0; name < 4; name++)  // there are four students and we need to record their three exams scores
	{
		cout << "Please Enter the name of the student #" << name + 1 << ":";
		cin >> studentnames[name];

		for (int score = 0; score < 3; score++)
		{
			cout << "Please enter the test score for his/her Exam number " << score + 1 << ": ";
			cin >> scores[name][score];
		}
	}

	ofstream fileOut;  // open the file initialGrades.txt
	fileOut.open("initialGrades.txt");

	ifstream inputFile; // send the input to initialGrades.txt
	inputFile.open("initialGrades.txt");

	revisedReport(studentnames, scores, fileOut);
	fileOut.close();

	for (int i = 0; i < 4; i++)
	{
		inputFile >> studentnames[i];
		for (int j = 0; j < 3; j++)
			inputFile >> scores[i][j];
		//Just read away the sum and averages.
		double sumandAverage;
		inputFile >> sumandAverage;
		inputFile >> sumandAverage;
	}
	inputFile.close();

	int exam; // to ask for which exam to do a percentage increase
	double percent;

	cout << "-------------------------------------------------------------\n";
	cout << " Which exam would you like to change the score? ";
	cout << "Exam1" << setw(6) << "Exam2" << setw(6) << "Exam3" << endl;
	cout << "\n exam : ";
	cin >> exam;
	cout << "What is the percentage increase: ";
	cin >> percent;
	for (int i = 0; i < 4; i++)
		scores[i][exam] *= 1 + (percent / 100);

	ofstream revisedOpen;
	revisedOpen.open("revisedGrades.txt");
	revisedReport(studentnames, scores, revisedOpen);

}