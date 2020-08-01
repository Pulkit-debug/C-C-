#include<iostream>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int beg, end, mid;
    beg = 0;
    end = n-1;
    while(beg<=end)
    {
        mid =(beg + end)/2;
        if(x==a[mid])
        return mid;
        else if(x < a[mid])
        end = mid-1;
        else
        beg = mid+1;
    }
    
    return -1;
}
int main()
{
    int n, a[10],x;
    cout<<"Enter the size of your array : ";
    cin>>n;
    cout<<"Enter your elements of your array (sorted)";
   for(int i =0;i<n;i++)
   cin>>a[i];
    cout<<"Enter your element to find the location : ";
    cin>>x;
   int result = binary_search(a, n, x);
   if(result == -1)
   cout<<"The element is not present in the array "<<endl;
   else 
   cout<<result;
   
   return 0;
   }
