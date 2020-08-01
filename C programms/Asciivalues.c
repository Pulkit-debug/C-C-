#include<stdio.h>
int main()
{
    printf("Your all the Ascii values are : ");
    
    int i = 0;
    char ch;
    
    for (i = 0; i < 256; i++)
    {
        printf("%c ",ch);
        ch = ch + 1;
    }
    return 0;
}
