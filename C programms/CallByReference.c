#include<stdio.h>
int addsum(int *x, int *y)
{
    int temp;
    temp = *x;
  *x=  *x +*y;
  *y = temp - *y; 

}
int main()
{
int a =5, b =4;
printf("The value of a and b in starting is : %d and %d\n", a, b);
addsum(&a,&b);
printf("The value of a and b after addition and subtraction is : %d and %d", a, b);
}