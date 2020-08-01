#include<stdio.h>
int swap(int *x, int *y)
{
    int *temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swaping the numbers are : %d %d ", *x, *y);
}
void main()
{
    int a =4;
    int b =2;
    printf("Before swaping the numbers are : %d %d \n", a, b);
    swap(&a, &b);
    
}