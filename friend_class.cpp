#include<iostream>
using namespace std ;
#include<conio.h>

 class biggest

  {

    private:
          int a,b,c,large;
    public:
          void getdata();
friend int big(biggest g);

   };
 void biggest::getdata()
  {
     cout<<"Enter any three number"<<endl;
     cin>>a>>b>>c;
   }
 int big(biggest g)
  {
       g.large=g.a;
       if(g.b>g.large)
       {
           g.large=g.b;
       }

       if(g.c>g.large)
       {
         g.large=g.c;
       }

     cout<<endl;
     cout<<"Greatest of the three is : "<<g.large;
     return 0;

  }


int main()

  {

     class biggest obj;
     obj.getdata();
     big(obj);
     return 0;

  }
