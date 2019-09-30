#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a[7];

void main()
{
    int i,j,k;
    int l=0, u=6;
    int key;
    j=1;

    printf("\n enter 7 values as input to array:");
    for(k=0;k<=6;k++)
    {
        scanf("%d", &a[k]);
    }
    while(j<=u)
    {
        key =a[j];
        i=j-1;
    }
    while((i>-1) && a[i] > key)
    {
        a[i+1]=a[i];
        i=i-1;
    }
    a[i+1]=key;
    j++;;

    printf("\n");
    for(k=0; k<=6; k++)
    {
        printf("%d\t", a[k]);
    }

getch();
}

