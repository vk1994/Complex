# Complex
Simple library to parse and work with complex numbers

## Usage
The library can be used for calculations on complex numbers. It follows the structure a+bi, where a is real part and b is imaginary part.
It can parse complex numbers of following structure:
1+2i, -6i, 7.2+3.5i, 10, i

As of now it can add, subtract, multiply and divide complex numbers.

### Sample
demo.cpp
```
#include<iostream>
#include "Complex.h"
using namespace std;

int main(){
  Complex c1("3.5+5i");
  Complex c2("10+7i");
  
  cout<<c1+c2<<'\n'; //13.5+12i
  
  return 0;
}
```
