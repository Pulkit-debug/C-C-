#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your value of n : ";
    cin>>n;
    for(int i =1, j=0;i<=n;i++, j=0)
    {
       while(j!=n-i)
       {
           cout<<" ";
           j++;
       }
        
        for(int k =1;k<=(2*i)-1;k++)
        {
            if(k%2==0)
                cout<<" ";
                else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}