#include<stdio.h>
#include<conio.h>
int a[8] ;
void merge(int a[], int p, int q, int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1], R[n2+1];
    for(i=1;i<=n1;i++)
        { L[i]=a[p+i-1];
        }
    for(j=1;j<=n2;j++)
    { R[j]=a[q+j];
    }
    i=1,j=1;
    for(k=p;k<=r;k++)
    { if(L[i]<=R[j])
    { a[k]=L[i];
        i=i+1;
    }
    else
    {   a[k]=R[j];
        j=j+1;
    }
}
}
void mergesort(int a[],int p, int r)
{       int q,k;
        if(p<r)
        { q=((p+r)/2);

            mergesort(a,p,q);
            mergesort(a,q+1,r);
            merge(a,p,q,r);
            for(k=1;k<=8;k++)
            { printf("%d\t",a[k]);
            }
            printf("\n");
        }
}
int main()
{
    int p=1,r=8,k;
    printf("\nENTER 8 ELEMENTS\n");
    for(k=1;k<=8;k++)
    scanf("%d",&a[k]);
    mergesort(a,p,r);
    return 0;
}

