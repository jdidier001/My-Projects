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
