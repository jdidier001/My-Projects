/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 7
9-18-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 9-18-16

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


 // Where is Thumbkin? Variables Setup
 string fingName = "  ";
 string runSpeed = "   ";

 string fingName1 = "Thumbkin";
 string oneTimeFast = "one time as fast as you can!";
 
 string fingName2 = "Pointerman";
 string twoTimeFast = "two times as fast as before!";
 
 string fingName3 = "Middleman";
 string threeTimeFast = "three times as fast as before!";
 
 string fingName4 = "Ringman";
 string fourTimeFast = "four times as fast as before!";
 
 string fingName5 = "Pinkie";
 string fiveTimeFast = "five times as fast as before!";
 


void SongMainVerse(string& fingName) {

cout << "Where is " << fingName << "?" << endl;
cout << "Where is " << fingName << "?" << endl;
cout << "Here I am!" << endl;
cout << "Here I am!" << endl << endl;

    
}                                                                             

void SongChoursVerse(string& runSpeed) {

cout << "How are you today, sir?" << endl;
cout << "Very well, I thank you." << endl;
cout << "Run away " << runSpeed << endl;  
cout << "Run away " << runSpeed << endl << endl;  

    
}


int main(){

SongMainVerse(fingName1);
SongChoursVerse(oneTimeFast);

SongMainVerse(fingName2);
SongChoursVerse(twoTimeFast); 
 
SongMainVerse(fingName3);
SongChoursVerse(threeTimeFast); 

SongMainVerse(fingName4);
SongChoursVerse(fourTimeFast);

SongMainVerse(fingName5);
SongChoursVerse(fiveTimeFast);

art();   
}