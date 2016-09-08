/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
1.3 Lab - Mad Libs
9-1-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 9-1-16
_________________________________________________
**Notes**


*/


#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int main() {
// setting up the variables.

    char userFirstIntialLastName;
    int userAge;
    float userDecimal;
    string nounOne = "";
    string nounTwo = "";
    string nounThree = "";
    string nounPlural = "";
    string adjective  =  "";
    string place = "";
    
// this is where i ask for the words from the user.


cout << "Please input the first intial of your last name  " ;
cin >> userFirstIntialLastName;

cout << "Please input your age " ;
cin >> userAge;

cout << "Please enter a decimal ";
cin >> userDecimal;

cout << "Please input an Noun " ;
cin >> nounOne;
cout << "Please input an Plural Noun " ;
cin >> nounPlural ;
cout << "Please input an Noun " ;
cin >> nounTwo ;
cout << "Please input an Place " ;
cin >> place ;
cout << "Please input an adjective " ;
cin >> adjective;
cout << "Please input an Noun " ;
cin >> nounThree; 


// putting the user input together with the story.
cout << endl << endl;
cout << "Hello " << userFirstIntialLastName << endl;
cout << "Your age is " << userAge << endl;
cout << "The decimal you chose was " << userDecimal << endl;
cout << "Be kind to your " << nounOne  << "-footed " << nounPlural<< endl;
cout << "For a duck may be somebody`s " << nounTwo << endl;
cout << "Be kind to your " << nounPlural << " in " << place << "." << endl;
cout << "Where the weather is always " << adjective << endl << endl;
cout << "You may think that this is the " << nounThree << " " << endl;
cout << "Well it is.";
}