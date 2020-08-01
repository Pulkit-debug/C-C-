#include<stdio.h>

int main()
{
    int n, a[10], position;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array");
    for(int i =0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the positiion of the element you want to delete from array");
    scanf("%d", &position);
    if(position>=n+1)
    printf("Deletion is not possible\n");
    else
    {
        for(int k =position;k<n;k++)
        a[k] = a[k+1];
    }
    printf("Your resultant array is \n");
    for(int i =0;i<n-1;i++)
    printf("%d ", a[i]);
    
    return 0;
}
