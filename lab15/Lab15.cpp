/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 15
10-20-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-20-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab1
    git commit –a –m ‘description of your choice’
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
    int NUM_ELEMENTS = 80;        // Number of elements
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
    
        cout << "Please enter how many data bases places are needed?" << endl;
        cin >> NUM_ELEMENTS;    
        cout << "you entered  " << NUM_ELEMENTS << "database places" << endl;
            
        for (i = 0; i < NUM_ELEMENTS; ++i); {
                
            
                while(userChoice[i] !=0)  { 
                cout << "Please enter your choice of products " << endl;   
                cin >> userChoice[i];
                cout << "You entered ";
                runCount = runCount +1;
                
                } runCount = runCount-1;
                   
                cout << "You Ordered: "<< runCount << " items! " << endl;
        int c =0;
        for (c=0; c < NUM_ELEMENTS; ++c)  { 
                cout << "You ordered " << userChoice[c]<< endl;
                } 
                
                return runCount;
        }
        
        
        

 
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

