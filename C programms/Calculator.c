#include<stdio.h>

int main()
{
    int n, a ,b ;
    float c;
    printf("Welcome to the arithmatic calculator\n ");
    printf("Choose your operation\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice\n");
    scanf("%d", &n);
    printf("Enter your numbers to arithmat: ");
    scanf("%d %d", &a, &b);
    switch (n)
    {
    case 1: 
     c = a+b;
        printf("%f", c);
        break;
    case 2:
     c = a-b;
        printf("%f", c);
        break;
    case 3:
     c = a*b;
    printf("%0.f", c);
    break;

    case 4:
     c = (float)a/(float)b;
    printf("%f", c);
    break;

    default:
        printf("Ye le Garbage value : %d", c);
    }
    return 0;
}
