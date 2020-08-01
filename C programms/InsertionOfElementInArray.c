#include<stdio.h>
int main()
{
    int n,a[10], position, element;
    printf("Enter the size of you array : ");
    scanf("%d", &n);
    printf("Enter your elements :");
    for(int i =0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter your element you want to insert : ");
    scanf("%d", &element);
    printf("Enter the position where you want to insert : ");
    scanf("%d", &position);
    for(int i =n-1;i>=position;i--)
    {
        a[i+1] = a[i];
    }
    a[position] = element;
    printf("Array after Inserting the element is\n");
    for (int i = 0; i <=n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
