#include<iostream>
using namespace std;
// //Fist interger type
// int factorial(int n)
// {
//     int ans = 1;
//     for(int i =1;i<=n;i++)
//     {
//         ans = ans *i;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout<<"Enter your number : ";
//     cin>>n;
//     cout<<"Your factorial is : "<<factorial(n);
// }

// //Second :- float return type
// float divide(float divident, float divisor)
// {
//     float ans = divident / divisor;
//     return ans;
// }
// int main()
// {
//     float divident, divisor;
//     cout<<"Enter your divident : ";
//     cin>>divident;
//     cout<<"Enter your divisor : ";
//     cin>>divisor;
//     cout<<"Your divisor is " <<divide(divident, divisor);
//     return 0;
// }

// char cap(char ar[10], int n)
// {
//     char ch;
//     for(int i =0;i<n;i++)
//         if(ar[i]>=65 && ar[i]<=90)
          
//           return a[i];
// }
// int main()
// {
//     int n = 5;
//     char a[n];
//     for(int i =0;i<n;i++)
//     cin>>a[i];
//     cout<<"Your letter is : "<<cap(a, n);
//     return 0;
// }

//Time to bool
bool isPrime(int n)
{
    if(n<2)
    {
     return false;
    }
    for(int i =2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    
    if(isPrime(n))
    cout<<"Your number is prime ";
    else
    cout<<"Your number is not prime";
    return 0;
}