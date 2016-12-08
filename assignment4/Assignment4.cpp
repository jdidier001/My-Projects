/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Assignment 4
11-28-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 11-28-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add Assignment 4
    git commit –a –m ‘Submissions Assignment 4’
    git push
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <string>
#include <fstream>

using namespace std;

//Initionalize the Variables

int art() {
    
    cout << "      Tying Digital Flies      " << endl;  
    cout << " ______________________________" << endl;
    cout << "   #####                       " << endl;
    cout << "    #*#                        " << endl;
    cout << "     *      $$                 " << endl;         
    cout << "   #####$$$$$$$$$$$------      " << endl;
    cout << "     *      $$   &             " << endl;  
    cout << "    #*#           ]            " << endl;
    cout << "   #####         &             " << endl;
    cout << "              -^-              " << endl;
    
    cout << "Computerized FLies!" << endl << endl;
    cout << "Copyright Jared W Didier 2016";
};

class StudentNAnswers{
 
 
 public:    // The class' public functions     
    
    ifstream inFS;          // Input file stream
    ofstream outFS;         // Output string stream
    string fileName;        //For User file input
    string testAnswers[21];  // array for test answers to be read into
    string studentAnswers[6][23]; // array for students and student answer to be read into
    double studentGradeTotal =0;
    int i = 0;
    int m = 0;
    
     
//Overload Consrctor
        StudentNAnswers(int name)
                {
                    fileName="";
                    studentGradeTotal =0;
                };
          
//Default Constructor
        StudentNAnswers()
                {
                 return ;      
                };

// Set up the users file 
        int SetUserFile()
                {
                    // Prompt user for filename
                    cout << "Enter file name: " << endl;
                    cin >> fileName;
                   
                    cout << endl;
                    
                    // Try to open file
                    inFS.open(fileName);    // ************ Sholud be fileName for real program
                   
                    if (!inFS.is_open()) {
                          cout << "Could not open file " << fileName << endl;
                          return 1;
                        }
        //student answers - writes in to the studentAnswers Array                     
                        m=0;
                        while (m<6){
                            i=0;
                            while (i<23){
                                inFS >> studentAnswers[m][i];
                                cout << studentAnswers[m][i] << " ";
                                i++;}
                        cout << endl; 
                        m++;}
                        cout << endl;
                        inFS.close(); // Done with file, close it
                }

// Get the users file             
        string GetUserFile()
                {
                    return studentAnswers[m][i];
                }
// Set the answer key up
        int  SetTestAnswers(){
                int zeroCount=0;
                    
                        // Try to open file
                        inFS.open("answerkey.txt");
                       
                        if (!inFS.is_open()) {
                              cout << "Could not open file answerkey.txt" << endl;
                              return 1;
                }
        //answer key -  writes in to the testAnswers Array                        
                    m=0;
                    while ( m< 1){
                        i=0;
                        int questionCount =0;
                        while (i<21){
                            inFS >> testAnswers[i];
                            cout << testAnswers[i] << " ";// << "was entered " << "  ";
                            questionCount = questionCount + 1;
                        i++;}
                    cout << endl; 
                    m++;}
                    inFS.close(); // Done with file, closing it            
                    }

