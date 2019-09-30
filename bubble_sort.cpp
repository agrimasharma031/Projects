#include<stdio.h>
#include<conio.h>

void bubble(int a[],int s)
{
 int i,j;
 int temp;
 for(i=1;i<s;i++)
  {
    for(j=0;j<s-i;j++)
     {
      if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
     }
   }
}


int main()
{
 int arr[100];
 int i;
 int size;
 printf("\nEnter the size of array :");
 scanf("%d",&size);
 printf("\nEnter the element\n");
 for(i=0;i<size;i++)
 scanf("%d",&arr[i]);

 printf("\nBefore sorting\n");
 for(i=0;i<size;i++)
 printf("%d   ",arr[i]);

 bubble(arr,size);

 printf("\nAfter sorting\n");
 for(i=0;i<size;i++)
 printf("%d   ",arr[i]);

getch();

}
