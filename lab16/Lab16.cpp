/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 16
10-27-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-27-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab16
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

/*

Copy your menu program.  Update it so that you include prices for your items and an inventory.  As the user purchases
an item, add the price to the total and subtract 1 from the inventory.  Output a total cost when they are done 
shopping.


Requirements

    Declare a new float array of size 10 named “price” and enter prices for your items.
    When the user chooses an item, output the price of the item and the inventory
    Subtract 1 from the inventory
    Create a running total of the price.
    Output the total cost when the user is done.
    Use parallel arrays

Input

As needed.
Output

As needed.
Submission:

Post your lab to GitHub.
/*
Submit to the Canvas assignment.  Put in any comments you want me to know.

int main() {
   userMenu();
   
   
  // art();
   
   
   return 0;
}
/* try the code below to fix issues with program

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

*/