/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 8
9-19-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 9-19-16

_________________________________________________
**Notes**

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
double numPounds =0.00;
double numKilos = 0.00;
double convertedKilos =0.00;
double convertedPounds =0.00;


// Gets user input of Pounds
int ToPounds()
{
 cout << "Please enter a number in pounds"   << endl;
    cin >>   numPounds;
    convertedKilos = numPounds *2.205;
    cout << endl << numPounds << " is " << convertedKilos << " Kilos!" << endl << endl;   
}

// Gets user input of Kilos
int ToKilos()
{
   cout << "Please enter a number in Kilos" << endl;
    cin >>  numKilos; 
    convertedPounds = numKilos/2.205;
    cout << endl << numKilos << " is " << convertedPounds << " pounds!" << endl << endl;
      
}

//Runs Program
int main()
{
  ToPounds();
  ToKilos();
  
};