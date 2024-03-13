/*1. Class- Complex , provied uniary friend operator - to negate 
the real and img part of a Complex number. */

#include<iostream>
using namespace std ;

class Complex
{
    private : 
        int real , img ;
    public :
        Complex () { }
        Complex(int real , int img) : real(real),img(img)
        { }
        void showData ()
        {
            cout<<real<<" "<<img<<endl ;
        }
        friend Complex operator - (Complex) ;
};
Complex operator - (Complex C)
{
    Complex temp ;
    temp.real = -C.real ;
    temp.img = -C.img ;
    return temp ;
}
int main ()
{
    Complex c1(4,5) ;
    c1.showData() ;
    c1=-c1 ;
    c1.showData() ;
    return 0 ;
}
