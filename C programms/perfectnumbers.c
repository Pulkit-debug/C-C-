#include<stdio.h>
int main()
{
    // A perfect nubmer is a number that is equal to the sum of its proper divisors 
    int n;
    int i=1;
    int sum =0;
    printf("Enter your number to check whether it's perfect or not  : ");
    scanf("%d", &n);
while(i < n)
{
    if(n%i==0)
    {
        
        sum = sum + i;

    }
    i++;
}
if(sum==n)
printf("The number is a perfect number ");
else 
printf("The number is not a perfect number");
    return 0;
}
