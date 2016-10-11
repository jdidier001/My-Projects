/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 10
10-2-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-2-16

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

int main()
{
    
int suzyAge = 25;
int johnAge = 21;
cout<< "1. answer to logic problem is " << (suzyAge < johnAge) << " The problem is (suzyAge < johnAge) when suzyAge = 25 & johnAge = 21 " << " if 0 = false,  Anything else is a true statement" << endl;

int x =7;
int y = 7;
cout<< "2. answer to logic problem is " << (x >= y) << " The problem is (x >= y) when x =7 & y = 7 " << " if 0 = false,  Anything else is a true statement"<< endl;


int a = 1;
int b = 9;
cout<<"3. answer to logic problem is " << (a == b) << " The problem is (a == b) when a = 1 & b = 9 " << " if 0 = false,  Anything else is a true statement"<< endl;

int limit = 20;
int count = 10;
cout<< "4. answer to logic problem is " << ((limit*count)/2 > 0) << " The problem is ((limit*count)/2 > 0) when limit = 20 & count = 10 " << " if 0 = false,  Anything else is a true statement"<< endl;

int t = -4;
int z = 0;
cout<<"5. answer to logic problem is " << (t > 5 || z < 2) << " The problem is (t > 5 || z < 2) when t = -4 & z = 0 " << " if 0 = false,  Anything else is a true statement"<< endl;

int variable = -5;
cout<<"6. answer to logic problem is " << (!(variable >0)) << " The problem is (!(variable >0)) when variable = -5 " << " if 0 = false,  Anything else is a true statement"<< endl;

int A = 16;
cout<<"7. answer to logic problem is " << (A/4 < 8 && A >= 4) << " The problem is (a/4 < 8 && a >= 4) when a = 16 " << " if 0 = false,  Anything else is a true statement"<< endl;

int X = -2;
int Y = 5;
cout <<"8. answer to logic problem is " <<(X*Y < 10 || Y*z < 10)<< " The problem is (x*y < 10 || y*z < 10) when x = -2 & y = 5 " << " if 0 = false,  Anything else is a true statement"<< endl;

int j = -2;
int k = 5;
int l = 4;
cout << "9. answer to logic problem is " << (!(j*l < 10) || Y/X * 4 < Y *2) << " The problem is (!(j*l < 10) || y/x * 4 < y *2) when j = -2, l = 4 & k = 5 " << " if 0 = false,  Anything else is a true statement"<< endl;    
    
}

