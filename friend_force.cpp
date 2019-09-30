#include<iostream>
using namespace std ;
#include<conio.h>

class f
{
    int m,a ;
    public :
    f(int x,int y)
    {
        m=x ;
        a=y ;
    }
    void in()
    {
        cout<<"\nEnter the value of mass and acceleration\n" ;
        cin>>m>>a ;
    }
    void show()
    {
        cout<<"\nForce = "+ m*a ;
    }
    friend void force(f) ;
};

int main()
{
    int x,y ;
    f f1(x,y) ;
    f1.in() ;
    f1.show() ;
    force(f1) ;
}

void force(f f1)
{
    cout<<"\nForce = " ;
    cout<<((f1.m)*(f1.a)) ;
}
