#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    int temp;
    cout<<"Enter the size of your array : ";
    cin>>n;
    cout<<"Enter the elements of your array : ";
    for (int i =0;i<n;i++)
    cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
        
    }
}
