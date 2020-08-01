#include<iostream>
using namespace std;
int main()
{
    int n;
    int k =0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i =1;i<=n;i++,k =0)
    {
        while(k!=(2*i)-2)
        {
                cout<<"  ";
                k ++;
        }
        for(int j =i;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
