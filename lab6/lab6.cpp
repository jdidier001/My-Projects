/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Assignment 1
9-7-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 9-7-16

_________________________________________________
**Notes**

*/


#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//Initiize the Variables
int hours = 0;
double rateOfPay = 00.00;
double taxes = .17;
string  nameFirst = " ";
string  nameLast = "  ";
int grossPay = 0;
int netPay = 0;
int taxedAmount = 0;

int art() {
    
    cout << "Wasteful Engineering" << endl;  
    cout << "          #         " << endl;
    cout << "         #*#        " << endl;
    cout << "        #***#       " << endl;         
    cout << "       #*****#      " << endl;
    cout << "        #***#       " << endl;         
    cout << "        #***#       " << endl;
    cout << "        #***#       " << endl;
    cout << "        #***#       " << endl;
    cout << "        #***#       " << endl;
    cout << "        #***#       " << endl;
    cout << "       #*****#      " << endl;
    cout << "      *#*****#*     " << endl;
    cout << "     **#*****#**    " << endl;
    cout << "    ***#*****#***   " << endl;
    cout << "          $         " << endl;
    cout << "         $$$        " << endl;
    cout << "        $$$$$       " << endl;         
    cout << "       $$$$$$$      " << endl;
    cout << "We help the government burn your money!" << endl << endl;
    cout << "Copyright Jared W Didier 2016";

};

int main(){
    
//Get users hours for the week.

cout << "Hello! I am 'HAL'. What can i call you?" << endl <<   "First Name" << endl;
cin >> nameFirst;
cout <<  "Last name " << endl;
cin >> nameLast;


cout << "Please enter your hours you worked this week " <<endl;
cin >> hours;

cout << "What is your hourly pay? " <<endl;
cin >> rateOfPay;

cout << endl<< endl<< nameFirst << " " << nameLast << " you entered " << hours << " hours." << " at a rate of $" << rateOfPay << "  per hour. "  << endl;



// Calculate taxes and pay

grossPay = (hours * rateOfPay);

taxedAmount = (grossPay*taxes);

netPay = (grossPay-taxedAmount);


//Output Wage slip
cout <<endl << endl << nameFirst << " " << nameLast << endl;
cout << "Your gross pay is $" << grossPay << "." << endl;
cout << "we had to tax you $" << taxedAmount << endl;
cout << "You take home $" << netPay << "." << endl;

 art();
 


};


