#include<iostream>
using namespace std;
class UnaryFriend
{

     public:
        int a=10;
        int b=20;
        int c=30;
         void getvalues()
         {
              cout<<"Values of A, B and C\n";
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
         }
         void show()
         {
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
         }
         void friend operator~(UnaryFriend &x);
};
void operator~(UnaryFriend &x)
{
     x.a = ~x.a;
     x.b = ~x.b;
     x.c = ~x.c;
}
int main()
{
     UnaryFriend x1;
     x1.getvalues();
     cout<<"Before Overloading\n";
     x1.show();
     cout<<"After Overloading \n";
     ~x1;
      x1.show();
      return 0;
}
