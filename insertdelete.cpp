#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert(int A[],int n, int pos) ;
void del(int A[],int n, int pos) ;

int main()
{
   int A[100], pos, i, n, value,ch ;
 
   printf("Enter number of elements.\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &A[i]);
 
   
   
   do
   {
   	printf("\nChoose an appropriate opton\n1.Insert\n2.Delete\n3.Exit\n") ;
   scanf("%d",&ch) ;
   	switch(ch)
   	{
   	case 1 :printf("Enter the position.") ;
   	scanf("%d",&pos) ;
  insert(A,n,pos) ;
   	break ;
   	case 2 :printf("Enter the position.") ;
   	scanf("%d",&pos) ; 
  del(A,n,pos) ;
   	break ;
   	case 3 : exit(0) ;
   	break ;
   	default : printf("Invalid choice entered.") ;
   	
}
   }
   while(1) ;
   getch() ;
}

void insert(int A[],int n, int pos)
{
int i,value;
 
   
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (i = n-1; i>= pos-1; i--)
      A[i+1] = A[i];
 
   A[pos-1] = value;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\n", A[i]);
 
  
}

void del(int A[],int n, int pos)
{
int i,value ;

 
   if (pos >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = pos - 1; i < n - 1; i++)
         A[i] = A[i+1];
 
      printf("Resultant array:\n");
 
      for (i = 0; i < n - 1; i++)
         printf("%d\n",A[i]);
   }
}  
