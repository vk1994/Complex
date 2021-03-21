#include "Complex.h"

Complex::Complex(std::string s) {
    double tmp = std::stod(s);
    unsigned int i = 0;
    bool imgFlag = false;
    for(i=0;i<s.size();i++) {
        if(i>0 && i < s.size()-1 && (s[i]=='+' || s[i]=='-')){
            img = std::stod(s.substr(i+1));
            real = tmp;
            break;
        }
        if(s[i] == 'i') imgFlag = true;
    }
    if(i == s.size()) {
        if(imgFlag) {
            img = tmp;
        }
        else {
            real = tmp;
        }
    }
}

double Complex::getReal() {
    return real;    
}

double Complex::getImg() {
    return img;    
}

Complex Complex::operator+(const Complex &y) {
    Complex _c;
    _c.real = real + y.real;
    _c.img = img + y.img;
    return _c;
}

Complex Complex::operator-(const Complex &y) {
    Complex _c;
    _c.real = real - y.real;
    _c.img = img - y.img;
    return _c;
}

Complex Complex::operator*(const Complex &y) {
    Complex _c;
    _c.real = real*y.real - img*y.img;
    _c.img = real*y.img + img*y.real;
    return _c;
}

Complex Complex::operator/(Complex &y) {
    double div = y.real*y.real + y.img*y.img;
    if(div == 0 ) {
        std::cout<<"Invalid divisor!\n";
        exit(0);
    }
    y.img = -1.0*y.img;
    Complex _c = (*this)*y;
    _c.real = _c.real/div;
    _c.img = _c.img/div;
    return _c;
}

std::ostream& operator<<(std::ostream& os, const Complex &y) {
    os<<y.real<<(y.img < 0 ? "-" : "+")<<std::abs(y.img)<<"i";
    return os;
}
