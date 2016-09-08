/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
1.4 Lab CoinStar Program
9-2-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 9-2-16
_________________________________________________
**Notes**

*/
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int main() {


// the  count of the money zeroed out
int  quarterCount = 0;
int  dimeCount = 0;
int  nickleCount = 0;
int  pennyCount = 0;

//for counting coins value
int coinValue = 0;
double costToUse = .109;
double payOutValue = 0;
double processFeeTotal = 0;

//for value of each coin
int quarterValue = 25;
int  dimeValue = 10;
int nickleValue = 5;
int pennyValue = 1;


//capture user input
int userCoinInput = 0;
int coinValueToDimes = 0;
int coinValueToNickle = 0;
int coinValueToPennies = 0;



//Get input and convert into the function
cout << "Please enter the total value of the coins without a decimal place. " << endl;
cin  >> userCoinInput;

coinValue = userCoinInput;
cout << "You entered " << userCoinInput << "." << endl;
coinValue = userCoinInput;

//Quarters
coinValueToDimes = coinValue % quarterValue;
quarterCount = (coinValue/quarterValue);

//Dimes
coinValueToNickle = coinValueToDimes % dimeValue;
dimeCount = (coinValueToDimes/dimeValue);

//Nickles
coinValueToPennies = coinValueToNickle % nickleValue;

nickleCount = (coinValueToNickle/nickleValue);

// Pennies
pennyCount = (coinValueToPennies/pennyValue);


// fee processing
processFeeTotal= (userCoinInput*costToUse);
cout << processFeeTotal << endl;
payOutValue = (userCoinInput - processFeeTotal);

// Outputting the values in statements
cout << "You gave me " << quarterCount << " Quarters, and ";
cout << dimeCount << " Dimes, " << endl;
cout << "and " << nickleCount << " Nickles, and " ;
cout << pennyCount << " Pennies. " << endl;
cout << "The original dollar amount was $ " << userCoinInput << endl;
cout << "After a usage fee of " << costToUse << "%" << endl;
cout << "you now recieve $" << payOutValue << ". " << endl;
cout << "Now I’m a baller!!!";

};
