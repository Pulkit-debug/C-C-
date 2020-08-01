#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    int x, y;
    printf("Enter the values of x^2, x and c: ");
    scanf("%d %d %d", &a, &b, &c);

    int d = (b*b) - (4*a*c);    //Checking if the roots are imaginary, real or distinct

    if(d < 0)
    printf("Roots are imaginary");
    else if(d == 0) {
        x = -b / (2*a);
    printf("Roots are same x = y = %d", x);
    }
    else
    {
        x = (-b+sqrt(d)) / (2*a);
        y = (-b-sqrt(d)) / (2*a);
        printf("Roots of the equation are x = %d and y = %d", x, y);
    }
    
    }