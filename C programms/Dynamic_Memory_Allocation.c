#include<stdio.h>
#include<stdlib.h>
int main()
{
    // Use of malloc()
    // We are creating an array inside the heap using malloc and using it 
    // int n ;
    // printf("Enter the size of the array: ");
    // scanf("%d", &n);
    // int* ptr;
    // ptr = (int*) malloc(n*sizeof(int));    // this is a array of 10
    // for(int i =0;i<n;i++)
    // scanf("%d", &ptr[i]);
    // for(int i =0;i<n;i++)
    // printf("The value of %d is %d\n", i, ptr[i]);
    // return 0;


    // Using Calloc()
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));
    for(int i =0;i<n;i++)
    scanf("%d", &ptr[i]);
    for(int i =0;i<n;i++)
    printf("The value of %d is %d\n", i, ptr[i]);


    // Now use of realloc
    // Let's say we want to incresse the size of our previous array allocated by calloc
    printf("Enter the new value of a array: ");
    scanf("%d", &n);
    // int* ptr;
    ptr = (int*) realloc(ptr, n*sizeof(int));
    for(int i =0;i<n;i++)
    scanf("%d", &ptr[i]);
    for(int i =0;i<n;i++)
    printf("The new value of %d is %d\n", i, ptr[i]);


    // Now to free that allocated heap memory we use:-

    free(ptr);      // We can use free(ptr) anywhere in the program to fee the memory at the run time.
}