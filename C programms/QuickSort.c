#include<stdio.h>


int partition(int a[], int first, int last)
{
    int pivot = a[last];
    int partitionIndex = first;
    for(int i =first;i<last;i++)
    {
        if(a[i] <= pivot)
        {
            int temp = a[i];
            a[i] = a[partitionIndex];
            a[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    int temp = a[partitionIndex];
    a[partitionIndex] = a[last];
    a[last] = temp;
    return partitionIndex;
}

int quickSort(int a[], int first, int last)
{
    if(first < last)
    {
        int partitionIndex = partition(a, first, last);
        quickSort(a, first, partitionIndex-1);
        quickSort(a, partitionIndex + 1, last);
    }
}

void main()
{
    int a[] = {7, 2, 1, 11, 3, 8, 4};
    int n = sizeof(a) / sizeof(a[0]);
   
    quickSort(a, 0, n-1);
    for(int i =0;i<n;i++)
    printf("%d ", a[i]);
}