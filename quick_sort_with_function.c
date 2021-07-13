#include<stdio.h>


void QUICKSORT(int A[],int p,int r)
{
    int q;
    if (p < r)
    {
        q = PARTITION(A, p, r) ;
        QUICKSORT(A, p, q - 1) ;
        QUICKSORT(A, q + 1, r);


    }

}


int PARTITION (int A[],int p,int r)
{
    int x=A[r];
    int i = p-1;
    int temp,temp2;
    int j=0;
    for( j = p; j <= r-1; j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;

        }
    }
    temp2=A[i+1];
        A[i+1]=A[r];
        A[r]=temp2;
    return i+1;
}

int main ()
{

    int mark[5] = {19, 10, 8, 17, 9};

    QUICKSORT(mark,0,5);
    int i;
for(i=0; i<5; i++)
    {
        printf("%d  ",mark[i]);
    }
    return 0;
}
