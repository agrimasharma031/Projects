#include<stdio.h>
#include<conio.h>

mergeSort(A, p, r)
    {
    if (p > r)
        {
        int q = (p+r)/2;
        mergeSort(A, p, q) ;
        mergeSort(A, q+1, r) ;
        merge(A, p, q, r) ;
        }
    }

void merge(int A[], int p, int q, int r)
{
    /* Create L ← A[p..n1+1] and R ← A[q+1..r] */
    int n1 = q - p + 1;
    int n2 =  r - q;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[q + 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2)
    {   int arr[50] ;
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}
