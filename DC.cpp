#include<stdio.h>
#include<conio.h>
int a[7];
int sel_min(int,int);
int main()
{
	int i,k,j,t;
	int u=6;
	printf("\nEnter the elements of an array:\n");
	for(k=0;k<7;k++)
	{
		scanf("%d",&a[k]);
	}
	for(i=0;i<=u-1;i++)
	{	j=sel_min(i,u);
		if(i!=j)
		{
			t=i;
			i=j;
			j=t;
		}
	}
	printf("\n");
	for(k=0;k<7;k++)
	{
		printf("%d\t",a[k]);
	}
}
int sel_min(int l,int r)
{	int min,ml,i;
	min=a[l];
	ml=l;
	for(i=l+1;i<=r;i++)
	{	if(min>a[i])
		{
			min=a[i];
			ml=i;
		}
	}
	return(ml);
}
