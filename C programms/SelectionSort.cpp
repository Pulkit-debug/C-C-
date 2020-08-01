#include<iostream>
using namespace std;
int main()
{
    int n, a[10];
    int chota, temp;
    cin>>n;
    for(int i =0;i<n;i++)
    cin>>a[i];
    for(int i =0;i<n;i++)
    cout<<a[i]<<" ";

    for(int i =0;i<n;i++)
    {
        chota = i;
        for(int j =i+1;j<n;j++)
        {
            if(a[j]<a[chota])
            {
                chota = j;
            }
            temp = a[i];
            a[i] = a[chota];
            a[chota] = temp;
        }
    }
    cout<<endl;
for(int i =0;i<n;i++)
    cout<<a[i]<<" ";


    return 0;
}
