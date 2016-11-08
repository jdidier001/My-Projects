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
        
    cout<< "Please enter a number for your choice of what you want want to buy!"<< endl;
    cout << "1. House Hold stuff  $ 34.95" << endl;
    cout << "2. Cloths $5.95" << endl;
    cout << "3. Building tools & suplies $23.85" << endl;
    cout << "4. Decorations $16.65" << endl;
    cout << "5. Yard Art $ 34.95" << endl;
    cout << "6. Plants $4.97" << endl;
    cout << "7. Holiday Supplies $2.87" << endl;
    cout << "8. Work Supplies $5.67" << endl;
    cout << "9. Useless Stuff $ 45.87" << endl;
    cout << "10. Super Useless Stuff no one can use!!! $56.87" << endl;
    cout << "11 >. Done with selections" << endl;
}

int userChoiceOfItems(){
    int i = 0;                          // Loop index
    int m = 0;             
    int runCount =0;                    // For computing sum
    
    string item[10];
    item[0] =  "House Hold Stuff @ $ 34.95 ea ";
    item[1] =  "Cloths @ $5.95 ea ";
    item[2] =  "Building tools & suplies @ $23.85 ea ";
    item[3] =  "Decorations @ $16.65 ea";
    item[4] =  "Yard Art @ $34.95 ea ";
    item[5] =  "Plants @ $4.97 ea";
    item[6] =  "Holiday Supplies @ $2.87 ea ";
    item[7] =  "Work Supplies @ $5.67 ea ";
    item[8] =  "Useless Stuff @ $45.87 ea ";
    item[9] =  "Super Useless Stuff no one can use!!! @ $56.87 ea ";
    
    double userItem[10];       // User numbers zero out
    userItem[0]=0;
    userItem[1]=0;
    userItem[2]=0;
    userItem[3]=0;
    userItem[4]=0;
    userItem[5]=0;
    userItem[6]=0;
    userItem[7]=0;
    userItem[8]=0;
    userItem[9]=0;
    
    double itemCost[10][2]; // Cost and supply amount
    itemCost[0][0] = 34.95;
    itemCost[0][1] = 10;
    itemCost[1][0] = 5.95;
    itemCost[1][1] = 10;
    itemCost[2][0] = 23.85;
    itemCost[2][1] = 10;
    itemCost[3][0] = 16.65;
    itemCost[3][1] = 10;
    itemCost[4][0] = 34.95;
    itemCost[4][1] = 10;
    itemCost[5][0] = 4.97;
    itemCost[5][1] = 10;
    itemCost[6][0] = 2.87;
    itemCost[6][1] = 10;
    itemCost[7][0] = 5.67;
    itemCost[7][1] = 10;
    itemCost[8][0] = 45.87;
    itemCost[8][1] = 10;    
    itemCost[9][0] = 56.87;
    itemCost[9][1] = 10;    


    
    for (i=0; i < 10; i++){
            userItem[i] = 0;
    }           i=0;
                cout << "Please enter the number of the choice of products " << endl;   
            
                double total =0;
               
                while(userItem[i-1] <=10 || userItem[i-1] <= 0)  { 
                    cin >> userItem[i];
                    cout << endl;
                    m= userItem[i];
                   if (userItem[i] != 11){ cout << "You entered " << userItem[i] << endl;
                    cout << "That will be $"<< itemCost[m-1][0] << "." << endl;
                    total = total + itemCost[m-1][0];
                    cout << endl << " $" << total << " Total Spent!" << endl;
                    itemCost[m-1][1] =itemCost[m-1][1] - 1;
                    cout << "We have exactly " << itemCost[m-1][1] << " " << item[m-1] << " in stock now." << endl;
                    cout << endl <<  "What else would you like to purchase?" << endl;
                    
                    }
                    i = i + 1;
                    runCount = runCount +1;
                  
                } runCount = runCount-1;
                   
                cout << "You Ordered: "<< runCount << " items! " << endl << endl;
                cout << "Your Grand Total is $"<< total << endl;
};

int main(){
    
    userMenu();
    userChoiceOfItems();
}

/*

####          Copy your menu program.  
####          Update it so that you include prices for your items and an inventory.  
####          As the user purchases an item, add the price to the total and subtract 1 from the inventory. 
####          Output a total cost when they are done shopping.


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