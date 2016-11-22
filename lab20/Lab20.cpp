#include <iostream>     // setup input output database of functions.

#include <cstring>     // setup c string database of functions. 

using namespace std;    // using the standard functions.

 

int main()              // the main program

{

                char firststr[10];      //  Sets a string with 10 spaces

                int firstname = 0;      // initilizes the firstname variable.

                char *head = firststr;  // sets pointer to the same value of firststr ????????????????????????????????????????

                char *tail = firststr;  // sets pointer to the same value of firststr  ????????????????????????????????????????

                cout << "Please enter a 10 letter word or less" << endl;  //Outputs the phrase

                cin >> firststr;                 // assigns the value that 

                strlen(firststr);                // finds the length of the string

                firstname = strlen(firststr);   // sets first name equal to the length of first string

                cout << "Your word is " << firststr << endl;    // outputs the phrase.

                if (firstname<10)                                   // comparison that firstname is less than 10

                {

                                while (*head != '\0')               // compares pointer to end of line????????????????????????????????????
                                

                                {

                                                cout << *head;          // outputs pointer head   ????????????????????????????????????????????????

                                                head++;                 // adds one to head

                                }

                }

                else                                                                // comparison that firstname is something else larger than 10

                {

                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;        //outputs phrase to screen.

                }

                cout << endl;                                                               //Starts new line

                tail = &firststr[strlen(firststr) - 1];                                     // Something to do with pointers ????????????????????????????????

                if (firstname < 10)                                                         // comparison that firstname is less than 10

                {

                                while (*tail>0)                                             // compares pointer to tail   ????????????????????????????????????

                                {

                                                cout << *tail;                              // outputs pointer tail   ????????????????????????????????????????????????

                                                tail--;                                     // subtracts 1 from tail

                                }

                }

                cout << endl;                                                                       //Starts new line

                head = firststr;                                                                    //Sets head equal to firststr

                tail = &firststr[strlen(firststr) - 1];                                             // sets tail equal to something to do with pointers ?????????????????????????????????????

                head++;                                                                             // adds one to head

                tail--;                                                                             // subtracts 1 from tail

                if (*head == *tail)                                                                 //Compares pointers to eachother

                {

                                cout << "It is an palindrome!" << endl;             // outputs to screen the phrase

                }

                else

                {

                                cout << "It is not an palindrome" << endl;          // outputs to screen the phrase

                }

 

                return 0;                                                               // returns 0

}