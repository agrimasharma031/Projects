#include<iostream>
#include<conio.h>
#include<math.h>
class quad_eq
{
	float a,b,c;
	public:
	void in()
	{	std::cout<<"\nENTER THE COEFFICIENTS OF THE QUADRATIC EQUATION\n";
		std::cin>>a>>b>>c;
	}
	void roots();
}quad1;
void quad_eq::roots()
{
	float p=0;
	p=((b*b)-(4*a*c));
	if(p<0)
	{	std::cout<<"\nROOTS ARE IMAGINARY";
		std::cout<<"\n1."<<(-b/2*a)<<"+"<<sqrt(p)<<"i";
		std::cout<<"\n2."<<(-b/2*a)<<"-"<<sqrt(p)<<"i";
	}
	else
	{	std::cout<<"\nROOTS ARE REAL";
		std::cout<<"\n1."<<((-b+sqrt(p))/(2*a));
		std::cout<<"\n2."<<((-b-sqrt(p))/(2*a));
	}
}
int main()
{
	
	quad1.in();
	quad1.roots();
	getch();
}

