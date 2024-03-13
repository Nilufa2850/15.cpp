/*2. Class-Integer with instance variable of type int. provied friend logical operator !(not).
Also define a friend operator == to compare two inetger objects. */

#include<iostream>
using namespace std ;

class Integer
{
    private : 
        int number ;
    public :
        Integer () { }
        Integer (int no)
        {
            number = no ;
        }
        void ShowData()
        {
            cout<<"Integer -> "<<number<<endl ;
        } 
        friend bool operator ! (Integer) ;
        friend bool operator == (Integer, Integer) ;

};
bool operator ! (Integer i1)
{
    return (! i1.number) ;
}
bool operator == (Integer i1, Integer i2)
{
    if (i1.number == i2.number)
        return true ;
    else
        return false ;
}

int main ()
{
    Integer i1(0) , i2(20) ;
    i1.ShowData() ;
    i2.ShowData() ;

    if ( ! i1)
        cout<<"Zero value \n" ;
    else
        cout<<"Non-Zero value\n" ;

    if (i1 == i2)
        cout<<"Both objects are same\n" ;
    else 
        cout<<"Different objects\n" ;
    return 0 ;
}
