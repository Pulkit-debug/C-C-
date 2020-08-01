#include<stdio.h>
#include<string.h>
int parser(char string[])
{
    int start = 0;
    int index = 0;
    for(int i =0;i<strlen(string);i++)
    {       
        if(string[i] == '<') 
        {
            start = 0;
        continue;
        }
        else if(string[i] == '>') 
        {
            start = 1;     // Here start = 1 means that now we are starting to collect the elements.
            continue;
        }
        
        if(start == 1)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // index = 0;
    // For leading spaces
    while(string[0] == ' ') 
    {
        for(int i =0;i<strlen(string);i++)
        string[i] = string[i+1];
    }
    // For trailing spaces
    while(string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }


}
int main()
{
    char string[] = "<h1>        This is a heading      </h1>";
    // Outcome:-This is a heading
    parser(string); 
    printf("%s", string);
    int len = strlen(string);
    printf("%d", len);
    return 0;
}