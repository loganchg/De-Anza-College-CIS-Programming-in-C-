// CIS 22A 
// Lab 5 part A Write a program that will deliver a multiple choice quiz.  
// LokKan Cheng

#include<iostream>
#include <fstream>
#include <string>

using namespace std;
int main()

{

	//open the questions from the file and answers
	ifstream getQuestion("questions.txt"), getAnswer("answerKey.txt");
	// open the result file and ready to write in
	ofstream writeResult("result.txt");
	string line;
	char answer;
	char userAns;
	int wrongCount = 0;
	// reading questions line by line
	while (getline(getQuestion, line))
	{
		// displying the questions on the screen
		cout << line << endl;
		// reading user answers
		cout << "Your answer: ";
		cin >> userAns;

		// writing user answer into the result file
		writeResult << userAns << endl;

		// reading correct answer from the answerKey file
		getAnswer >> answer;

		// if the answer is wrong, increase the count
		if (answer != userAns)
			wrongCount++;

	}
	// show how many answers the user got wrong
	writeResult << wrongCount << " wrong answers";
	// closing files
	getAnswer.close();
	getQuestion.close();
	writeResult.close();
	return 0;
}