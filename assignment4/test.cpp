#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

char gradeLetter(double percent);

int main(){

	ifstream inFile;
	ofstream outFile;
	inFile.open("answerkey.txt");
	outFile.open("testscoreoutput.txt");

	if (inFile.fail()){
		cout << "File not found." << endl;
	}
	else{
		cout << "File found! Working..." << endl;
	}

	int maxSpace = 21;
	char* testAnswers = new char[maxSpace];
	char* stuAnswers = new char[maxSpace+2];
	string studentID;
	int i;
	double score = 0;
	char grade;

	for (i = 0; i < maxSpace; i++)
	{
		inFile.get(testAnswers[maxSpace]);
	}
	while (!inFile.eof())
	{
		inFile >> studentID;
		inFile.get();

		cout << studentID << endl;
		for (i = 0; i < maxSpace + 1; i++)
		{
			inFile.get(stuAnswers[i]);
		}

		for (i = 0; i < maxSpace; i++)
		{
			if (testAnswers[i] == stuAnswers[i])
			{
				score = score + 2;
			}
			if (stuAnswers[i] == '?')
			{
				score = score;
			}
			if (testAnswers[i] != stuAnswers[i])
			{
				if (score == 0){
					//do nothing
				}
				else{
					score = score - 1;
				}
			}
		}
		outFile << "Student: " << studentID << endl;
		outFile << "Answers: ";
		for (i = 0; i < maxSpace; i++){
			outFile << stuAnswers[i];
		}
		double percent = (score / 40) * 100;
		outFile << "Test Score: " << percent << "%" << endl;
		outFile << "Grade :" << gradeLetter(percent) << endl;
	}
	delete[] stuAnswers;
	delete[] testAnswers;
	inFile.close();
	outFile.close();

	return 0;
}

char gradeLetter(double percent)
{
	if (percent >= 90)
		return 'A';
	else if (percent >= 80)
		return 'B';
	else if (percent >= 70)
		return 'C';
	else if (percent >= 60)
		return 'D';
	else
		return 'F';
}