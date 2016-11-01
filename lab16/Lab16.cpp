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
    cout << "1. Cars = 2.75" << endl;
    cout << "2. Cloths = 10.95" << endl;
    cout << "3. Ladder == 22.45" << endl;
    cout << "4. Halloween Decorations = 32.65" << endl;
    cout << "5. Yard Art = 23.45" << endl;
    cout << "6. Plants = 7.67" << endl;
    cout << "7. Thanksgiving Supplies = 9.66" << endl;
    cout << "8. Work Supplies = 13.96" << endl;
    cout << "9. Useless Stuff = 100.96" << endl;
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


    
    

return 0;
};



int main() {
   userMenu();
   
   
  // art();
   
   
   return 0;
}

