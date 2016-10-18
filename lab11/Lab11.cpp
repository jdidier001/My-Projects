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
                            money_ = gw;
                            taxOwed=0.00;
                            
                   // money_= TC_;
                };
              
        //Default Constructor
                TaxCalculator()
                {
                    firstName = "firstBlank";
                    lastName = "lastBlank";
                    filingStatus = 'b';
                    grossWage = 0;
                    amountWithheld=0;
                    money_=0;
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
            
            /*void    SetMaritalStatus(char SorM='')
                        {
                           char filingStatus = SorM;                                                                
                        }    
            
            string  GetMaritalStatus( )
                        {
                            return filingStatus;                                                           
                        } */
            
            void     SetUserInput(string userfn, string userln, char userfs, double usergw, double useraw )
                        {
                           
                            firstName = userfn;
                            lastName = userln;
                            filingStatus = userfs;
                            grossWage = usergw;
                            amountWithheld = useraw;
                            money_= grossWage;
                            taxOwed=0.00;
                            
                        /*    cout << "Testing **** Testing Set User input **** Testing Testing " << endl<< endl;
                            cout << firstName << " " << lastName << " " << filingStatus << " "  << grossWage  
                                 << " "  << amountWithheld << " "  << taxOwed << endl << endl;
                            cout << "Testing **** Testing Set User input **** Testing Testing " << endl<< endl;
                            
                            cout << "Real Data  **********************  "    << endl << endl; */
                            return ;
                        } 
            
            double    GetUserInput()            
                        {
                        taxOwed =0.00;
                            
                           // money_ = wage + interest + unemployment;
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
                            //taxOwed= taxOwed - amountWithheld;
                                
                            return money_, taxOwed;                                                           
                        }        
                        
                double   PrintAmount()
                            {
                                cout << "This is " << firstName << " " << lastName << "'s 2016 tax return data." << endl;
                                cout << "The filing status is '" << filingStatus << "'" << endl;
                                cout << "The input of  $"  << grossWage  << " for your gross wage and $"  << amountWithheld << " for your amount withheld." << endl;
                                cout << "You owe $" << taxOwed << " before your amount withheld." << endl;
                                cout << "You owe $" << taxOwed- amountWithheld << " after subtracting the amount withheld." << endl << endl;                                 
                            }
                            
                            
        private:
};
     

int main ()
{
    TaxCalculator taxAmt_1; //testing default constructor
    TaxCalculator taxAmt_2("Jared", "Didier", 'S', 20000.00, 3000.00); //testing overloaded constructor
   
    taxAmt_1.PrintAmount();
    taxAmt_2.PrintAmount();
    
   // Joe Vandal, single, Wages: $12,100, Withheld: $250
    
    taxAmt_1.SetUserInput("Joe", "Vandal", 'S', 12100.00, 250.00 );//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();

   //  Alfonso Haynes, married, Wages: $32,351, Withheld: $3,192
    
    taxAmt_1.SetUserInput("Alfonso", "Haynes", 'M', 32351.00, 3192.00 );//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();
    
    //  Bridget Rowe, single, Wages: $88,229, Withheld: $12,057
    
    taxAmt_1.SetUserInput("Bridget", "Rowe", 'S', 88229.00, 12057.00 );//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();

    //  Wendy Joseph, married, Wages: $73,291, Withheld: $6,972
    
    taxAmt_1.SetUserInput("Wendy", "Joseph", 'M', 73291.00, 6972.00 );//testing mutator function
    cout << "Taxed Owed " << taxAmt_1.GetUserInput() << endl;//testing accessor function
    taxAmt_1.PrintAmount();

    cout << endl;  
};

/*
Tax Table for Individuals

If Adjusted Gross Income is:
	

Then the tax is:

$0 - $8,925
	

10% of the AGI

$8,926 - $36,250
	

$892.50 plus 15% of the excess over $8,925

$36,251 - $87,850
	

$4991.25 plus 25% of the excess over $36,250

$87,851 and above
	

$17,891.25 plus 28% of the excess over $87,850

 

Tax Table for Married Couples

If Adjusted Gross Income is:
	

Then the tax is:

$0 - $17,850
	

10% of the AGI

$17,851 - $72,500
	

$1,785 plus 15% of the excess over $17,850

$72,501 and above
	

$9,982.50 plus 28% of the excess over $72,500

 

    Compare the calculated tax with the amount withheld. If the tax is larger than the withholding, the person owes more tax.  If it is smaller, then the person is entitled to a refund.

Requirements

 At least one if/else statement
Input

    Joe Vandal, single, Wages: $12,100, Withheld: $250
    Alfonso Haynes, married, Wages: $32,351, Withheld: $3,192
    Bridget Rowe, single, Wages: $88,229, Withheld: $12,057
    Wendy Joseph, married, Wages: $73,291, Withheld: $6,972
*/