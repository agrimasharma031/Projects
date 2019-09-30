#include<iostream>
#include<conio.h>


class fib
{
static int step;
public:
void loop()
{
int rows,k,space;
for(int i = 1, k = 0; i <=  rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            std::cout <<"  ";
        }
        while(k != 2*i-1)
        {
            std::cout << "*";
            ++k;
        }
        std::cout <<"\n";
    }    
}
static void show();
}f1,f2,f3;
void fib::show()
{
step++;
std::cout<<"step no is"<<step;
}
int fib::step=0;
int main()
{
int i;
for(i=0;i<=8;i++)
{
f1.show();
std::cout<<"/n";
f1.loop();
}
getch();
}


