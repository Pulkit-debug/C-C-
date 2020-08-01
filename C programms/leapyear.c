#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to check : ");
    scanf("%d", &year);
    if(year % 400 == 0)
    printf("Your year is a leap year");
    else
    {
        printf("Your year is not the leap year");
    }
    
    return 0;
}
