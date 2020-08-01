#include<iostream>
using namespace std;
int main()
{
    int n,t,loop;
    cout<<"Entering total number of test cases : ";
    cin>>t;
    //This is for only first compartment
    //In the same way we can find 18 --> 19 WS and 40 --> 45 AS
    
    for(int i =0;i<t;i++)
    {
        cout<<"Entering the seat number : ";
        cin>>n;
        loop = n%12;
        switch(loop)
        {
            case 0 : 
            {
            cout<<n<<"-->"<<(n-11)<<" "<<"WS";
            break;
            }

            case 1 : 
            {
            cout<<n<<"-->"<<(n+11)<<" "<<"WS";
            break;
            }

            case 2 : 
            {
            cout<<n<<"-->"<<(n+9)<<" "<<"MS";
            break;
            }

            case 3 : 
            {
            cout<<n<<"-->"<<(n+7)<<" "<<"AS";
            break;
            }

            case 4 : 
            {
            cout<<n<<"-->"<<(n+5)<<" "<<"AS";
            break;
            }

            case 5 : 
            {
            cout<<n<<"-->"<<(n+3)<<" "<<"MS";
            break;
            }

            case 6 : 
            {
            cout<<n<<"-->"<<(n+1)<<" "<<"WS";
            break;
            }

            case 7 : 
            {
            cout<<n<<"-->"<<(n-1)<<" "<<"WS";
            break;
            }

            case 8 : 
            {
            cout<<n<<"-->"<<(n-3)<<" "<<"MS";
            break;
            }

            case 9 : 
            {
            cout<<n<<"-->"<<(n-5)<<" "<<"AS";
            break;
            }

            case 10 : 
            {
            cout<<n<<"-->"<<(n-7)<<" "<<"AS";
            break;
            }

            case 11 : 
            {
            cout<<n<<"-->"<<(n-9)<<" "<<"MS";
            break;
            }

            case 12 : 
            {
            cout<<n<<"-->"<<(n-12)<<" "<<"WS";
            break;
            }
        }
        cout<<endl;
    }
    return 0;
}
