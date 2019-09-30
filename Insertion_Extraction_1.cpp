#include<iostream>
#include<conio.h>
using namespace std;
class abc
{ int a, b;
public:
abc(int x=0, int y=0)
{ a=x;
b=y;
}
friend ostream &operator <<(ostream &, const abc &);
friend istream &operator >>(istream &, abc &);
};
ostream &operator <<(ostream &os, const abc &A)
{ os<<"a="<<A.a<<"\tb="<<A.b<<"\n";
return os;
}
istream &operator >>(istream &is, abc &A)
{ is>>A.a>>A.b;
return(is);
}
int main()
{
abc A1(15,20) , A2(45,54) , A3;
cout<<A1;
cout<<A2;
cin>>A3;
cout<<A3;
    return 0;
}

