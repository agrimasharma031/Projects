#include<iostream>
#include<conio.h>
#include<stdlib.h>
class arr_op
{
	int i,j,a[50];
	public:
	void in()
	{	std::cout<<"\nENTER THE SIZE OF THE ARRAY\n";
		std::cin>>i;
		std::cout<<"\nENTER THE ARRAY\n";
		for(j=0;j<i;j++)
		{	cin>>a[j];
		}
	}
	void trav();
	void search();
	void del();
	void insert();
	void sort();
}a1;
void arr_op::trav()
{
	for(j=0;j<i;j++)
	std::cout<<"\n"<<a[j];
}
void arr_op::search()
{	int num, found=0;
	std::cout<<"\nENTER THE NUMBER TO BE SEARCHED\n";
	std::cin>>num;
	for(j=0;j<i;j++)
	{	if(a[j]==num)
		{	std::cout<<"\nNUMBER FOUND AT LOCATION "<<j+1;
			found=1;
		}
	}
	if(found==0)
	std::cout<<"\nSEARCH UNSUCCESSFUL";
}
void arr_op::del()
{
	int pos;
	std::cout<<"\nENTER THE POSITION TO BE DELETED\n";
	std::cin>>pos;
	if(pos>i)
	std::cout<<"\nINVALID POSITION";
	else
	{	for(j=0;j<=i;j++)
		{	if(j>=pos)
				a[j-1]=a[j];
		}
	}
	for(j=0;j<i-1;j++)
	std::cout<<"\n"<<a[j];
}
void arr_op::insert()
{	int pos, num;
	std::cout<<"\nENTER THE POSITION AND NUMBER TO BE INSERTED\n";
	std::cin>>pos>>num;
	for(j=i;j>=pos-1;j--)
	{	a[j+1]=a[j];
		a[j]=num;
	}
	for(j=0;j<=i;j++)
	std::cout<<"\n"<<a[j];
}
void arr_op::sort()
{	int k,temp=0;
	for(k=0;k<i;k++)
	{	for(j=k+1;j<i;j++)
		{	if(a[k]>a[j])
			{	temp=a[k];
				a[k]=a[j];
				a[j]=temp;
			}
		}
	}
	for(j=0;j<i;j++)
		cout<<"\n"<<a[j];
}
int main()
{
	
	int choice;
	a1.in();
	do
	{
	std::cout<<"\nARRAY OPERATIONS";
	std::cout<<"\n1.TRAVERSING";
	std::cout<<"\n2.SEARCHING";
	std::cout<<"\n3.DELETION";
	std::cout<<"\n4.INSERTION";
	std::cout<<"\n5.SORTING";
	std::cout<<"\n6.EXIT";
	std::cout<<"\nENTER YOUR CHOICE\n";
	std::cin>>choice;
	switch(choice)
	{	case 1:a1.trav();
		break;
		case 2:a1.search();
		break;
		case 3:a1.del();
		break;
		case 4:a1.insert();
		break;
		case 5:a1.sort();
		break;
		case 6:exit(0);
	}
	}while(1);
	getch();
}
