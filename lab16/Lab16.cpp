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

int userMenu(){
    const int NUM_ELEMENTS = 80;        // Number of elements
    int userChoice[NUM_ELEMENTS];       // User numbers
    int i = 0;                          // Loop index
    int m = 0;             
    int runCount =0;                    // For computing sum
    
    cout<< "Please enter a number for your choice of what ou want want to buy!"<< endl;
    cout << "1. Cars" << endl;
    cout << "2. Cloths" << endl;
    cout << "3. Building tools & suplies" << endl;
    cout << "4. Decorations" << endl;
    cout << "5. Yard Art" << endl;
    cout << "6. Plants" << endl;
    cout << "7. Holiday Supplies" << endl;
    cout << "8. Work Supplies" << endl;
    cout << "9. Useless Stuff" << endl;
    cout << "0. Done with selections" << endl;
    
                                                                                        
        for (i = 1; i < NUM_ELEMENTS; ++i); {
            
                while(userChoice[i] !=0)  { 
                cout << "You entered ";
                cin >> userChoice[i];
                runCount = runCount +1;
                
                } runCount = runCount-1;
                   
                cout << "You Ordered: "<< runCount << " items! " << endl;
                
                int m = 0;
    
                 for (m=1; m <= runCount; ++m);{
                      
                        cout << userChoice[m] << " its on it way!" << endl;
                     }
                return runCount;


}

   /* int ord = 0;
    
    for (ord=1; ord >= runCount; ++ord);{
        while(userChoice[ord] !=0)  { 
                cout << userChoice[ord] << " its on it way!" << endl;
       }*/ 
    

    
    

return 0;
};

/*
Create a menu program.  Your menu must have 10 different items for the user to choose from. 
The program should allow the user to choose an item until they say they are done.
Requirements

Use an array to hold how many of each item a user requests.
Input

As needed.
Output

As needed.
Submission:

Post your lab to GitHub.

Submit to the Canvas assignment.  Put in any comments you want me to know.*/

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