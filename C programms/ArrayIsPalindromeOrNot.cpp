#include<iostream>
using namespace std;
Palindrome(int a[], int n)
{
    int flag =0;
    for(int i =0;i<=n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag ==0)
    cout<<"The array is Palindrome";
    else
    cout<<"The array is not Palindrome";
}
int main()
{
    int n, a[] = {3, 6, 0, 4, 3};
    n = sizeof(a)/sizeof(a[0]);
    Palindrome(a, n);
}