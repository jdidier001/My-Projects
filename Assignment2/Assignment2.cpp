/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Assignment 2
10-5-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 10-5-16

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
    
    //******************************************************************************************

class ATMMachine
{
        double dollars_;
        
        
        public:      // The class' public functions                                                              
        
        //Overload Consrctor
                ATMMachine (double BB_)
                {
                    dollars_= BB_;
                };
              
        //Default Constructor
                ATMMachine()
                {
                    dollars_=0;
                };
    
            void    SetDollarAmount(double da_)
                        {
                            dollars_ = da_;                                                                
                        }    
            
            double    GetDollarAmount( )
                        {
                            return dollars_;                                                           
                        }    
            
            void     SetDepositAmount(double depAmt)
                        {
                            //cout<<"dollars before"<<dollars_<<"input "<<depAmt<<endl;
                            dollars_ += depAmt;                                      
                            //cout<<"dolars after "<<dollars_<<endl;
                        } 
            
            double    GetDepositAmount()
                        {
                            return dollars_;                                                           
                        }    
            
            void     SetWithdrawlAmount(double witAmt)
                        {
                           // cout<<"dollars before"<<dollars_<<"input "<<witAmt<<endl;
                            dollars_ -= witAmt;                                                                
                           // cout<<"dolars after "<<dollars_<<endl;
                        } 
            
            double   GetWithdrawlAmount()
                        {
                            return dollars_ ;                                                         
                        }                
                                    
                        
            double   PrintAmount()
                        {
                            cout << "The balance is " << dollars_ << endl << endl;                                 
                        }              
        private:
};
                        


int main ()
{
    ATMMachine  dollAmt_1; //testing default constructor
    ATMMachine  dollAmt_2(100); //testing overloaded constructor
    
   // dollAmt_1.PrintAmount();
    //cout << endl;
   // dollAmt_2.PrintAmount();
    cout << endl;  
    
    dollAmt_1.SetDepositAmount(100);  //testing mutator function
    cout <<  "1. You deposited " << dollAmt_1.GetDepositAmount() << endl;//testing accessor function
    dollAmt_1.PrintAmount(); 
    
    dollAmt_1.SetWithdrawlAmount(20);  
    cout <<  "2. You withdrew $20" << endl;  
    //cout << dollAmt_1.GetWithdrawlAmount() << endl;
    dollAmt_1.PrintAmount();

    dollAmt_1.SetWithdrawlAmount(60);  
    cout <<  "3. You withdrew $60 " << endl;  
    //cout << dollAmt_1.GetWithdrawlAmount() << endl;
    dollAmt_1.PrintAmount();
    
    dollAmt_1.SetWithdrawlAmount(40);  
    cout <<  "4. You withdrew $40 " << endl;  
    //cout<< dollAmt_1.GetWithdrawlAmount() << endl;
    dollAmt_1.PrintAmount();    
  
    dollAmt_1.SetDepositAmount(73);  //testing mutator function
    cout <<  "5. You deposited $73" << endl; //<< dollAmt_1.GetDepositAmount() << endl;//testing accessor function
    dollAmt_1.PrintAmount(); 
    
    dollAmt_1.SetWithdrawlAmount(40);  
    cout <<  "4. You withdrew $40 " << endl;  
    //cout<< dollAmt_1.GetWithdrawlAmount() << endl;
    dollAmt_1.PrintAmount();
    
    art();

    return 0;
}
