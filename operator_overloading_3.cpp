#include <iostream>
using namespace std;
#include <conio.h>

class s
{
public:
int i,j;
s()
{ i=j=0;}
void disp()
{
    cout<<"\nValues after Overloading :\n" ;
    cout << i <<" " << j;
}

void getdata()
{
    cout<<"\nEnter two values : \n" ;
    cin>>i>>j;
}

friend s operator+(int,s);

};

s operator+(int a, s s1)

{ s k;

  k.i = a+s1.i;

  k.j = a+s1.j;

  return k;;

}

int main()

{
    s s2;
    s2.getdata();
    int n ;
    cout<<"\nEnter the value you want to increase :\n" ;
    cin>>n ;
    s s3 = n+s2;
    s3.disp();
    getch();

    return 0;

}
