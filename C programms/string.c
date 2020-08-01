#include<stdio.h>
int printname (char string[])
{
    int i =0;
    while(string[i]!='\0')
    {

        printf("%c", string[i]);
        i++;
    }
}


int main()
{

    char name[1];
    printf("Now i am using gets : ");
    gets(name);
    printf("Let see now: %s", name);
    
    
    
}