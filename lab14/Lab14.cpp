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
    
    git add lab14
    git commit –a –m ‘description of your choice’
    git push


*/
#include <iostream> 
using namespace std; 

int main() {  

 // Declare variables        
int count=0;        
double total=0;        
double minimum=100;        
double grade;         

// Read numbers in until we see the -1        
// Sum up grades as we do, and look for minimum        


while (grade != -1) {               
     cout << "Enter Grades "<< endl;
     cin >> grade;         
 if (grade >= 0){
     total = total + grade;               
     count = count + 1;               
        	if (grade < minimum) 
        	{                       
           minimum = grade;               
         }  
   }                           
}         
// Output results        
double average = 0.00;

       average = total / count;

cout << "Average was " << average << endl;        
cout << "Minimum was " << minimum << endl;         

return 0;

}
 
//Correct output