        string GetTestAnswers()
                {
                    return testAnswers[i];
                }
};
// ******************** Trying to make a function *******************
        string CompareData(){
                    string testAnswers[21];  // array for test answers to be read into
                    string studentAnswers[6][23]; // array for students and student answer to be read into
                    string studentPerQuesScore[6][23]; //for score per question per student
                    double studentTotals[6][1];
                    
                    int zeroCount=0;
                    int wrongCount=0;
                    int rightCount=0;
                    double totalCount=0;
                    int m = 0;
                    int questionCount =0;
                    double classAverage=0;
                    ifstream inFile;
                    ofstream outFS;         // Output string stream
                    outFS.open("testscoreoutput.txt");
                    
                    StudentNAnswers test1;
                    test1.SetUserFile();
                    test1.SetTestAnswers();
                    test1.GetTestAnswers();
                    test1.GetUserFile();
                    
                    while ( m < 6){
                          totalCount=0;
                          questionCount =0;
                            int i=0;
                            while (i<21){
                                 questionCount=questionCount+1;
                                 
                                string str1 = test1.studentAnswers[m][i+2];
                                string str2 = test1.testAnswers[i];
                                //cout << "Student Answer = " << str1 << " and Test Answer = " << str2 << endl <<endl;        
                                           
                                        if (str1.compare("?") == 0){
                                        //cout << str1 << " means was left blank No Match too " << str2 << "no points not deduction." << '\n';
                                                studentPerQuesScore[m][i] =  test1.studentAnswers[m][i+2];
                                                zeroCount= zeroCount +1;
                                            } 
                                        else if (str1.compare(str2) != 0){
                                               // cout << str1 << " is incorrect and does not match " << str2 <<  " minus 0.25!" << '\n';
                                                studentPerQuesScore[m][i] =  test1.studentAnswers[m][i+2];
                                                totalCount = totalCount - .25;
                                                wrongCount = wrongCount +1;
                                            }
                                        else if (str1.compare(str2) == 0){
                                               // cout << str1 << " is CORRECT! Plus one! " << str2 << '\n';
                                                studentPerQuesScore[m][i] = 'X';
                                                totalCount = totalCount + 1;
                                                rightCount = rightCount + 1;
                                            }
                            i++; }
                     studentTotals[m][0]= totalCount;
                    m++;}
                        
                        cout << rightCount << " Right. " << wrongCount << " Wrong. " << zeroCount << " not answered. "<< endl;
                        outFS << rightCount << " Right. " << wrongCount << " Wrong. " << zeroCount << " not answered. "<< endl;
                        
                        cout << endl << "Grand Totals are Rights = 34 Wrongs = 56 ? = 36" << endl<< endl;
                            m = 0;
                            while ( m < 6){
                                cout << test1.studentAnswers[m][0] << " " << test1.studentAnswers[m][1] << ": Test Score ** " << studentTotals[m][0] << " ** points scored on this test here are the questions that were wrong or ? for unanswered questions.  " << endl;
                                outFS << test1.studentAnswers[m][0] << " " << test1.studentAnswers[m][1] << ": Test Score ** " << studentTotals[m][0] << " ** points scored on this test here are the questions that were wrong or ? for unanswered questions.  " << endl;
                                
                                classAverage = classAverage + studentTotals[m][0];
                                //cout << classAverage << " Class Average " << endl;
                                int i=0;
                                    while (i<21){
                                        if (studentPerQuesScore[m][i] != "X"){
                                        cout << i+1 << ". " << studentPerQuesScore[m][i] << "   ";
                                        outFS << i+1 << ". " << studentPerQuesScore[m][i] << "   ";
                                        }
                                    i++;}
                            m++;
                            cout << endl << endl;
                            }
                    classAverage = (classAverage/6);
                    cout << endl << "The class average was " << classAverage << endl;
                    outFS << endl << "The class average was " << classAverage << endl;
                    outFS.close();
                }        


int main(){
    
    CompareData();
}

/*
Assignment #4 Test Grading program –

####                This program will read in student answers for a test and compare the answers to the corresponding answer key for the test.

####                It should prompt the user for a text file to read.  

####                1 point is awarded for each correct answer, omitted answers get 0 points, and incorrect answers deduct ¼ point.  

####                The program should output to the screen and a file the student’s name, overall grade on the exam and each omitted or incorrect question.  

####                It should then compute the class average grade and if there were 

any questions that more than 50% of the class omitted or got incorrect.


PseudoCode:
Class StudentNAnswers;

Files to read in:
studentanswer.txt
answerkey.txt

Array needed:
		UserFileIn[];
		Evaluation Array[]:
		
		
Variables needed:
		string userFile:
		int	studentGradeTotal;
		int	ClassTotal;


Begin running program:
		 
Get users file name and read in
Compare to AnswerKey

			if statements to compare and add the student grades up.
			Output to evaluation array
            Evaluate number of students missed question
			Calculate averages & Output to screen and File		

 
                        string str1 = test1.studentAnswers[m][i+2];
                        string str2 = test1.studentAnswers[m+1][i+2];
                        string str3 = test1.studentAnswers[m+2][i+2];
                        string str4 = test1.studentAnswers[m+3][i+2];
                        string str5 = test1.studentAnswers[m+4][i+2];
                        string str6 = test1.studentAnswers[m+5][i+2];
                        
                                //cout << "Student Answer = " << str1 << " and Test Answer = " << str2 << endl <<endl;        
                                           
                                        if (str1.compare("?") == 0){
                                        //cout << str1 << " means was left blank No Match too " << str2 << "no points not deduction." << '\n';
                                                studentPerQuesScore[m][i] =  test1.studentAnswers[m][i+2];
                                                zeroCount= zeroCount +1;
                                            } 
                                        else if (str1.compare(str2) != 0){
                                               // cout << str1 << " is incorrect and does not match " << str2 <<  " minus 0.25!" << '\n';
                                                studentPerQuesScore[m][i] =  test1.studentAnswers[m][i+2];
                                                totalCount = totalCount - .25;
                                                wrongCount = wrongCount +1;
                                            }
                                        else if (str1.compare(str2) == 0){
                                               // cout << str1 << " is CORRECT! Plus one! " << str2 << '\n';
                                                studentPerQuesScore[m][i] = 'X';
                                                totalCount = totalCount + 1;
                                                rightCount = rightCount + 1;
                                            }
 */
 