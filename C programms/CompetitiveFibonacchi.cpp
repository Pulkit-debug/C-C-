#include<iostream>
using namespace std; 
int fib(int f)
{
    if(f==0)
    return 0;

    else if (f==1)
    return 1;

    else
    return (fib(f-1) + fib(f-2));

}
int main()
{
    int sum=0, arr[20], newarr[20];
    int n,t, length,a=3;
    // cout<<"Enter total number of test cases : ";
    // cin>>t;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cout<<fib(i)<<" ";
        arr[i] = fib(i);
        arr[i] = arr[i] %10;
    }
    cout<<endl;
    for(int i =0;i<n;i++)
    { 
    cout<<arr[i]<<" ";
    
    }

   
   
    return 0;
}
