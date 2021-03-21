#include<string>
#include<iostream>
#include<cmath>

class Complex {
    double real = 0.0;
    double img = 0.0;

    public:
    Complex(){}
    Complex(std::string s);
    double getReal();
    double getImg();
    
    Complex operator+(const Complex &y);

    Complex operator-(const Complex &y);

    Complex operator*(const Complex &y);

    Complex operator/(Complex &y);

    friend std::ostream& operator<<(std::ostream& os, const Complex &y);
};
