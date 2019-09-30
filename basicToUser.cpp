#include<iostream>
using namespace std ;

class A
{
    int kg,gm ;
public :
    A()
    {
        kg=0,gm=0;
    }
    A(int x)
    {
        kg=x/1000 ;
        gm=x%1000 ;
    }
    void show()
    {
        cout<<"Weight : \tkg ="<<kg<<"\tgm = "<<gm ;
    }
};
int main()
{
    A a1 ;
    int a ;
    cout<<"\nEnter Weight in grams : " ;
    cin>>a ;
    a1=a ;
    a1.show();
    return 0 ;
}
