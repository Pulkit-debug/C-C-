#include<stdio.h>
#include<conio.h>
int main()
{
    int n, temp, lastdigit=0, rev=0;
    printf("Enter the number to check if it is palindrome or not : ");
    scanf("%d", &n);
    temp =n;
    while(temp>0)
    {
        lastdigit = temp%10;
        rev = rev*10 + lastdigit;
        temp = temp/10;
    }
    if(rev == n)
    printf("%d is Palindrome ", n);
    else
    printf("%d is not Palindrome", n);
    
    return 0;
}
