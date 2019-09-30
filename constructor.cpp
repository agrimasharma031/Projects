#include<iostream>
#include<conio.h>
class v
{
    int a,u,t;
    public:
        v()
        {
            u=50;
            a=5;
            t=2;
        }
        v(int a, int b, int c)
        {
            u=a;
            a=b;
            t=c;
        }
        v(v&Vel)
        {
            u=Vel.u;
            a=Vel.a;
            t=Vel.t;
        }
        void show()
        {
        std::cout<<"\n Final Velocity ="<<(u+(a*t));
        }
        ~v()
        {
        };
    };
    int main()
    {

    v V1;
    V1.show();
    v V2(100,6,3);
    V2.show();
    int a,b,c;
    std::cout<<"\nEnter Initial velocity, acceleration and time\n";
    std::cin>>a>>b>>c;
    v V3(a,b,c);
    V3.show();
    v V4(V1);
    V4.show();
    getch();
}

