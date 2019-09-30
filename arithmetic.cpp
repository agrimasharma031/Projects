#include<stdlib.h>
#include<conio.h>
#include<iostream> 
int a,b,c ;
class opr
{	public :
		void add() ;
		void sub() ;
		void mul() ;
		void div() ;
		void in()
		{	std::cout<<"\nEnter the two numbers :	" ;
			std::cin>>a>>b ;
		}		
} ;
int main()
{	opr o ;
	o.in() ;
	int ch ;
	
	do
	{
		std::cout<<"\n1.Addition\n2.Subtraction\n3.Multiply\n4.Division\n5.Exit\nEnter your choice :	" ;
		std::cin>>ch ;
		switch(ch)
		{
			case 1 : o.add() ;
				break ;
			case 2 : o.sub() ;
				break ;
			case 3 : o.mul() ;
				break ;
			case 4 : o.div() ;
				break ;
			case 5 : exit(0) ;
				break ;
			default : std::cout<<"\nInvalid choice Entered.\n" ;
				break ;
		}
	}
		while(1) ;
		return 0 ;
	}

void opr::add()
{	c=a+b ;
	std::cout<<"Sum = "<<c ;
}

void opr::sub()
{	c=a-b ;
	std::cout<<"Difference = "<<c ;
}

void opr::mul()
{	c=a*b ;
	std::cout<<"Multiplication = "<<c ;
}

void opr::div()
{	c=a/b ;
	std::cout<<"Division = "<<c ;
}

