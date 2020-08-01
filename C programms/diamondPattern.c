#include<stdio.h>
int main()
{   int n;
    printf("Enter the number of rows you want : ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++)
    {
        for(int j =0;j<=2*(n-i);j++)
        {

            printf(" ");
        }
printf("\n");
    }

    for(int i =1; i<=n; i++)
    {
        for(int j =n;j<=n-i;j++)
        {

            printf("*");
        }
printf("\n");
    }

    return 0;
}
