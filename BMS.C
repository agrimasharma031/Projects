#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{	int id;
	char name[30];
	char athr[30];
};
void add(struct emp[]);
//void del(struct emp[]);
void search(struct emp[]);
//void sort(struct emp[]);
void show(struct emp[]);

int main()
{
	struct emp e[5];
	int ch;
	do
	{	printf("WELCOME TO BMS \n\t1.ADD \n\t2.DELETE \n\t3.SEARCH \n\t4.SORT \n\t5.SHOW \nbooks \n\t0.EXIT \nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{	case 1:add(b);
				break;
			case 2://del(b);
				break;
			case 3:search(b);
				break;
			case 4://sort(b);
				break;
			case 5:show(b);
				break;
			case 0:exit(0);
			default:printf("invalid choice");
		}
	}while(1);
getch();
}
void show(struct emp e[5])
{	int i;
	printf("the details of all the books are:");
	for(i=0;i<5;i++)
	{       printf("%d book:",i) ;
		printf("%d",e[i].id);
		puts(e[i].name);
		puts(e[i].athr);
	}
}
void add(struct emp e[5])
{      	int i;
	printf("add details of the books");
	for(i=0;i<5;i++)
	{	printf("enter book id");
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("enter book name");
		gets(e[i].name);
		printf("enter the author name:");
		gets(e[i].athr);
	}
}
void search(struct emp e[5])
{	int i,n;
	printf("enter the id of the book");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{	if(n==e[i].id)
		{     	printf("the details of the book are:");
			printf("%d",e[i].id);
			puts(e[i].name);
			puts(e[i].athr);
		}
	}

}
void del(struct emp e[5])
{	int i,n;
	printf("enter the id of the book to be deleted:");
	scanf("%d",&n);
	while(n<5)
	{	e[n].id=b[n+1].id;
		e[n].name=b[n+1].name;
		e[n].athr=b[n+1].athr;
		n++;
	}
	e[n].id=0;
	e[n].name="";
	e[n].athr=0;
}

void sort(struct emp e[5])
{
	int i,n ;
	printf("Enter the id of the book :") ;
	scanf("%d",&n) ;
	
}
