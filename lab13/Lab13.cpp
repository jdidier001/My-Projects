/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 13
10-10-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-10-16

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

int main(){

        int m = 0;
        int n = 0;
        
       while (n < 60)
           {
                while(m <60)
                        {
                        while(m <10)
                                {
                                  
                                    cout << "1:0"<< 0+m << endl;
                                
                                    m++;
                                };
                        
                        
                          
                            cout << "1:"<< 0+m << endl;
                        
                            m++;
                        };
         
           
                while(n <60)
                        {
                                while(n <10)
                                    {
                                        cout << "2:0"<< 0+n << endl;
                                        n++;
                                    };
                        
                            cout << "2:"<< 0+n << endl;
                            n++;
                        };
            };
};

/*
Problem Statement

Create a program that will print every minute between two values.

First, start by programming every minute between 1:00 pm and 2:59 pm using one or more loops.

Second, accept user input for a start hour and ending hour.  Print every 15 minute interval between these two times.
Requirements

 Use the appropriate loops.
Input

Your choice.
Output

Appropriate input questions.

Output in time including am/pm.
Submission:

Post your lab to GitHub.

Take a screenshot of your lab running.  Submit the document to the Canvas assignment.  Put in any comments you want me to know.*/
