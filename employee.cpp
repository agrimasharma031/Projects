#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct emp
{	int eid;
char name[20];
}

a[10],temp;
int n=0,pos=0;

void add()
{	
     printf("Enter the employee id\n");
     scanf("%d",&a[n].eid);
     printf("Enter the employee name\n");
     scanf("%s",&a[n].name);
     n++;
       
}

void del()
{	int num,j,i,p=-1;
printf("Enter the employee id to be deleted\n");
scanf("%d",&num);
for(i=0;i<n;i++)
{	if(a[i].eid==num)
p=i;
}
if(p==-1)
printf("\nRecord not found\n");
else
{	for(j=p;j<(n-1);j++)
a[j-1]=a[j];
--n;
printf("\nRecord deleted\n");
}
}

void disp()
{       int i;
for(i=0;i<n;i++)
{      printf("\nEmployee ID:%d", a[i].eid);
printf("\nName:%s\n",a[i].name);
}
}

void search()
{	int i,num,pos;
printf("Enter the employee ID to be searched\n");
scanf("%d",&num);
for(i=0;i<n;i++)
{	if(a[i].eid==num)
{
printf("record found\n");
printf("Employee ID:%d", a[i].eid);
printf("\nName:%s",a[i].name);
}
}
}

void sort()
{       int i,j;
for(i=0;i<n;i++)
{       for(j=i;j<n;j++)
{	if(a[i].eid>=a[j].eid)
{	temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The records are sorted\n");
}

int main()
{	int c=0;
do
{	printf("\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Sort\n6.Exit\nEnter your choice\n");
scanf("%d",&c);
switch(c)
{	case 5:sort();
break;
case 4:search();
break;
case 3:disp();
break;
case 1:add();
break;
case 2:del();
break;
case 6:exit(0);
}
}while(1);
getch();
}
