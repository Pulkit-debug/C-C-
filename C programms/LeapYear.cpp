#include<iostream>
using namespace std;
int  main()
{
    // Programm to find the leap year between a range
    int n,a, end=0, count;
    cout<<"Enter your starting year  : ";
    cin>>n;
    cout<<"Ending year : "; 
    cin>>a;
    for(int i =n;i<=a;i++)
    {
    if(((i%400==0) || (i%4==0) && (i%100==0)))
    {
            cout<<i<<" ";
    }
    }
    return 0;
}