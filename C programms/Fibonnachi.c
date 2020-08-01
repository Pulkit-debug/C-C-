#include<stdio.h>
/*
ITTRATIVE APPROACH

void main()
{
    int n, first = 0, second=1,third =0;
    printf("Enter the nummber upto fibonacchi : ");
    scanf("%d", &n);
    printf("%d %d ", first, second);
    for(int i =0;i<n;i++)
{
    third = first + second;

    first = second;
    second = third;
     printf("%d ", third);
}
}*/

// RECURSIVE APPRAOCH   

int fib(int n)
{

    if(n<=1)
    return n;
     return fib(n-1) + fib(n-2);
    
}
int main()
{
    int n;
    printf("Enter the number fibonacchi upto : ");
     scanf("%d", &n);
    for(int i =0;i<n;i++)
    {
    
    printf("%d ", fib(i));
    }
    
}