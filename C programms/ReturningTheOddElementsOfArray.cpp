#include<iostream>
using namespace std;
int odd_pos(int a[], int n)
{
    for(int i =1;i<n;i=i+2)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n, a[10];
    cout<<"Enter the size of your array : ";
    cin>>n;
    cout<<"Enter the elements of your array:";
    for(int i =0;i<n;i++)
    cin>>a[i];
    odd_pos(a, n);
   return 0; 
}
