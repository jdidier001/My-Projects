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

   public:                                // The class' public functions
      void   SetTempFromKelvin(double setKelvin);       // accepts a kelvin value and stores it
      double GetTempFromKelvin() const;            // return the Kelvin value
    
    private:  // Private data members
    double  tempKelvin;
    double  tempCelsius;
    double  tempFahrenheit;
    
 
};


// St temp for Kelvin

void SetTempFromCelsiui::SetKelvin(double setKelvin){
    tempKelvin = setKelvin; // tempKelvin refers to a data member
    return;
}

void SetTempFromFarenheit::


/*


class RunnerInfo {
   public:                                // The class' public functions
      void   SetTime(int timeRunSecs);       // Time run in seconds
      void   SetDist(double distRunMiles);   // Distance run in miles
      double GetSpeedMph() const;            // Speed in miles/hour
   private:  // The class' private internal data members
      int    timeRun;
      double distRun;
};

)
// "RunnerInfo::" means SetTime is a RunnerInfo member function
void RunnerInfo::SetTime(int timeRunSecs) {
   timeRun = timeRunSecs;  // timeRun refers to data member
   return;
}

void RunnerInfo::SetDist(double distRunMiles) {
   distRun = distRunMiles;
   return;
}

double RunnerInfo::GetSpeedMph() const {
   return distRun / (timeRun / 3600.0); // miles / (secs / (hrs / 3600 secs))
}

int main() {
   RunnerInfo runner1; // User-created object of class type RunnerInfo
   RunnerInfo runner2; // A second object

   runner1.SetTime(360);
   runner1.SetDist(1.2);

   runner2.SetTime(200);
   runner2.SetDist(0.5);

   cout << "Runner1's speed in MPH: " << runner1.GetSpeedMph() << endl;
   cout << "Runner2's speed in MPH: " << runner2.GetSpeedMph() << endl;
   
   */
   
   