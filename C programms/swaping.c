#include<stdio.h>
int swap(int *a1, int *a2)
{
int temp = *a1;
*a1 = *a2;
*a2 = temp;
    
}

int main()
{
int a =2, b = 3 ;
printf("Before swaping the numbers the value of a and b are : %d and %d\n", a, b);
swap(&a, &b);
printf("After swaping the numbers the value of a and b are : %d and %d", a, b);
}