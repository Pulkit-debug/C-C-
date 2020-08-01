#include<bits/stdc++.h>
using namespace std;

// void star()
// {
//     int n;
//     cout<<"Enter the size of your pattern : ";
//     cin>>n;
//    for(int i =0 ;i<n;i++)
//     {
//         for(int j =0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
 
//    }

// }
// int main()
// {
//    star(); 
//    star();
//    star();

//    return 0;
// }

int pow(int no, int po = 2)
{
    int ans=1;
    for(int i =0;i<po;i++)
    { 
        ans = ans * no;
    }
    return ans;
}
//We know this method as call by value/ pass by value
int main()
{
    int n, p;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>p;
    cout<<"The final result is : "<<pow(n);
    return 0;
}