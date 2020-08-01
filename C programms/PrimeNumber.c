#include<stdio.h>
#include<conio.h>
// To check a number
/*
void main()
{
    int n, flag =0;
    printf("Enter the number to check prime or not : ");
    scanf("%d", &n);
    for(int i =2;i<n/2;i++)
    {
    if(n%i==0)
    flag =1;    
    }
    if(flag ==1)
    printf("%d is not a prime number ", n);
    else 
    printf("%d is a prime number ", n);
    
}*/

// To print upto n numbers
void main()
{
int n=100, i=3, count, c;
// printf("Enter the numbers upto prime : ");
// scanf("%d", &n);
if(n>=1)
printf("2 ");
//iteration upto n prime numbers
//i is the number to be checked every in every iteration starting from 3
for(count=2;count<=n;i++)
{
    //To check c is prime or not
    for(c =2;c<i;c++)
    {
        if(i%c==0)
        break;
    }
    if(c==i)//c is prime
    {
    printf("%d ", i);
    count++;//increment of count of prime numbers
    }
}
}