#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int kg;
    public:
    A()
    {
        kg=0;
    }
    void in()
    {

        cout<<"\nEnter Weight in Kg : " ;
        cin>>kg ;
    }
    int abc()
    {
        return kg;
    }
};
class B
{
    int gm;
    public:
    B()
    {
        gm=0;
    }
    void conv(A a1)
    {
        gm=a1.abc()*1000;
    }

    void show()
    {
        cout<<"Weight in gm :\t"<<gm;
    }
};
int main()
{
    A a1 ;

    B b1 ;
    a1.in();
    a1.abc() ;
    b1.conv(a1) ;
    b1.show() ;

    return 0;
}

