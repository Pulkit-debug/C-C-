#include<iostream>

using namespace std;


int main()
{
    int n, a[10], max=0;
    cout<<"Enter the size of your element : ";
    cin>>n;
    cout<<"Enter the element of your array : ";
    for(int i=0;i<n;i++) 
    cin>>a[i]   ;
    for(int i =0;i<n;i++)
    {
        if(a[i]>max)
        max = a[i];
    }

    cout<<max;
    }