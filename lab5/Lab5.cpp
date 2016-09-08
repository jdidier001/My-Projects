/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
1.5 Lab Monstar Program
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
struct Monstar {
    
string Head = "Wackus";
string Nose = "Zombus";
string Mouth = "Spritiem";
string Eyes = "Zombus";
string Ears = "Wackus";
string Name = "Tyrant";

};

int main() {
 Monstar Tyrant;
 
 
 cout << "My monstar is " << Tyrant.Name << endl;
 cout << "His head is " << Tyrant.Head << endl;
 cout << "and his Nose is " << Tyrant.Nose << endl;
 cout << "his mouth is " << Tyrant.Mouth << endl;
 cout << "his eyes are " << Tyrant.Eyes << endl;
 cout << "and he has a " << Tyrant.Ears << " style of ears!";
 
 
return 0; 
};




