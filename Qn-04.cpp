/*4. In qn 3 , provide << & >> operators.
3. Creat a Coordinate class with 2 instance variables x & y
Overload comma operator such thet when you write c3=(c1,c2)
the c2 is assigned to c3. Where c1,c2,c3 are objects.*/

#include<iostream>
using namespace std ;

class Coordinate
{
    private : 
        int x,y;
    public :
        Coordinate()
        { }
        Coordinate operator , (Coordinate C)
        {
            Coordinate temp ;
            temp.x = (x , C.x) ;
            temp.y = (y , C.y) ;
            return temp ;
        }
        friend ostream& operator<< (ostream& , Coordinate) ;
        friend istream& operator>> (istream& , Coordinate&) ;
};

ostream& operator<< (ostream& nout , Coordinate C)
{
    nout<<"("<<C.x<<","<<C.y<<")"<<endl ;
    return nout ;
}
istream& operator>> (istream&nin , Coordinate& C)
{
    nin>>C.x>>C.y ;
    return nin ;
}

int main ()
{
    Coordinate c1 , c2 , c3 ;

    cout<<"Enter x & y \n" ;
    cin>>c1 ;
    cin>>c2 ;

    c3 = (c1,c2 ) ;

    cout<<"C1 - "<<c1 ;
    cout<<"C2 - "<<c2 ;
    cout<<"C3 - "<<c3 ;
    
    return 0 ;
}
