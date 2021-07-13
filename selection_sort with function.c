#include <stdio.h>

void SelSort(int array[], int n)
{
int i, j, position, swap;
for(i = 0; i < (n - 1); i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(array[position]>array[j])
position=j;
}
if(position != i)
{
swap=array[i];
array[i]=array[position];
array[position]=swap;
}
}
printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d\n", array[i]);
}

int main()
{

    int data[10], n, i;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);
    SelSort(data, n);
}
