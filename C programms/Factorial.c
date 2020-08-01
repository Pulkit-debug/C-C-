#include<stdio.h>
#include<conio.h>
/*void main()
//Using Iterative approach
{
    int n, fact=1;
    printf("Enter the number to find the factorial : ");
    scanf("%d", &n);
    for(int i =1;i<=n;i++)
    {
        fact *=i;
    }
    printf("%d is the factorioal", fact);
}*/

//FActorial upto n terms

void main()

{
    int n, fact=1;
    printf("Enter the number to find the factorial : ");
    scanf("%d", &n);
    for(int j =1;j<=n;j++)
    {
        fact =1;
    for(int i =1;i<=j;i++)
    {
        fact *=i;
    }
    
    printf("%d ", fact);
    }
}
// For recusrssive approach we can use
// return n*fact(n-1)