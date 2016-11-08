/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 17
10-31-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-31-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab17
    git commit –a –m ‘Submissions Lab 16’
    git push


*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <string>
#include <fstream>

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




string getUserInput(){
    string  userFirstName [10]; // Input string
    string  userLastName[20]; // Input string
    string userNameChoice; // The email name that the user picks
    int   i = 0; 
   
    // Prompt user for name
   
    
            i=0;
            while (i!=1){
               cout << "Please enter your first name (<10 chars): ";
               cin >> userFirstName; // gets name
                        string First (userFirstName);
                        
                            if (First.length()>10)//compares length to max length of first name
                                    {
                                        i=0;    
                                        cout << "The Stirng is longer than the allowed 10 characters" << endl;
                                    }
                            else
                                    {
                                        i=1;
                                    }
            }   
            
            i=0;
             while(i!=1)  {
               cout << "Please enter your last name (<20 chars): ";
               cin >> userLastName; // Sets last name
                        
                        string Last (userLastName);
                        
                            if (Last.length()>20)// Compares length of input to max length 
                                    {
                                       i=0;
                                       cout << "The Stirng is longer than the allowed 20 characters" << endl;
                                    }
                            else
                                    {
                                        i=1;
                                    }
             
             }
             //setup of first to last comparison
        string entFirst (userFirstName);
        string entLast (userLastName);
     
    
    if (entFirst.compare(entLast) != 0){// compares values of both names
            cout << "Your first name " << entFirst << " is not the same as your last name " << entLast << '\n';
            cout << endl;
        }
    else
        {   cout << "You entered the same name for both the First and Last name fields. " << endl;
            cout << "We will AssUMe you have the same name for both fields? " << endl;
            cout << endl;
        }

cout << "Name: " << userFirstName << " " << userLastName<< endl<< endl;

//user name conversion

  string First(userFirstName);
  string Last(userLastName);

  cout << userFirstName <<  userLastName << "@myCoolCompany.jwd" << endl;

  string userName2 = First.substr (0,1);     // Gets first initial of First name
  cout << userName2 << userLastName << "@myCoolCompany.jwd" << endl;
  
  string userName1 = First.substr (0,2);     // Gets first two initials of First name
  cout << userName1 << userLastName << "@myCoolCompany.jwd" << endl;
  
  string userName3 = First.substr (0,3);     // Gets first three initials of First name
  cout << userName3 << userLastName << "@myCoolCompany.jwd" << endl;
  
  string userName4 = First.substr (0,3);     // Gets first three initials of First name and Last name
  string userName5 = Last.substr (0,3);
  cout << userName4 << userName5 << "@myCoolCompany.jwd" << endl << endl;
  


cout <<"Which user email address would you prefer? " << endl;
cout << "Please type your choice" << endl; //Lets user pick there name
cin >> userNameChoice;
cout<< "You picked " << userNameChoice << " nice decision!" << endl;


return  userFirstName,  userLastName;
};





int main() {
    
    
    getUserInput();
  

    return 0;
}
/*
#     Problem Statement

This program is responsible for creating user names for a new website you have created.  It should accept a first name of up to 10 characters and a last name of up to 20 characters.  It should tell the user if the name is larger than the max size.  It should also determine if the names are the same and output a warning.  After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
Requirements

    Use ONLY C string and character manipulation tools

Input

    Your name
    April Browne
    AnaElizabeth Hazeltine-Smith
    James James

Output

Name: April Browne

Which of the three user names would you like:

    apbrowne
    aprilbrowne
    abrowne


Submission:

Post your lab to GitHub.

Submit to the Canvas assignment.  Put in any comments you want me to know.
*/