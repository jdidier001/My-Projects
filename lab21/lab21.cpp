#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 21
11-24-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 11-8-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab21
    git commit –a –m ‘Submissions Lab 21’
    git push


*/
/*
 *  This class is a dummy class to help show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 1 on initialization
 *  and output it using the Output() function.
 */

#include "lab21.h"
#include "MyClass.h"

int randomNumber(){
        srand(time(0));
   return ((rand()% 10) + 1);
}

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;
  // Call the output member function
  object.Output();
  // This ends our program
  return 0;
}

