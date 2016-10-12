/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 11
10-6-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-6-16

_________________________________________________
**Notes**
*************************************
Submissions=
    
    git add lab#
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


class TaxCalculator
{
        double money_;
        string filingStatus = " ";
        
        public:      // The class' public functions                                                              
        
        //Overload Consrctor
                TaxCalculator (double TC_)
                {
                    money_= TC_;
                };
              
        //Default Constructor
                TaxCalculator()
                {
                    money_=0;
                };
    
            void    SetTaxAmount(double ta_)
                        {
                            money_ = ta_;                                                                
                        }    
            
            double  GetTaxAmount( )
                        {
                            return money_;                                                           
                        }  
            
            void    SetMaritalStatus(string SorM="  ")
                        {
                           string filingStatus = SorM;                                                                
                        }    
            
            string  GetMaritalStatus( )
                        {
                            return filingStatus;                                                           
                        }
            
            void     SetUserInput( )
                        {
                           cout << "testing Set User input ";
                        } 
            
            double    GetUserInput(string firstName, string lastName, string filingStatus, double grossWage, double amountWithheld)             

                        {
                           // money_ = wage + interest + unemployment;
                           if (filingStatus = ("M"||"m"));
                                    
                                    money_ = money_ - (2 * (3900 + 6100));
                                    
                                    /*
                                   
                                    $72,501 and above  $9,982.50 plus 28% of the excess over $72,500

*/
                                            if (money_<0);
                                                    
                                                    double taxOwed = 0;
                                            
                                            else if ( money_ <= 17850);
                                            
                                                    taxOwed = money_* .10;
                                            
                                            else if ( money_ <= 72500);
                                            
                                                    taxOwed = (((money_ - 17850) * .15) + 1785) ;        
                                            
                                            else 
                                                    taxOwed = (((money_ - 72500) * .28) + 9982.50);        
                                    
                            else if filingStatus == ("S"||"s");
                                
                                    
                                            if (money_<0);
                                                    
                                                    taxOwed = 0;
                                            
                                            else if ( money_ < 8925);
                                            
                                                    taxOwed = money_* .10;
                                            
                                            else if ( money_ < 36,250);
                                            
                                                    taxOwed = (((money_ - 8925) * .15) + 892.50) ;        
                                            
                                            else if ( money_ < 87850);
                                            
                                                    taxOwed = (((money_ - 36250) * .25) + 4991.25) ;
                                            
                                            else 
                                            
                                                    taxOwed = (((money_ - 87850) * .28) + 17891.25) ;        
                                                
                             else 
                                    
                                    cout << "Please enter a valid Letter!" << endl;
                               
                            return money_;                                                           
                                }  
                        
                double   PrintAmount()
                        {
                            cout << "The printout is " << money_ << endl << endl;                                 
                        }              
        private:
};
                        
/*
You are creating a program that will calculate the 
income tax
amount owed
refunded for a person (or couple).  

name, 
filing status (single or married), 
gross wages, 
salaries and tips 
amount of tax withheld.  

It will then calculate the taxes as follows:

    Add the three income sources (wages, interest and unemployment) together to get the adjusted gross income.
    Subtract the personal exemption of $3,900 and the standard deduction of $6,100. For a joint (married) return, these amounts are subtracted for each person.
    If the resulting number is less than zero, then the owed tax is zero. If the number is above zero, use the tax tables to calculate the tax.
*/

int main ()
{
    TaxCalculator()  taxAmt_1; //testing default constructor
    TaxCalculator()  taxAmt_2(100); //testing overloaded constructor
    
    cout << endl;  
    
/*    taxAmt_1.SetTaxAmount(100);  //testing mutator function
    cout <<  "1. You deposited " << taxAmt_1.GetDepositAmount() << endl;//testing accessor function
    taxAmt_1.PrintAmount(); */
};