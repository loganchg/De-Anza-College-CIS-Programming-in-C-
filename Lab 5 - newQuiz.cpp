// CIS 22A 
// Lab 5 part B Revise quiz questions for the quiz program
// LokKan Cheng

#include<iostream>
#include <fstream>
#include <string>

using namespace std;
int main()

{

	//open the questions from the file and answers
	ifstream getQuestion("newquestion.txt"), getAnswer("newKey.txt");
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