#include<stdio.h>
void main()
{
    int n=1000, temp=0, lastdigit=0, cube;
    for(int i =1;i<n;i++)
    {
        cube = 0;
        temp = i;
    while(temp!=0)
    {
        
        lastdigit = temp%10;
        cube += lastdigit * lastdigit * lastdigit;
        temp = temp/10;
    }
        if(cube == i)
        printf("%d ", i);
    
    }
    

}