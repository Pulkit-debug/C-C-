#include<stdio.h>

void merge(int a[], int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid+1;
    int k = start;

    int temp[200];
    while(i <= mid && j <= end)
    {
        if(a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        temp[k++] = a[j++];
    }
    while(i <= mid)
    temp[k++] = a[i++];
    while(j <= end)
    temp[k++] = a[j++];

    for(int i =0;i<end;i++)
    a[i] = temp[i];
}

void mergeSort(int a[], int start , int end)
{
    int mid = (start + end)/2;
    mergeSort(a, start, mid);
    mergeSort(a,  mid+1, end);

    merge(a, start, end);
}
void main()
{
    int a[200] = {2, 6, 1, 8, 5};
    int n = sizeof(a) / sizeof(a[0]);
    mergeSort(a, 0, n-1);
    for(int i =0;i<n;i++)
    printf("%d ", a[i]);
}