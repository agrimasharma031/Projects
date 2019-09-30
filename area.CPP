#include<iostream>
#include<conio.h>
#include<stdlib.h>
class area
{
	float r,s,l,b,d1,d2,h,b1;
	public:
	void cl();
	void sq();
	void rect();
	void rh();
	void pgm();
}a1;
void area::cl()
{	std::cout<<"\nENTER THE RADIUS OF THE CIRCLE\n";
	std::cin>>r;
	std::cout<<(3.14*r*r);
}
void area::sq()
{	std::cout<<"\nENTER THE SIDES OF THE SQUARE\n";
	std::cin>>s;
	std::cout<<(s*s);
}
void area::rect()
{	std::cout<<"\nENTER THE LENGTH AND BREADTH OF THE RECTANGLE\n";
	std::cin>>l>>b;
	std::cout<<(l*b);
}
void area::rh()
{	std::cout<<"\nENTER THE TWO DIAGONALS OF THE RHOMBUS\n";
	std::cin>>d1>>d2;
	std::cout<<((d1*d2)/2);
}
void area::pgm()
{	std::cout<<"\nENTER THE BASE AND HEIGHT OF THE PARALLELOGRAM\n";
	std::cin>>b1>>h;
	std::cout<<(b1*h);
}
int main()
{
	int choice;
	do
	{	std::cout<<"\nCALCULATION OF AREA OF GEOMETRIC FIGURES";
		std::cout<<"\n1.CIRCLE";
		std::cout<<"\n2.SQUARE";
		std::cout<<"\n3.RECTANGLE";
		std::cout<<"\n4.RHOMBUS";
		std::cout<<"\n5.PARALLELOGRAM";
		std::cout<<"\n6.EXIT";
		std::cout<<"\nENTER YOUR CHOICE\n";
		std::cin>>choice;
		switch(choice)
		{	case 1:a1.cl();
			break;
			case 2:a1.sq();
			break;
			case 3:a1.rect();
			break;
			case 4:a1.rh();
			break;
			case 5:a1.pgm();
			break;
			case 6:exit(0);
		}
	}while(1);
	getch();
}
