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
        string firstName;
        string lastName;
        char filingStatus;
        double grossWage;
        double amountWithheld;
        double deductions;
        double taxOwed ;
        
        
        public:      // The class' public functions                                                              
        
        //Overload Consrctor
                TaxCalculator (string fn, string ln, char fs, double gw, double aw) //double TC_)
                {
                            firstName = fn;
                            lastName = ln;
                            filingStatus = fs;
                            grossWage = gw;
                            amountWithheld = aw;
                            money_ = grossWage;
                            taxOwed=0.00;
              
                };
              
        //Default Constructor
                TaxCalculator()
                {
                    firstName = "firstBlank";
                    lastName = "lastBlank";
                    filingStatus = 'b';
                    grossWage = 0;
                    amountWithheld=0;
                    money_=grossWage;
                    taxOwed=0.00;
                };
    
            void    SetTaxAmount(double tc_)
                                
                        {
                          
                            money_ = tc_;                                                                
                        }    
            
            double  GetTaxAmount( )
                        {
                            return  money_;                                                           
                        }  
            
            
            void     SetUserInput()
                        {
                  
                            cout << "Please enter your first name: " ;
                            cin>> firstName;
                            cout << endl << "Please enter your last name: " ;
                            cin>> lastName;
                            cout << endl << "Please enter your filingStatus M for maried and S for single: " ;
                            cin>> filingStatus;
                            cout << endl << "Please enter your gross wages: " ;
                            cin>> grossWage;
                            cout << "Please enter your amount of taxes withheld:" ;
                            cin>> amountWithheld;
                            
                            /*
                            cout << "Testing **** Testing Set User input **** Testing Testing " << endl<< endl;
                            cout << firstName << " " << lastName << " " << filingStatus << " "  << grossWage  
                                 << " "  << amountWithheld << " "  << taxOwed << endl << endl;
                            cout << "Testing **** Testing Set User input **** Testing Testing " << endl<< endl;
                            
                            cout << "Real Data  **********************  "    << endl << endl; */
                            return ;
                        }
            
            double    GetUserInput()            
                        {
                            money_=grossWage;
                        taxOwed =0.00;
                            
                            if (filingStatus == 'M'|| filingStatus == 'm')
                                {
                                            if (grossWage<0)
                                                    {    
                                                        double taxOwed = 0;
                                                    }
                                                    else if ( grossWage <= 17850)
                                                            {
                                                                taxOwed = (money_ )* .10;
                                                            }
                                                    else if ( grossWage<= 72500)
                                                            {
                                                                taxOwed = ((((money_) - 17850) * .15) + 1785) ;        
                                                            }
                                            else 
                                                    {
                                                        taxOwed = ((((money_)- 72500) * .28) + 9982.50); 
                                                    }   
                                    }
                                
                            else if (filingStatus == 'S'|| filingStatus =='s')
                                    {
                                            if (grossWage<0)
                                                {    
                                                    taxOwed = 0;
                                                }
                                            else if ( grossWage <= 8925)
                                                        {
                                                            taxOwed = (money_)* .10;
                                                        }
                                            else if ( grossWage <= 36,250)
                                                        {
                                                            taxOwed = ((((money_) - 8925) * .15) + 892.50) ;        
                                                        }
                                            else if ( grossWage <= 87850)
                                                        {
                                                            taxOwed = ((((money_) - 36250) * .25) + 4991.25) ;
                                                        }
                                            else 
                                                {
                                                    taxOwed = ((((money_) - 87850) * .28) + 17891.25) ;        
                                                }
                                    }
                             else 
                                    {    
                                        cout << "Please enter a valid Letter!" << endl;
                                    }
                            //taxOwed= taxOwed  > = <  amountWithheld;
                                
                            return money_, taxOwed;                                                           
                        }        
                        
                double   PrintAmount()
                            {
                                cout << "This is " << firstName << " " << lastName << "'s 2016 tax return data." << endl;
                                cout << "The filing status is '" << filingStatus << "'" << endl;
                                cout << "The input of  $"  << grossWage  << " for your gross wage and $"  << amountWithheld << " for your amount withheld." << endl;
                                cout << "You owe $" << taxOwed << " before your amount withheld." << endl;
                                            
                                            if (taxOwed > amountWithheld){
                                                taxOwed = taxOwed - amountWithheld;
                                                cout << "You owe $" << taxOwed << " after subtracting the amount withheld." << endl << endl;
                                            }
                                            else if (taxOwed < amountWithheld){
                                                taxOwed = amountWithheld - taxOwed;
                                                cout << "You are getting " << amountWithheld << " returned to you this year. " << endl << endl;
                                            }
                                            else { 
                                                taxOwed =0;
                                                cout << "You owe $" << taxOwed << " after subtracting the amount withheld. " << endl << endl;
                                            }
                            }
        private:
};
     

int main ()
{
    TaxCalculator taxAmt_1; //testing default constructor
    TaxCalculator taxAmt_2("Jared", "Didier", 'S', 20000.00, 3000.00); //testing overloaded constructor
   
   /* taxAmt_1.PrintAmount();
    taxAmt_2.PrintAmount();*/
    
   // Joe Vandal, single, Wages: $12,100, Withheld: $250
    
    taxAmt_1.SetUserInput( );//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();

   //  Alfonso Haynes, married, Wages: $32,351, Withheld: $3,192
    
    taxAmt_1.SetUserInput();//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();
    
    //  Bridget Rowe, single, Wages: $88,229, Withheld: $12,057
    
    taxAmt_1.SetUserInput( );//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();

    //  Wendy Joseph, married, Wages: $73,291, Withheld: $6,972
    
    taxAmt_1.SetUserInput();//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();

    cout << endl;  
}

/*
Requirements

 At least one if/else statement
Input

    Joe Vandal, single, Wages: $12,100, Withheld: $250
    Alfonso Haynes, married, Wages: $32,351, Withheld: $3,192
    Bridget Rowe, single, Wages: $88,229, Withheld: $12,057
    Wendy Joseph, married, Wages: $73,291, Withheld: $6,972
*/