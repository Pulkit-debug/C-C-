#include<stdio.h>
void main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;
    printf("Normal Array Printing :\n ");
    for(int i =0;i<n;i++)
    printf("%d ", arr[i]);
    printf("\n");
    printf("Printing array with pointer :\n ");
    for(int i =0;i<n;i++)
    printf("%d ", *(arr +i));
}