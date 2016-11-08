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
#include <algorithm>    // std::count
#include <vector>       // std::vector

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
    userChoice[i] =0;                   // Zeros out first mem block
    int m = 0;             
    int runCount =0;                    // For computing sum
    
    cout<< "Please enter a number for your choice of what you want want to buy!"<< endl;
    cout << "1. House Hold stuff" << endl;
    cout << "2. Cloths" << endl;
    cout << "3. Building tools & suplies" << endl;
    cout << "4. Decorations" << endl;
    cout << "5. Yard Art" << endl;
    cout << "6. Plants" << endl;
    cout << "7. Holiday Supplies" << endl;
    cout << "8. Work Supplies" << endl;
    cout << "9. Useless Stuff" << endl;
    cout << "10. Supper Useless Stuff no one can use!!!" << endl;
    cout << "11 >. Done with selections" << endl;
    
    for (i=0; i < NUM_ELEMENTS; i++){
            userChoice[i] = 0;
    }
    
    
               i=0;
                while(userChoice[i-1] <=10 || userChoice[i-1] <= 0)  { 
                        
                    
                cout << "Please enter the number of the choice of products " << endl;   
                cin >> userChoice[i];
                cout << "You entered " << userChoice[i] << endl;
                i = i + 1;
                runCount = runCount +1;
                
                } runCount = runCount-1;
                   
                cout << "You Ordered: "<< runCount << " items! " << endl << endl;

//Output the count of items in Array
        int mycount0 = std::count (userChoice, userChoice + runCount, 1);
            if (mycount0 >0 ){std::cout << "You order " << mycount0 << " House Hold Stuff." << endl;}
        int mycount1 = std::count (userChoice, userChoice + runCount, 2);
            if (mycount1 >0 ){ std::cout << "You order " << mycount1 << " Cloths." << endl;}
        int mycount2 = std::count (userChoice, userChoice + runCount, 3);
            if (mycount2 >0 ){std::cout << "You order " << mycount2 << " Building Tools Suplies. " << endl;}
        int mycount3 = std::count (userChoice, userChoice + runCount, 4);
            if (mycount3 >0 ){std::cout << "You order " << mycount3 << " Decorations." << endl;}             
        int mycount4 = std::count (userChoice, userChoice + runCount, 5);
            if (mycount4 >0 ){std::cout << "You order " << mycount4 << " Yard Art." << endl;}                            
        int mycount5 = std::count (userChoice, userChoice + runCount, 6);
            if (mycount5 >0 ){std::cout << "You order " << mycount5 << " Plants." << endl;}                         
        int mycount6 = std::count (userChoice, userChoice + runCount, 7);
            if (mycount6 >0 ){std::cout << "You order " << mycount6 << " Holiday Supplies." << endl; }                           
        int mycount7 = std::count (userChoice, userChoice + runCount, 8);
            if (mycount7 >0 ){std::cout << "You order " << mycount7 << " Work Supplies." << endl; }                          
        int mycount8 = std::count (userChoice, userChoice + runCount, 9);
            if (mycount8 >0 ){std::cout << "You order " << mycount8 << " Useless Stuff." << endl;}
        int mycount9 = std::count (userChoice, userChoice + runCount, 10);
            if (mycount9 >0 ){std::cout << "You order " << mycount9 << " Supper Useless Stuff no one can use!!!." << endl;} 
        
}
            
/* int c =0;
        for (c=0; c < runCount; ++c)  { 
            ///?????
            



####################################################33         
        

    */     
/*  ****************************************************************************8       
            string itemName;   
            int  houseHoldStuff=0;
            int  cloths =0;
            int  buildingToolsSuplies =0;
            int  decorations =0;
            int  yardArt =0;
            int  holidaySupplies = 0;
            int  plants = 0;
            int  workSupplies = 0;
            int  uselessStuff =0;
            int  supperUseless =0;
               
           int tempValue =userChoice[c];
            switch (tempValue)
            {  
                case 1: itemName = "House Hold stuff" ;
                        houseHoldStuff =  houseHoldStuff + 1;
                        break;
                case 2: itemName = "Cloths";
                        cloths = cloths + 1;
                        break;
                case 3: itemName = "Building tools & suplies";
                        buildingToolsSuplies =buildingToolsSuplies =1;
                        break;                
                case 4: itemName = "Decorations";
                        decorations = decorations +1;
                        break;                
                case 5: itemName = "Yard Art";
                        yardArt =  yardArt +1;
                        break;                
                case 6: itemName = "Plants";
                        plants = plants + 1;
                        break;                
                case 7: itemName = "Holiday Supplies";
                        holidaySupplies = holidaySupplies + 1;
                        break;                
                case 8: itemName = "Work Supplies";
                        workSupplies = workSupplies +1;
                        break;                
                case 9: itemName = "Useless Stuff";
                        uselessStuff = uselessStuff +1;
                        break;                
                case 10: itemName = "Supper Useless Stuff no one can use!!!";
                        supperUseless = supperUseless + 1;
                        break;
       
        cout << "You ordered " << itemName << endl;
        return  houseHoldStuff, cloths, buildingToolsSuplies, decorations, yardArt, plants, workSupplies, uselessStuff, supperUseless;   
        }    }   
            //?????
                cout << "Your Product totals are. " << endl << endl;
                
          *******          if (userChoice[i]houseHoldStuff > 0) {
                       cout << "We are shipping " << houseHoldStuff << "piece of House Hold Stuff" << endl;
                    }
                    if (cloths > 0){
                        cout << "We are shipping " << cloths << "piece of Cloths." << endl;
                    }
                    if (buildingToolsSuplies > 0) {
                       cout << "We are shipping " << buildingToolsSuplies << "piece of Building & Tool Suplies." << endl;
                    }
                    if (decorations > 0) {
                       cout << "We are shipping " << decorations << "piece of Decoration." << endl;
                    }   
                    if (yardArt > 0) {
                       cout << "We are shipping " << yardArt << "piece of Yard Art." << endl;
                    }
                    if (plants > 0) {
                       cout << "We are shipping " << plants << "piece of Plants." << endl;
                    }
                    if (holidaySupplies > 0) {
                       cout << "We are shipping " << holidaySupplies << "piece of Holiday Supplies." << endl;
                    }
                    if (workSupplies > 0) {
                       cout << "We are shipping " << workSupplies << "piece of Work Supplies." << endl;   
                    }
                    if (uselessStuff > 0) {
                       cout << "We are shipping " << uselessStuff << "piece of Useless Stuff." << endl;   
                    }
                    if (supperUseless > 0) {
                       cout << "We are shipping " << supperUseless << "piece of Supper Useless Stuff no one can use!!! ." << endl;   
                    }
               
              
        };

    
                
                
                
/*
#     Create a menu program.  Your menu must have 10 different items for the user to choose from. 
#     The program should allow the user to choose an item until they say they are done.
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

