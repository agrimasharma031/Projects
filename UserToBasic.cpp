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
    void in()
    {
        cout<<"Enter Weight in kg and gms :" ;
        cin>>kg>>gm ;
    }
    void show()
    {
        cout<<"\nWeight :" ;
        cout<<"\tKg = "<<kg<<"\tgm = "<<gm ;
    }
    operator int()
    {
        int n ;
        n=kg*1000 ;
        n=n+gm ;
        return n ;
    }
    operator float()
    {

        float n ;
        n=gm/1000 ;
        n=n+kg ;
        return n ;
    }
};

int main()
{
    A a1 ;
    a1.in() ;
    a1.show() ;
    int p = a1 ;
    cout<<"\nWeight in Grams : "<<p ;
    float q = a1 ;
    cout<<"\nWeight in Kg : "<<q ;
    return 0 ;
}
