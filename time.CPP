#include<iostream>
#include<conio.h>
#include<stdlib.h>
class time
{	int h1,h2,m1,m2,s1,s2;
	public:
	void in()
	{	std::cout<<"\nENTER THE FIRST HOUR VALUE\n";
		std::cin>>h1;
		std::cout<<"\nENTER THE FIRST MINUTES VALUE\n";
		std::cin>>m1;
		std::cout<<"\nENTER THE FIRST SECONDS VALUE\n";
		std::cin>>s1;
		std::cout<<"\nENTER THE SECOND HOUR VALUE\n";
		std::cin>>h2;
		std::cout<<"\nENTER THE SECOND MINUTES VALUE\n";
		std::cin>>m2;
		std::cout<<"\nENTER THE SECOND SECONDS VALUE\n";
		std::cin>>s2;
	}
	void add();
	void sub();

}t1;
void time::add()
{	int h=0,m=0,s=0;
	h=h1+h2;
	m=m1+m2;
	s=s1+s2;
	if (s>60)
	{	m++;
		s=s-60;
	}
	if (m>60)
	{	h++;
		m=m-60;
	}
	if (h>24)
	{	h=h-24;
	}
	std::cout<<"\n"<<h<<"/"<<m<<"/"<<s;
}

void time::sub()
{	int h=0,m=0,s=0;
	h=h1-h2;
	m=m1-m2;
	s=s1-s2;
	if (s>60)
	{	m++;
		s=s+60;
	}
	if (m>60)
	{	h++;
		m=(m+60);
	}
	if (h>24)
	{	h=h+24;
	}
	std::cout<<"\n"<<h<<"/"<<m<<"/"<<s;
}

int main()
{	
	int choice;
	t1.in();
	do
	{	std::cout<<"\nOPERATIONS PERFORMED ON TIME";
		std::cout<<"\n1.ADDITION";
		std::cout<<"\n2.SUBTRACTION";
		std::cout<<"\n3.EXIT";
		std::cout<<"\nENTER YOUR CHOICE\n";
		std::cin>>choice;
		switch(choice)
		{	case 1:t1.add();
			break;
			case 2:t1.sub() ;
			case 3:exit(0);

		}
	}
	while(1);
	getch();
}
