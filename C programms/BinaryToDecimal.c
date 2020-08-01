#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, rem , dec;
    printf("Enter your binary number to convert into decimal : ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n%10;
        dec += rem*pow(2, i);
        n = n/10;
        i++;
    }

    return 0;
}
