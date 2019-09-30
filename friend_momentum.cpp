#include<iostream>
using namespace std ;
#include<conio.h>

class p
{
    int m,v ;
    public :
    p(int x,int y)
    {
        m=x ;
        v=y ;
    }
    friend void momentum(p) ;
};

int main()
{
    p p1(10,20) ;
    momentum(p1) ;
}

void momentum(p p1)
{
    cout<<"\nMomentum = "<<(p1.m*p1.v) ;
}
