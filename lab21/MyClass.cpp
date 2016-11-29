#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "MyClass.h"


MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
    num_=1;
  cout << "My number is: " << num_ << endl;
  
}
