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
        
       while (n < 60)
           {
                while(m <60)
                        {
                        while(m <10)
                                {
                                  
                                    cout << "1:0"<< 0+m << " pm" << endl;
                                
                                    m= m+1;
                                };
                        
                        
                          
                            cout << "1:"<< 0+m << " pm" << endl;
                        
                            m= m+1;
                        };
         
           
                while(n <60)
                        {
                                while(n <10)
                                    {
                                        cout << "2:0"<< 0+n << " pm" << endl;
                                        n= n+1;
                                    };
                        
                            cout << "2:"<< 0+n << " pm"  << endl;
                            n = n +1;
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
    cout << "Start " << startHour << " End " << endHour << " Loop Run Times ";
    
    runTimes = endHour- startHour;
    
    cout << runTimes << endl  << endl;
    int i = 0;
   
    int stNum = startHour;
     
     if (stNum < 12) 
                {TimeOfDay = "am";}
            else
                {TimeOfDay = "pm";}      
                
    while ( i < runTimes){        
            i=i+1;
            
            int n =0;
            int m =0;
           while (n < 60)
               {
                    while(m <60)
                            {
                            while(m <10)
                                    {
                                        cout << stNum << ":0"<< 0+m << " " << TimeOfDay << endl;
                                        m= m+15;
                                    };
                                cout << stNum << ":"<< 0+m << " " << TimeOfDay <<  endl;
                                m= m+15;
                                n=60;                            
                                
                            };
                    
                };
                stNum= stNum + 1; 
    }
    cout << stNum  << ":00"  << " " << TimeOfDay <<   endl;
}

int main(){
 counter();
 userInfo();
 
};