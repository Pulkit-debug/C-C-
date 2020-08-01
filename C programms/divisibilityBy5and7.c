#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the numnber to check :");
    scanf("%d", &n);
    if(n%5==0 && n%7==0)
    {
        
        printf("Number is divisible by 5 and 7 both");
     
    }
     
     else if (n%5==0)
        printf("Number is only divisible by 5");

     else if(n%7==0)
        printf("Number is only divisible by 7");

    if(n%5!=0 && n%7!=0)
    {
        printf("Tne number is neither divisible by 5 nor by 7");
    }
    
    
}