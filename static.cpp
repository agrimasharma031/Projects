#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std ;

class e
{
public:
    static float v() ;
    void show() ;
}e1 ;

float e::v()
{
    int u,a,s ;
    cout<<"\nEnter the initial velocity, acceleration and Displacement\n";
    cin>>u>>a>>s ;
    static float v=(sqrt(u*u+2*a*s)) ;
    return v;
}
void e::show()
{
    cout<<"\nFinal Velocity is "<<e::v() ;
}
int main()
{
    e1.show() ;
    getch() ;
    return 0 ;
}
