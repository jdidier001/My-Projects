/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 17
10-31-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-31-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab17
    git commit –a –m ‘Submissions Lab 16’
    git push


*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>

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

int main() {
   const int NUM_ELEMENTS = 8;   // Number of elements
   int userVals[NUM_ELEMENTS];   // User numbers
   int copiedVals[NUM_ELEMENTS]; // Copied/modified user numbers
   int i = 0;                    // Loop index
   
   // Prompt user for input values
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals[i];
   }
   
   // Copy userNums to copiedNums array
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      copiedVals[i] =  userVals[i];
   }