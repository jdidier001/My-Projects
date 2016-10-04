/* 
_________________________________________________
Jared Didier
email:jdidier001@student.butte.edu

-------------------------------------------------

_________________________________________________
Lab 9
9-25-16

------------------------------------------------

________________________________________________
Fall 2016 CSCI 20 – Programming and Algorithms I
instructor: A Browne
email: browneap@butte.edu
--------------------------------------------------

________________________________________________
Version # 1.0 - 9-25-16

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

class TemperatureConverter{
        double kelvin_;

   public:      // The class' public functions                                                              //  Prints out data
        
                //Overload Consrctor
            TemperatureConverter(double tc_){
                kelvin_= tc_;
            };
          
                //Default Constructor
            TemperatureConverter(){
                kelvin_=0;
            };
                
        void    SetTempFromKelvin(double stK)
                {
                    kelvin_ = stK;                                                                // set tempKelvin to the kelvin_ value stores it
                }

        double    GetTempFromKelvin()
                {
                    return kelvin_;                                                             // returns kelvin value
                }

                // Accept Celsius value & converts to Kelvin
        void    SetTempFromCelcius(double stC)    
                {
                     kelvin_= stC+273.15;                                                     //gets value converts to kelvin
                }
        
                // Accepts Farenheit value & converts to Kelvin
        void    SetTempFromFahrenheit(double stF)   
                {
                     kelvin_= (5 * (stF -32)/9) + 273.15;                                                   //gets value converts to kelvin
                }
                
                // Accepts Kelvin value & converts to Celsius
        double    GetTempAsCelcius() 
                {
                     return (kelvin_ - 273.15);                                                      //  returns Celsius
                }
                
                // Accepts Kelvin value & converts to Fahrenheit
        double    GetTempAsFahrenheit()
                {
                       return  (((kelvin_ -273.15 )* 9)/5 + 32);                                          // returns Farhenheit
                }
                
        double    PrintTemps()
                {
                    cout << "The temperature is " << kelvin_ << endl ;                                   // prionts the asked for temperature
                    
                }
 
 private:                                                                                       // Private data members
 
};


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
  /*
    art();
      */
    return 0;
}