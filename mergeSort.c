#include<stdio.h>
#include<conio.h>

int A[8];
void merge(int A[], int p, int q, int r)
{
    /* Create L ← A[p..n1+1] and R ← A[q+1..r] */
    int n1 = q - p + 1;
    int n2 =  r - q;
    int L[n1], R[n2];
    for (int i = 1; i <= n1; i++)
        L[i] = A[p + i - 1];
    for (int j = 1; j <= n2; j++)
        R[j] = A[q + j];
    int i, j, k;
    i = 1;
    j = 1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
            {
                A[k]=L[i];
                i=i+1;
            }
        else
        {
            A[k]=R[j];
            j=j+1;
        }
    }

}

void mergeSort(int A[],int p, int r)
    {int q,k;
        if(p<r)
        { q=((p+r)/2);

            mergesort(A,p,q);
            mergesort(A,q+1,r);
            merge(A,p,q,r);
            for(k=1;k<=8;k++)
            { printf("%d\t",A[k]);
            }
            printf("\n");
    }

int main()
{
    int p=1,r=8,k;
    printf("\nENTER 8 ELEMENTS\n");
    for(k=1;k<=8;k++)
    scanf("%d",&A[k]);
    mergesort(A,p,r);
    return 0;
}
