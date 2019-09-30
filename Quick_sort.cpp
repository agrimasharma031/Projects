#include<stdio.h>
#include<conio.h>

void quicksort(int a[],int p, int r);
int partition(int a[],int p, int r);
int n ;
int main()
{
 int a[20],i;
 printf("Enter number of elements in array : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
    printf("Enter number %d: ",i+1);
    scanf("%d",&a[i]);
 }

 printf("Items in the array are : ");
 for(i=0;i<n;i++)
 {

 }

 quicksort(a,0,n-1);

 printf("\nElements after quick sort : ");
 for(i=0;i<n;i++)
 {
    printf("%d ",a[i]);
 }
 return 0;
}

void quicksort(int a[],int p, int r)
{
   int q,i;
   if(p<r)
   {
     q=partition(a,p,r);
     for(i=0;i<n;i++)
 {
    printf("%d ",a[i]);
 }
    printf("\n");
     quicksort(a,p,q-1);
     quicksort(a,q+1,r);
   }
}

int partition(int a[],int p, int r)
{
   int temp;
   int i=p-1;
   int j;
   int x=a[r];
   for(j=p;j<=r-1;j++)
   {
     if(a[j]<=x)
     {
       i=i+1;
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }

   temp=a[i+1];
   a[i+1]=a[r];
   a[r]=temp;
   return (i+1);
}
