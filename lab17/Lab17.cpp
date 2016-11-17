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
#include <cstring>

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




char getUserInput(){
    char userFirstName [10]; // Input char max 10
    char userLastName[20]; // Input char max 20
    char userNameChoice; // The email name that the user picks
    int  i = 0; 
    int  j = 0;
    
    // Prompt user for name and verfy it
   
    j = 0;
    while(j=0) // Gets validates first and last names name to size alotment
            i=0;
            while (i!=1){ // Gets first name validates it
               cout << "Please enter your first name (<10 chars): ";
               cin >> userFirstName; // gets name
                        int firstNameSz = strlen(userFirstName);
                        
                            if (firstNameSz>10)//compares length to max length of first name
                                    {
                                        i=0;    
                                        cout << "The Stirng is longer than the allowed 10 characters" << endl;
                                    }
                            else
                                    {
                                        i=1;
                                    }
            }   
            // Makes answer all lower case
            i=0;
            while(i<10){
                userFirstName[i] = tolower(userFirstName[i]);
                i++;
          }
         
            i=0;
             while(i!=1)  { // Gets last name validates it
               cout << "Please enter your last name (<20 chars): ";
               cin >> userLastName; // Sets last name
                        
                        int lastNameSz = strlen(userLastName);
                        
                            if (lastNameSz>20)// Compares length of input to max length 
                                    {
                                       i=0;
                                       cout << "The Stirng is longer than the allowed 20 characters" << endl;
                                    }
                            else
                                    {
                                        i=1;
                                    }
             
             }
          // Makes answer all lower case
          i=0;
          while(i<20){
              userLastName[i] = tolower(userLastName[i]);
              i++;
          }
   // Compares first and last names then ask user to make sure they have the same first and last names this allows them to change one of them if there is a mistake.
                    i=0;
                   while( i!=1){ 
                    if (strcmp(userFirstName,userLastName) != 0){// compares values of both names
                            cout << "Your first name " << userFirstName << " is not the same as your last name " << userLastName << '\n';
                            cout << endl;
                            i=1;
                            j=0;
                            
                        }
                    else
                        {   cout << "You entered the same name for both the First and Last name fields. " << endl;
                            cout << "Are the the same name for both fields? Please enter Y  or N" << endl;
                            char answer;
                            cin >> answer;
                            answer = tolower(answer);
                            
                                    if(answer ='y'){
                                        j=0;}
                                    else if (answer = 'n'){
                                        j=1;}
                                    else {
                                        cout << "Invalid entry!! Restarting";
                                        j=1;}
                        }
            
        }



//user name conversion
    char  company1stOpt [22];   // Input char max 10
    char  company2ndOpt [30];    // Input char max 20
    char  company3rdOpt [21];    // Input char max 20
    
            memset(company1stOpt, 0, 22);       // resets Memory values to eliminate false information
            memset(company2ndOpt, 0, 30);       // resets Memory values to eliminate false information
            memset(company3rdOpt, 0, 21);       // resets Memory values to eliminate false information


            strncpy(company1stOpt, userFirstName, 2);      // copies the first 2 char in userfirstname and puts them in company1stOpt
            strncpy(company2ndOpt, userFirstName, 10);     // copies the first 10 char in userfirstname and puts them in company2ndOpt
            strncpy(company3rdOpt, userFirstName, 1);      // copies the first char in userfirstname and puts them in company3rdOpt
                  
            strcat(company1stOpt, userLastName);  // adds the last name to the first 2 char in userfirstname and puts it all in company1stOpt
            strcat(company2ndOpt, ".");  // adds period and puts it at the end of company2ndOpt
            strcat(company2ndOpt, userLastName);  // adds the last name to the first 10 char in userfirstname and puts it all in company2ndOpt
            strcat(company3rdOpt, userLastName);  // adds the last name to the first  char in userfirstname and puts it all in company3rdOpt


cout << "Name: " << userFirstName << " " << userLastName<< endl<< endl;

cout <<"Which user email address would you prefer? " << endl;

cout << "1. " << company1stOpt << endl;
cout << "2. " << company2ndOpt << endl;
cout << "3. " << company3rdOpt << endl;
cout << "Please type your choice" << endl; //Lets user pick there name

cin >> userNameChoice;


switch (userNameChoice){

    case '1':
                cout<< "You picked the first option " << company1stOpt <<  " nice decision!" << endl;
                cout<< "Your complete new company email address is " << company1stOpt <<  "@mycoolcompany.com" << endl;
            break;
    case '2':
                cout<< "You picked the second option " << company2ndOpt <<  " nice decision!" << endl;
                cout<< "Your complete new company email address is " << company2ndOpt <<  "@mycoolcompany.com" << endl;
            break;
    case '3':
                cout<< "You picked the third option " << company3rdOpt <<  " nice decision!" << endl;
                cout<< "Your complete new company email address is " << company3rdOpt <<  "@mycoolcompany.com" << endl;
            break;
    default: 
             cout << "Default for case statement " << endl;
    }
};

int main() {
    
    getUserInput();
  
    return 0;
}
/*
#     Problem Statement

This program is responsible for creating user names for a new website you have created.  It should accept a first name of up to 10 characters and a last name of up to 20 characters.  It should tell the user if the name is larger than the max size.  It should also determine if the names are the same and output a warning.  After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
Requirements

    Use ONLY C char and character manipulation tools

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