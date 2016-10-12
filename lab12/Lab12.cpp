/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 12
10-8-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-8-16

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

int figCar()
    {
        cout << "What kind of car are you? Figure out game." << end;
    cout <<  "Please type your answer in as Y or N." << endl << "Do you haul a lot of things?" << endl;
    cin >> string haulValue = " ";
    
        if (haulValue ==  Y || y ) 
            cout "Please type your answer in as Y or N." << endl << "Do you have a bed?" << endl;
            cin >> string bedValue = " ";
            
                if (bedValue == Y || y)
                    cout << "You are a Truck" << endl;
                    
                else if (bedValue == N || n)
                    cout << "You are a Van" << endl;
                    
                else 
                    cout << "You did not enter a valid option for a bed value,  start again." << endl;
                    
        else if (haulValue == N || n)
            cout "Please type your answer in as Y or N." << endl << "Do you have a two doors?" << endl;
            cin >> string doorValue = " ";
                
                if (doorValue == Y || y)
                    cout << "You are a a sports car" << endl;
                    
                else if (doorValue == N || n)
                    cout << "You are a boring 4 door" << endl;
                else 
                    cout << "You did not enter a valid option  for doors, start again." << endl;
        else 
                    cout << "You did not enter a valid option for hauling, start again." << endl;
    };
        

int main()
{
   switch case to recreate the flow chart.
Input
    figCar();
    
    
    
};




