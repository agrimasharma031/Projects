#include<stdio.h>
#include<conio.h>


void linear_search(int[], int);
int  n ;
int main() {
  int arr_search[20], i, element;

  printf("Enter number of elements.\n");
   scanf("%d", &n);
   printf("Enter %d elements : ",n) ;

  for (i = 0; i < n; i++)
    scanf("%d", &arr_search[i]);

  printf("Enter Element to Search : ");
  scanf("%d", &element);

  linear_search(arr_search, element);

  getch();
  return 0 ;
}

void linear_search(int arr[], int element) {
  int i;

  for (i = 0; i < n; i++) 
  {
    if (arr[i] == element)
	{
      printf("Linear Search : %d is Found at array : %d.\n", element, i + 1);
      break;
    }
  }

  if (i == n)
    printf("\nSearch Element : %d  : Not Found \n", element);
}
