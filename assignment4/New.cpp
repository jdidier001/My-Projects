#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <string>
#include <fstream>

using namespace std;


class StudentNAnswers{
 
 
 public:    // The class' public functions     
    
    ifstream inFS;          // Input file stream
    ofstream outFS;         // Output string stream
    string fileName;        //For User file input
    string testAnswers[100];  // array for test answers to be read into
    string studentAnswers[1000]; // array for students and student answer to be read into
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
                        
                            i=0;
                            while (! inFS.eof() ){
                                inFS >> studentAnswers[i];
                                cout << studentAnswers[i] << " ";
                                i++;}
                        cout << endl << "Students total " << i <<  endl; 
                    
                        inFS.close(); // Done with file, close it
                }

// Get the users file             
        string GetUserFile()
                {
                    return studentAnswers[i];
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
                  
                        i=0;
                        int questionCount =0;
                        while (! inFS.eof() ){
                            inFS >> testAnswers[i];
                            cout << testAnswers[i] << " ";// << "was entered " << "  ";
                            questionCount = questionCount + 1;
                        i++;}
                    cout <<endl <<  "Question Count " << questionCount << endl; 
                    
                    inFS.close(); // Done with file, closing it            
                    }

        string GetTestAnswers()
                {
                    return testAnswers[i];
                }
};

int main(){
StudentNAnswers test1;
    test1.SetUserFile();
    test1.SetTestAnswers();
}
