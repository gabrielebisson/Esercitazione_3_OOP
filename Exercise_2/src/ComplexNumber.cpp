#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"

using namespace std;

ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if(c.im<0)
    {
        os<<c.re<<c.im<<"i";
    }
    else if(c.im==0) //l'ho messo come caso dato che, se lo includo nel caso sopra, talvolta mi da problemi, scrivendo lo stesso re+-0i
    {
        os<<c.re<<"+0i";
    }
    else
    {
        os<<c.re<<"+"<<c.im<<"i";
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1,const ComplexNumber& c2)
{
    ComplexNumber somma(c1.re+c2.re,c1.im+c2.im);
    return somma;
}

bool operator==(const ComplexNumber& c1,const ComplexNumber& c2) //fa l'== da definizione di uguaglianza tra numeri complessi
{
    return (c1.re==c2.re && c1.im==c2.im);
}
