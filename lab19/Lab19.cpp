/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 19
11-8-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 11-8-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab19
    git commit –a –m ‘Submissions Lab 19’
    git push


*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//Initiize the Variables

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

int main(){

ifstream inFS;     // Input file stream
ofstream outFS;      // Output string stream
int i=0;
int m=0;
int numArray[3][4];

   inFS.open("txt.txt");
   if (!inFS.is_open()) {
      cout << "Could not open file txt.txt " << endl;
      return 1;} // 1 indicates error */

    // Open file
   outFS.open("outputNums.txt");
   
   if (!outFS.is_open()) {
      cout << "Could not open file outputNums.txt." << endl;
      return 1;
   }

// Get input from user *******************************************
    i=0;
while (i<3){
    m=0;
    while (m<4){
    //cout << "Please enter a number " << endl;
    //cin >> numArray[i][m];
    inFS >> numArray[i][m];
    cout << numArray[i][m] << " ";// << "was entered " << "  ";
    m++;}
    cout << endl;
    i++;}
    cout << endl << endl;
   //cout << "Closing file txt.txt." << endl;
   inFS.close(); // Done with file, so close it

    int rowTotal = 0;
    int columnTotal = 0;
    
// ************************************************************    
// ************************************************************     
// ************************************************************     
// Print out table ********************************************

    i=0;
while (i <3){
         m=0;
         //cout << "you entered ";
    while (m<4){
        if (numArray[i][m] <= 9 ){
            cout << numArray[i][m]<< "  ";
            outFS << numArray[i][m] << "  ";}
        else {
            cout << numArray[i][m]<< " ";
            outFS << numArray[i][m] << " ";}
            m++;}
            
// Totals the rows*************************************************
            m=0;
            rowTotal =0;
            
            while (m<4){
            rowTotal = rowTotal + numArray[i][m];
            m++;}
            
        cout << "  " << rowTotal<< endl;
        outFS << "  " << rowTotal<< endl;
    i++;}
   
   
    
//Totals of columns **********************************************
    i=0;
    m=0;

    while (m<4){
        i=0;
        columnTotal =0;
        while (i<3){
            columnTotal = columnTotal + numArray[i][m];
            i++;}
            cout << columnTotal << " ";
            outFS << columnTotal << " ";
        m++;
    }
    cout << endl << endl;
   
    // Done with file, so close it
    outFS.close();
}

/*

Problem Statement

Use file input to read in a file with a list of numbers separated by a space that is four numbers in a line.  
            ####                Store these values in a two dimensional array.  
            ####                Average all numbers in the matrix.  
            ####                Add up each line and each column of the array.  
Output the array and totals into an output file named output.txt.  
Use the stream manipulators to make the output nice.

 
Requirements

    Use a two dimensional array
    Use appropriate input and output.

Input

    txt

Example Input.
1  2   3    4

5  6   7    8

9 10   11   12

Output

Example output
1    2   3    4    10

5    6   7    8    26

9   10   11   12   42

15  18   21   24

Submission:

Post your lab to GitHub.

Submit your output file to the Canvas assignment.  Put in any comments you want me to know.*/