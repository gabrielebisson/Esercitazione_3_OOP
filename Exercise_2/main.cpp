#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

void esito(bool tf)
{
    if(tf==0)
    {
        cout<<" No"<<endl;
    }
    else
    {
        cout<<" Si"<<endl;
    }
}

int main()
{
    ComplexNumber c1(2,-3);
    ComplexNumber c2(2,-3.00003);
    double tol=1e-5;
    cout <<"Ho i numeri complessi c1="<< c1 <<" e c2="<< c2 <<", ho quindi che c1+c2="<< c1+c2 <<endl;
    cout <<"Il complesso coniugato di c1 e' "<<c1.conjugate()<<", mentre il complesso coniugato di c2 e' "<<c2.conjugate()<<endl;
    cout<<"Si ha che c1=c2 in norma 2 supposta una tolleranza relativa di "<<tol<<"?";
    esito(c1.is_equal(c2,tol));
    cout<<"Si ha che c1=c2 in base alla definizione di '=' per i numeri complessi (a meno della precisione di macchina)?";
    esito(c1==c2);
    return 0;
}
