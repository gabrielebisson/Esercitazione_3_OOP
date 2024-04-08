#pragma once

#include <iostream>
#include <cmath>
using namespace std;
struct ComplexNumber
{
    double re;
    double im;

    ComplexNumber()=default; //costruttori
    ComplexNumber(double a,double b)
    {
        re=a;
        im=b;
    }

    double norm() //fa la norma 2 del numero complesso
    {
        return sqrt(re*re+im*im);
    }

    bool is_equal(ComplexNumber& c2,double tol) // questo metodo fa l'== considerando la norma 2 della differenza tra i 2 numeri complessi pesata con la norma 2 del primo numero, tiene conto anche della tolleranza scelta dall'utente
    {
        ComplexNumber diff(c2.re-this->re,c2.im-this->im);
        if(diff.norm()/this->norm()<=tol)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ComplexNumber conjugate() //complesso coniugato
    {
        ComplexNumber cc(re,-im);
        return cc;
    }
};

ostream& operator<<(ostream& os, const ComplexNumber& c);

ComplexNumber operator+(const ComplexNumber& c1,const ComplexNumber& c2);

bool operator==(const ComplexNumber& c1,const ComplexNumber& c2);
