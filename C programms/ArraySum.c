#include<stdio.h>
int main()
{
    int n, a[10], sum =0;
    //Array sum
    printf("What is length of your array: ");
    scanf("%d", &n);
    for(int i =0;i<n;i++)
{
    scanf("%d", &a[i]);
    sum+= a[i];
}
printf("Sum is %d", sum);

    return 0;
}
