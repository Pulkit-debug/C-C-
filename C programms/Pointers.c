#include<stdio.h>
void main()
{
    // Normal Pointers
    int a = 5;
    int *ptr = &a;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", ptr);
    printf("%d\n", &ptr);
    printf("%d\n", *ptr);
    
    // Pointers Arithmatics
    // ++, --, -, +
    // Whenever we use pointer arithmatic it increments the address by sizeOf(int);
    
    printf("%d\n", a+1);
    printf("%d\n", &a+1);
    printf("%d\n", ptr+1);
    printf("%d\n", &ptr+1);
    printf("%d\n", *ptr+1);
    
    
    
   
    // Arrays with pointers

    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8};

   // Applying operations on the address of the array
   printf("%d \n", &arr[0]);// always first element
   printf("%d \n", arr);// first element address
   printf("%d \n", &arr[1]);
   printf("%d \n", arr+1);
   printf("%d\n", arr[0]);
   printf("%d\n", *(arr));
   printf("%d\n", arr[1]);
   printf("%d\n", *(arr+1));
   
//    printf("%d \n", arr);
   
   
   
    
    
    
}