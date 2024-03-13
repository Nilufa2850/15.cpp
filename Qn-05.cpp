/*5.Defien a class Student with rollNo , name , age as member variables. 
Create setStudent() , and ShowStudent() methods in the class. 
Overload operator == to compare two student Objects.*/

#include<iostream>
#include<string.h>

using namespace std ;

class Student
{
    private : 
        int roll_no ;
        char name [30] ;
        int age ;
    public :
        Student () { }
        void setStudent (int Roll , char Name[] , int Age)
        { 
            roll_no = Roll ;
            strcpy(name , Name) ;
            age = Age ;
        }
        void showStudent ()
        {
            cout<<"\nRoll No  = "<<roll_no ;
            cout<<"\nName     = "<<name ;
            cout<<"\nAge      = "<<age ;
            cout<<endl ;
        }
        bool operator == (Student S)
        {
            return (roll_no == S.roll_no  &&  (strcmp(name , S.name)==0)  &&  age == S.age) ;
            
        }
};


int main ()
{
    Student s1, s2  ;
    s1.setStudent(1,"Nimlufa" ,20) ;
    s2.setStudent(1,"Nilufa" , 20) ;

    s1.showStudent() ;
    s2.showStudent() ;

    if (s1==s2)
        cout<<"\nStudents are same\n" ;
    else
        cout<<"\nStudents are not same\n" ;

    return 0 ;
}
