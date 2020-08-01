#include<stdio.h>
int fibonacchi(int a)
{
    if (a == 0)
    return 0;
    else if (a ==1)
    return 1;
    else 
    return (fibonacchi(a-1) + fibonacchi(a-2));
}


int main()
{
    int n,i;
    printf("Enter the number you want the fiboannchi upto : ");
    scanf("%d", &n);
    printf("Your fibonacchi series is \n");
    for(i=0;i<n ; i++)
    {
    printf("%d ", fibonacchi(i));
    }
}



