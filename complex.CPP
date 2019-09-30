#include<iostream>
#include<conio.h>
#include<stdlib.h>
class comp
{	int a,b,c,d;
	public:
	void in()
	{
		std::cout<<"\nEnter the real and imaginary part of first complex number :\n";
		std::cin>>a>>b;
		std::cout<<"\nEnter the real and imaginary part of second complex number :\n";
		std::cin>>c>>d;
	}
	void add();
	void sub();
	void mul();
}c1;
void comp::add()
{
	if((b+d)>=0)
	{	std::cout<<(a+c)<<"+"<<(b+d)<<"i";
	}
	else
	{	std::cout<<(a+c)<<(b+d)<<"i";
	}
}
void comp::sub()
{
	if((b-d)>=0)
	{	std::cout<<(a-c)<<"+"<<(b-d)<<"i";
	}
	else
	{	std::cout<<(a-c)<<(b-d)<<"i";
	}
}
void comp::mul()
{       int p1,p2;
	p1=(a*d)+(b*c);
	p2=(a*c)-(b*d);
	if(p1>=0)
	{	std::cout<<p2<<"+"<<p1<<"i";
	}
	else
	{	std::cout<<p2<<p1<<"i";
	}
}
int main()
{	
	int choice;
	c1.in();
	do
	{	std::cout<<"\nOPERATIONS PERFORMED ON COMPLEX NUMBERS";
		std::cout<<"\n1.ADDITION";
		std::cout<<"\n2.SUBTRACTION";
		std::cout<<"\n3.MULTIPLICATION";
		std::cout<<"\n4.EXIT";
		std::cout<<"\nENTER YOUR CHOICE\n";
		std::cin>>choice;
		switch(choice)
		{	case 1:c1.add();
			break;
			case 2:c1.sub();
			break;
			case 3:c1.mul();
			break;
			case 4:exit(0);
		}
	}while(1);
	getch();
}
