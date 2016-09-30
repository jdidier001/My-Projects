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

   public:                                              // The class' public functions
        void   SetTempFromKelvin(double kelvin_);       // accepts a kelvin value and stores it
        double GetTempFromKelvin() const;               // return the Kelvin value
        double SetTempFromCelsius();                    // Accept Celsius value & converts to Kelvin
        double SetTempFromFarenheit();                  // Accepts Farenheit value & converts to Kelvin
        double GetTempFromKCelsius();                   //  returns Celsius
        double GetTempFromKFarenheit();                 //  returns Kelvin
        double PrintTemp();                             //  Prints out data
        
//Default Constructor
        void    SetTempFromKelvin(double kelvin_)
                {
                    kelvin_ = =0;
                }
//Overload Constructor
        void    GetTempFromKelvin(double kelvin_)
                {
                    tempKelvin=kelvin_; // set tempKelvin to the kelvin_ value
                }

    private:  // Private data members
        double  tempKelvin;
        double  tempCelsius;
        double  tempFahrenheit;
    
    
}

// Accept Celsius value
double          SetTempFromCelsius::kelvin_(double kelvin_)
                {
                   tempCelsius= tempKelvin -273.15; // tempKelvin refers to a data member
        return;
                }

void SetTempFromFarenheit::


