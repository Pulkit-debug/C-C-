#include<stdio.h>
#include<conio.h>
void main()
{
    int n, temp , lastdigit, cube=0;
    printf("Enter the number to check armstrong : ");
    scanf("%d", &n);
    temp =n;
    for(int i =0 ;i<n;i++)
{
    lastdigit = n %10;
    cube += lastdigit * lastdigit * lastdigit;
    n = n/10;
}
if(temp == cube)
printf("%d is an armstrong number", temp);
else
printf("%d is not armstrong number", temp);
    
    
    }