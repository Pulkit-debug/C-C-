#include<iostream>
using namespace std;
int main()
{
    int a, b,i=0,t;
    cout<<"Entering the number of test cases : ";
    cin>>t;
    while(i<t)
    {
    
    cin>>a>>b;
    if(a==b)
    {
    if(a%2==0 && b%2==0)
    {
        cout<<a+b;
    }
   
    else
    {
    cout<<a+b-1;
    }
    }
    
    else if(a-b==2)
    {
        if(a%2==0 && b%2==0)
        cout<<a+b;
   
    else
    cout<<a+b-1;
    
    }
    else
        cout<<"Number nhi hai be..";
    
    i++;
}
    return 0;
}
