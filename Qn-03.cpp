/*3. Creat a Coordinate class with 2 instance variables x & y
Overload comma operator such thet when you write c3=(c1,c2)
the c2 is assigned to c3. Where c1,c2,c3 are objects.*/

#include<iostream>
using namespace std ;

class Coordinate
{
    private : 
        int x,y;
    public :
        Coordinate(int a=0, int b=0)
        {
            x = a ; 
            y = b ;
        }
        void ShowData()
        {
            cout<<"\nX = "<<x<<" Y = "<<y<<endl ;
        } 
        Coordinate operator , (Coordinate C)
        {
            Coordinate temp ;
            temp.x = (x , C.x) ;
            temp.y = (y , C.y) ;
            return temp ;
        }
        

};

int main ()
{
    Coordinate c1(2,3) , c2(5,6) , c3 , c4;
    c1.ShowData() ;
    c2.ShowData() ;

    c3 = (c1,c2 ) ;
    c3.ShowData() ;

    return 0 ;
}
