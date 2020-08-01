#include<iostream>
using namespace std;
int String(string a[], int n)
{
    int flag =0;
    for(int i =0;i<=n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag =1;
            break;
        } 
           }
           if(flag ==0)
           cout<<"The String is Palidrome in nature";
           else
           cout<<"The String is not Palindrome in nature";
}
int main()
{
    int n;
    char ch;
    string a[] = {"i", "p","p", "b", "i"};
    n = sizeof(a)/sizeof(a[0]);
    String(a, n);
    return 0;
}