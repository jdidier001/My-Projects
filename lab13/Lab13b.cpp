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
#include <chrono>

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



int counter(){
        int m = 0;
        int n = 0;
        
       for (int n; n < 3; n++)
           {
                for(int m; m <60; m++)
                        {
                        for (m; m <10; m++)
                                {
                                    cout << "1:0"<< 0+ m << " pm" << endl;
                                };
                            cout << "1:"<< m << " pm" << endl;
                        };
                for(int o; o <60; o++)
                        {
                        for(o; o <10; o++)
                                    {
                                        cout << "2:0"<< 0+ o << " pm"<< endl;
                                    };
                            cout << "2:"<<  o << " pm" << endl;
                        };  
            };
}

int userInfo(){
    string TimeOfDay = " ";
    int startHour = 0;
    int endHour = 0;
    int runTimes = 0;
    
    cout << endl;
    cout << "Please enter a beginning hour military time. First digit/s only. ";
    cin >> startHour;
    cout << "Please enter an ending hour military time. First digit/s only. ";
    cin >> endHour;
    
    cout << endl;
    cout << "Start Hour" << startHour << " End Hour " << endHour << " Loop Runs "; 
    
    runTimes = endHour- startHour;
    
    cout << runTimes << " Times " << endl  << endl;
    
    int stNum = startHour;
    int i = 0;  
       
    for(i ; i < runTimes; i++){ 
            
            int n =0;
            int u =0;
           
            if (stNum < 12) 
                {TimeOfDay = "am";}
            else
                {TimeOfDay = "pm";}
           
           
            for (n=0; n < 1; n++)
               {
                    for(u; u <60; u=u+15)
                            
                            {
                             for(u; u <15; u=u+15)
                                    {
                                      cout << stNum << ":0"<< 0+u << " " << TimeOfDay << endl;   
                                    };
                                cout << stNum << ":"<< 0+u << " " << TimeOfDay  << endl;
                            };
                stNum= stNum + 1;
                };
                
    };
    cout << stNum  << ":00" << " " << TimeOfDay    <<  endl;
}

int main(){
 counter();
 userInfo();
 
};